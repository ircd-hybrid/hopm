/*
 * Copyright (C) 2002-2003  Erik Fears
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to
 *
 *       The Free Software Foundation, Inc.
 *       59 Temple Place - Suite 330
 *       Boston, MA  02111-1307, USA.
 *
 *
 */

#include "setup.h"

#include "config.h"
#include "libopm.h"
#include "memory.h"
#include "opm_error.h"
#include "opm_types.h"
#include "opm_common.h"
#include "list.h"
#include "inet.h"
#include "proxy.h"

#include <errno.h>
#include <sys/time.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <poll.h>


static OPM_PROTOCOL_CONFIG_T *libopm_protocol_config_create(void);
static void libopm_protocol_config_free(OPM_PROTOCOL_CONFIG_T *);

/*
 * XXX - does not appear to be used anywhere?
 * -grifferz
 */
#if 0
static OPM_PROTOCOL_T *libopm_protocol_create(void);
static void libopm_protocol_free(OPM_PROTOCOL_T *);
#endif

static OPM_SCAN_T *libopm_scan_create(OPM_T *, OPM_REMOTE_T *);
static void libopm_scan_free(OPM_SCAN_T *);

static OPM_CONNECTION_T *libopm_connection_create(void);
static void libopm_connection_free(OPM_CONNECTION_T *);

static void libopm_check_establish(OPM_T *);
static void libopm_check_poll(OPM_T *);
static void libopm_check_closed(OPM_T *);
static void libopm_check_queue(OPM_T *);

static void libopm_do_connect(OPM_T *, OPM_SCAN_T *, OPM_CONNECTION_T *);
static void libopm_do_readready(OPM_T *, OPM_SCAN_T *, OPM_CONNECTION_T *);
static void libopm_do_writeready(OPM_T *, OPM_SCAN_T *, OPM_CONNECTION_T *);
static void libopm_do_hup(OPM_T *, OPM_SCAN_T *, OPM_CONNECTION_T *);
static void libopm_do_read(OPM_T *, OPM_SCAN_T *, OPM_CONNECTION_T *);
static void libopm_do_openproxy(OPM_T *, OPM_SCAN_T *, OPM_CONNECTION_T *);
static void libopm_do_callback(OPM_T *, OPM_REMOTE_T *, int, int);

static OPM_REMOTE_T *libopm_setup_remote(OPM_REMOTE_T *, OPM_CONNECTION_T *);


/* OPM_PROTOCOLS hash
 *
 *    OPM_PPROTOCOLS hashes the protocol types (int) to functions
 *    which handle the protocol (sending/receiving protocol specific
 *    data).
 *
 */
static OPM_PROTOCOL_T OPM_PROTOCOLS[] =
{
  { OPM_TYPE_HTTP,     libopm_proxy_http_write,     NULL },
  { OPM_TYPE_SOCKS4,   libopm_proxy_socks4_write,   NULL },
  { OPM_TYPE_SOCKS5,   libopm_proxy_socks5_write,   NULL },
  { OPM_TYPE_ROUTER,   libopm_proxy_router_write,   NULL },
  { OPM_TYPE_WINGATE,  libopm_proxy_wingate_write,  NULL },
  { OPM_TYPE_HTTPPOST, libopm_proxy_httppost_write, NULL }
};

/* opm_create
 *
 *    Initialize a new scanner and return a pointer to it.
 *
 * Parameters:
 *    None
 *
 * Return
 *    Pointer to new OPM_T (scanner)
 */
OPM_T *
opm_create(void)
{
  OPM_T *ret;

  ret = xcalloc(sizeof *ret);
  ret->config = libopm_config_create();
  ret->scans = libopm_list_create();
  ret->queue = libopm_list_create();
  ret->protocols = libopm_list_create();

  /* Setup callbacks */
  ret->callbacks = xcalloc(sizeof(OPM_CALLBACK_T) * CBLEN);

  return ret;
}

/* opm_remote_create
 *
 *    Create OPM_REMOTE_T struct, fill it with neccessary
 *    default values and return it to the client.
 *
 * Parameters:
 *    ip: IP of remote host
 *
 * Return:
 *    Address of OPM_REMOTE_T created
 *
 */
OPM_REMOTE_T *
opm_remote_create(const char *ip)
{
  OPM_REMOTE_T *ret;

  ret = xcalloc(sizeof *ret);
  ret->ip = libopm_xstrdup(ip);
  ret->protocols = libopm_list_create();  /* Setup protocol list */

  return ret;
}

/* opm_remote_free
 *
 *    Free OPM_REMOTE_T struct and cleanup
 *
 * Parameters:
 *    remote: Struct to free
 *
 * Return:
 *    None
 */
void
opm_remote_free(OPM_REMOTE_T *remote)
{
  OPM_NODE_T *p, *next;
  OPM_PROTOCOL_CONFIG_T *ppc;

  MyFree(remote->ip);

  LIST_FOREACH_SAFE(p, next, remote->protocols->head)
  {
    ppc = p->data;

    libopm_protocol_config_free(ppc);
    libopm_list_remove(remote->protocols, p);
    libopm_node_free(p);
  }

  libopm_list_free(remote->protocols);

  MyFree(remote);
}

/* opm_callback
 *    Register scanner level callback
 *
 * Parameters
 *    scanner: scanner struct
 *    type:    callback type
 * Return:
 *    Error code
 */

OPM_ERR_T
opm_callback(OPM_T *scanner, int type, OPM_CALLBACK_FUNC *function, void *data)
{
  if (type < 0 || type >= CBLEN)
    return OPM_ERR_CBNOTFOUND;

  scanner->callbacks[type].func = function;
  scanner->callbacks[type].data = data;

  return OPM_SUCCESS;
}

/* opm_free
 *
 *    Free OPM_T (scanner) and cleanup
 *
 * Parameters:
 *    scanner: Address of OPM_T to cleanup
 *
 * Return:
 *    None
 */
void
opm_free(OPM_T *scanner)
{
  OPM_NODE_T *p, *next;
  OPM_PROTOCOL_CONFIG_T *ppc;
  OPM_SCAN_T *scan;

  libopm_config_free(scanner->config);

  LIST_FOREACH_SAFE(p, next, scanner->protocols->head)
  {
    ppc = p->data;

    libopm_protocol_config_free(ppc);
    libopm_list_remove(scanner->protocols, p);
    libopm_node_free(p);
  }

  LIST_FOREACH_SAFE(p, next, scanner->scans->head)
  {
    scan = p->data;

    libopm_scan_free(scan);
    libopm_list_remove(scanner->scans, p);
    libopm_node_free(p);
  }

  LIST_FOREACH_SAFE(p, next, scanner->queue->head)
  {
    scan = p->data;

    libopm_scan_free(scan);
    libopm_list_remove(scanner->queue, p);
    libopm_node_free(p);
  }

  libopm_list_free(scanner->protocols);
  libopm_list_free(scanner->scans);
  libopm_list_free(scanner->queue);

  MyFree(scanner->callbacks);
  MyFree(scanner);
}

/* opm_config
 *
 *    Wrapper to config_set. Set configuration variables
 *    on the config struct.
 *
 * Parameters:
 *    scanner: OPM_T struct the config struct resides in
 *    key: Variable within the config struct to set
 *    value: Address of value to set variable (key) to
 *
 * Return:
 *    OPM_ERR_T containing error code
 */
OPM_ERR_T
opm_config(OPM_T *scanner, int key, const void *value)
{
  return libopm_config_set((scanner->config), key, value);
}

/* opm_addtype
 *
 *    Add a proxy type and port to the list of protocols
 *    a scanner will use.
 *
 * Parameters:
 *    scanner: pointer to scanner struct
 *    type:    type of proxy to scan (used in hashing to the functions)
 *    port:    port this specific type/protocol will scan on
 * Return:
 *    OPM_SUCCESS: Successful protocol add
 *    OPM_ERR_BADPROTOCOL: Protocol is unknown
 */
OPM_ERR_T
opm_addtype(OPM_T *scanner, int type, unsigned short int port)
{
  OPM_NODE_T *node;
  OPM_PROTOCOL_CONFIG_T *protocol_config;

  for (unsigned int i = 0; i < sizeof(OPM_PROTOCOLS) / sizeof(OPM_PROTOCOL_T); ++i)
  {
    if (type == OPM_PROTOCOLS[i].type)
    {
      protocol_config = libopm_protocol_config_create();
      protocol_config->type = &OPM_PROTOCOLS[i];
      protocol_config->port = port;

      node = libopm_node_create(protocol_config);
      libopm_list_add(scanner->protocols, node);

      return OPM_SUCCESS;
    }
  }

  return OPM_ERR_BADPROTOCOL;
}

/* opm_remote_addtype
 *
 *    Add a proxy type and port to the list of protocols
 *    a scanner will use.
 *
 * Parameters:
 *    remote: pointer to scanner struct
 *    type:    type of proxy to scan (used in hashing to the functions)
 *    port:    port this specific type/protocol will scan on
 * Return:
 *    OPM_SUCCESS: Successful protocol add
 *    OPM_ERR_BADPROTOCOL: Protocol is unknown
 */
OPM_ERR_T opm_remote_addtype(OPM_REMOTE_T *remote, int type, unsigned short int port)
{
  OPM_NODE_T *node;
  OPM_PROTOCOL_CONFIG_T *protocol_config;

  for (unsigned int i = 0; i < sizeof(OPM_PROTOCOLS) / sizeof(OPM_PROTOCOL_T); ++i)
  {
    if (type == OPM_PROTOCOLS[i].type)
    {
      protocol_config = libopm_protocol_config_create();
      protocol_config->type = &OPM_PROTOCOLS[i];
      protocol_config->port = port;

      node = libopm_node_create(protocol_config);
      libopm_list_add(remote->protocols, node);

      return OPM_SUCCESS;
    }
  }

  return OPM_ERR_BADPROTOCOL;
}

/* libopm_protocol_create
 *
 *    Create OPM_PROTOCOL_T struct.
 *
 * Parameters:
 *    None
 * Return:
 *    Pointer to new struct
 *
 * XXX - does not appear to be used anywhere?
 * -grifferz
 */
#if 0
static OPM_PROTOCOL_T *libopm_protocol_create(void)
{
  OPM_PROTOCOL_T *ret;
  ret = xcalloc(sizeof(OPM_PROTOCOL_T));

  ret->type           = 0;
  ret->write_function = NULL;
  ret->read_function  = NULL;

  return ret;
}
#endif

/* libopm_protocol_free
 *
 *    Free an OPM_PROTOCOL_T struct. Assume that if
 *    format is not NULL, it is pointed to dynamically
 *    allocated memory and free it.
 *
 * Parameters:
 *    protocol: struct to free
 *
 * Return:
 *    None
 *
 * XXX - apparently no longer used?
 *  -grifferz
 */
#if 0
static void
libopm_protocol_free(OPM_PROTOCOL_T *protocol)
{
  MyFree(protocol);
}
#endif

/* libopm_protocol_config_create
 *
 *    Allocate and return address of a new OPM_PROTOCOL_CONFIG_T
 *
 * Parameters:
 *    None
 *
 * Return:
 *    Address of new OPM_PROTOCOL_CONFIG_T
 */
static OPM_PROTOCOL_CONFIG_T *
libopm_protocol_config_create(void)
{
  OPM_PROTOCOL_CONFIG_T *ret;

  ret = xcalloc(sizeof *ret);

  return ret;
}

/* protocol_config_free
 *
 *    Free OPM_PROTOCOL_CONFIG_T struct
 *
 * Parameters:
 *    protocol: struct to free
 *
 * Return:
 *    None
 */
static void
libopm_protocol_config_free(OPM_PROTOCOL_CONFIG_T *protocol)
{
  MyFree(protocol);
}

/* opm_scan
 *
 *    Scan remote host. The opm_scan function takes an OPM_REMOTE_T
 *    struct, calculates the in_addr of the remote host, and creates
 *    a scan list based on protocols defined in the scanner.
 *
 * Parameters:
 *    scanner: Scanner to scan host on
 *    remote:  OPM_REMOTE_T defining remote host
 *
 * Return:
 *    (to be written)
 */
OPM_ERR_T
opm_scan(OPM_T *scanner, OPM_REMOTE_T *remote)
{
  OPM_SCAN_T *scan;  /* New scan for OPM_T */
  OPM_NODE_T *node;  /* Node we'll add scan to when we link it to scans */

  if (LIST_SIZE(scanner->protocols) == 0 &&
      LIST_SIZE(remote->protocols) == 0)
    return OPM_ERR_NOPROTOCOLS;

  scan = libopm_scan_create(scanner, remote);

  if (inet_pton(AF_INET, remote->ip, &(scan->addr.sa4.sin_addr)) <= 0)
  {
    libopm_scan_free(scan);
    return OPM_ERR_BADADDR;
  }

  node = libopm_node_create(scan);
  libopm_list_add(scanner->queue, node);

  return OPM_SUCCESS;
}

/* opm_end
 *
 *    End a scan prematurely.
 *
 * Parameters:
 *    scanner: Scanner to end scan on
 *    remote: Pointer to remote struct to search for and end
 *
 * Return:
 *    No return. OPM_CALLBACK_END will still be called as normal.
 */
void
opm_end(OPM_T *scanner, OPM_REMOTE_T *remote)
{
  OPM_NODE_T *node1, *node2, *next1, *next2;
  OPM_SCAN_T *scan;
  OPM_CONNECTION_T *conn;

  /* End active scans */
  opm_endscan(scanner, remote);

  /*
   * Secondly remove all traces of it in the queue. Once removed we have to call
   * OPM_CALLBACK_END
   */
  LIST_FOREACH_SAFE(node1, next1, scanner->queue->head)
  {
    scan = node1->data;

    if (scan->remote == remote)
    {
      /* Free all connections */
      LIST_FOREACH_SAFE(node2, next2, scan->connections->head)
      {
        conn = node2->data;

        libopm_list_remove(scan->connections, node2);
        libopm_connection_free(conn);
        libopm_node_free(node2);
        continue;
      }

      /* OPM_CALLBACK_END because check_closed normally handles this */
      libopm_do_callback(scanner, scan->remote, OPM_CALLBACK_END, 0);

      /* Free up the scan */
      libopm_list_remove(scanner->queue, node1);
      libopm_scan_free(scan);
      libopm_node_free(node1);
    }
  }
}

/* opm_endscan
 *
 *    End a scan prematurely. Only end non-queued scans. This is useful
 *    because it only checks the active scan list (saving time), where
 *    opm_end checks both the scan and the possibly large queue.
 *
 * Parameters:
 *    scanner: Scanner to end scan on
 *    remote: Pointer to remote struct to search for and end
 *
 * Return:
 *    No return. OPM_CALLBACK_END will still be called as normal.
 */
void
opm_endscan(OPM_T *scanner, OPM_REMOTE_T *remote)
{
  OPM_NODE_T *node1, *node2;
  OPM_SCAN_T *scan;
  OPM_CONNECTION_T *conn;

  /*
   * First check to see if it's in the queue, if it is set all connections closed
   * Next cycle of libopm_check_closed will take care of the garbage and handle
   * OPM_CALLBACK_END
   */
  LIST_FOREACH(node1, scanner->scans->head)
  {
    scan = node1->data;

    if (scan->remote == remote)
    {
      LIST_FOREACH(node2, scan->connections->head)
      {
        conn = node2->data;
        conn->state = OPM_STATE_CLOSED;
      }
    }
  }
}

/* opm_active

      Return number of scans in a scanner left.

   Parameters:
      scanner: Scanner to return active scans on

   Return:
      Number of active scans, both queued and active.
*/
size_t
opm_active(OPM_T *scanner)
{
  return LIST_SIZE(scanner->queue) + LIST_SIZE(scanner->scans);
}

/* scan_create
 *
 *    Create new OPM_SCAN_T struct
 *
 * Parameters:
 *    scanner: Scanner the scan is being created for. This
 *             is needed to get information on currently set
 *             protocols/config.
 *
 *    remote: Remote host this scan will be scanning
 *
 * Return
 *    Address of new struct
 */
static OPM_SCAN_T *
libopm_scan_create(OPM_T *scanner, OPM_REMOTE_T *remote)
{
  OPM_SCAN_T *ret;
  OPM_CONNECTION_T *conn;
  OPM_NODE_T *node, *p;

  ret = xcalloc(sizeof *ret);
  ret->remote = remote;
  ret->connections = libopm_list_create();

  /* Setup list of connections, one for each protocol */
  LIST_FOREACH(p, scanner->protocols->head)
  {
    conn = libopm_connection_create();

    conn->protocol = ((OPM_PROTOCOL_CONFIG_T *)p->data)->type;
    conn->port     = ((OPM_PROTOCOL_CONFIG_T *)p->data)->port;

    node = libopm_node_create(conn);
    libopm_list_add(ret->connections, node);
  }

  /*
   * Do the same for any specific protocols the remote struct might be configured with
   */
  LIST_FOREACH(p, remote->protocols->head)
  {
    conn = libopm_connection_create();

    conn->protocol = ((OPM_PROTOCOL_CONFIG_T *)p->data)->type;
    conn->port     = ((OPM_PROTOCOL_CONFIG_T *)p->data)->port;

    node = libopm_node_create(conn);
    libopm_list_add(ret->connections, node);
  }

  return ret;
}

/* scan_free
 *
 *    Free and cleanup OPM_SCAN_T struct
 *
 * Parametsr:
 *    scan: Scan struct to free
 *
 * Return:
 *    None
 */
static void
libopm_scan_free(OPM_SCAN_T *scan)
{
  OPM_NODE_T *p, *next;
  OPM_CONNECTION_T *conn;

  LIST_FOREACH_SAFE(p, next, scan->connections->head)
  {
    conn = p->data;

    libopm_connection_free(conn);
    libopm_list_remove(scan->connections, p);
    libopm_node_free(p);
  }

  libopm_list_free(scan->connections);

  MyFree(scan);
}

/* connection_create
 *
 *    Allocate new OPM_CONNECTION_T
 *
 * Parameters:
 *    None
 *
 * Return:
 *    Address of new OPM_CONNECTION_T
 */
static OPM_CONNECTION_T *
libopm_connection_create(void)
{
  OPM_CONNECTION_T *ret;

  ret = xcalloc(sizeof *ret);
  ret->state = OPM_STATE_UNESTABLISHED;

  return ret;
}

/* connection_free
 *
 *    Free OPM_CONNECTION_T struct
 *
 * Parameters:
 *    conn: Address of struct to free
 *
 * Return:
 *    None
 */
static void
libopm_connection_free(OPM_CONNECTION_T *conn)
{
  MyFree(conn);
}

/* opm_cycle
 *
 *   Perform tasks (called by client's loop)
 *
 * Parameters:
 *   None
 *  Return:
 *    None
 */
void
opm_cycle(OPM_T *scanner)
{
  libopm_check_queue(scanner);      /* Move scans from the queue to the live scan list */
  libopm_check_establish(scanner);  /* Make new connections if possible                */
  libopm_check_poll(scanner);       /* Poll connections for IO  and proxy test         */
  libopm_check_closed(scanner);     /* Check for closed or timed out connections       */
}

/* check_queue
 *
 * Move scans from the queue to the live scan list as long as there is
 * room.
 *
 * Parameters:
 *    scanner: Scanner to check queue on
 *
 * Return:
 *    None
 */
static void
libopm_check_queue(OPM_T *scanner)
{
  OPM_NODE_T *node;
  OPM_SCAN_T *scan;
  unsigned int protocols, projected, fd_limit;

  if (LIST_SIZE(scanner->queue) == 0)
    return;

  fd_limit = *(int *)libopm_config(scanner->config, OPM_CONFIG_FD_LIMIT);
  projected = scanner->fd_use;

  /*
   * We want to keep the live scan list as small as possible, so only move
   * queued scans to the live list if they will not push above fd_limit
   */
  while (LIST_SIZE(scanner->queue) > 0)
  {
    /* Grab the top scan */
    scan = scanner->queue->head->data;
    protocols = LIST_SIZE(scan->connections);

    /* Check if it will fit in the live scan list */
    if ((protocols + projected) > fd_limit)
      break;

    /*
     * Scans on the top of the queue were added first, swap the head off the
     * top of the queue and add it to the tail of the live scan list
     */
    node = libopm_list_remove(scanner->queue, scanner->queue->head);
    libopm_list_add(scanner->scans, node);
    projected += protocols;
  }
}

/* check_establish
 *
 * Make new connections if there are free file descriptors and connections
 * to be made.
 *
 * Parameters:
 *   scanner: Scanner to check for establish on
 * Return:
 *   None
 */
static void
libopm_check_establish(OPM_T *scanner)
{
  OPM_NODE_T *node1, *node2;
  OPM_SCAN_T *scan;
  OPM_CONNECTION_T *conn;
  unsigned int fd_limit;

  if (LIST_SIZE(scanner->scans) == 0)
    return;

  fd_limit = *(int *)libopm_config(scanner->config, OPM_CONFIG_FD_LIMIT);

  if (scanner->fd_use >= fd_limit)
    return;

  LIST_FOREACH(node1, scanner->scans->head)
  {
    scan = node1->data;

    LIST_FOREACH(node2, scan->connections->head)
    {
      /* Only scan if we have free file descriptors */
      if (scanner->fd_use >= fd_limit)
        return;

      conn = node2->data;

      if (conn->state == OPM_STATE_UNESTABLISHED)
        libopm_do_connect(scanner, scan, conn);
    }
  }
}

/* check_closed
 *
 * Check for connections which have timed out or are
 * closed. Connections timed out still need to be closed.
 *
 * Remove the connection from the list of connections, free
 * the connection struct and free the list node. Then if this is
 * the last connection of the scan, consider the scan completed and
 * free the scan aswell (and callback that the scan ended).
 *
 * Parameters:
 *   scanner: Scanner to check on
 * Return:
 *   None
 */
static void
libopm_check_closed(OPM_T *scanner)
{
  time_t present;
  int timeout;
  OPM_NODE_T *node1, *node2, *next1, *next2;
  OPM_SCAN_T *scan;
  OPM_CONNECTION_T *conn;

  if (LIST_SIZE(scanner->scans) == 0)
    return;

  time(&present);
  timeout = *(int *)libopm_config(scanner->config, OPM_CONFIG_TIMEOUT);

  LIST_FOREACH_SAFE(node1, next1, scanner->scans->head)
  {
    scan = node1->data;

    LIST_FOREACH_SAFE(node2, next2, scan->connections->head)
    {
      conn = node2->data;

      if (conn->state == OPM_STATE_CLOSED)
      {
        if (conn->fd > 0)
          close(conn->fd);

        scanner->fd_use--;

        libopm_list_remove(scan->connections, node2);
        libopm_connection_free(conn);
        libopm_node_free(node2);
        continue;
      }

      if (((present - conn->creation) >= timeout) && conn->state != OPM_STATE_UNESTABLISHED)
      {
        close(conn->fd);
        scanner->fd_use--;

        libopm_do_callback(scanner, libopm_setup_remote(scan->remote, conn), OPM_CALLBACK_TIMEOUT, 0);
        libopm_list_remove(scan->connections, node2);
        libopm_connection_free(conn);
        libopm_node_free(node2);
        continue;
      }
    }

    /*
     * No more connections left in this scan, let the client know the scan has
     * ended, then remove the scan from the scanner, and free it up.
     */
    if (LIST_SIZE(scan->connections) == 0)
    {
      libopm_do_callback(scanner, scan->remote, OPM_CALLBACK_END, 0);
      libopm_list_remove(scanner->scans, node1);
      libopm_scan_free(scan);
      libopm_node_free(node1);
    }
  }
}

/* do_connect
 *
 * Call socket() and connect() to start a scan.
 *
 * Parametsr:
 *    scan: Scan struct containing the connection
 *    conn: Connection to establish
 * Return:
 *    None
 */
static void
libopm_do_connect(OPM_T * scanner, OPM_SCAN_T *scan, OPM_CONNECTION_T *conn)
{
  opm_sockaddr *bind_ip;
  struct sockaddr_in *addr;  /* Outgoing host */
  struct sockaddr_in local_addr;  /* For binding */

  addr = (struct sockaddr_in *)&(scan->addr.sa4);  /* Already have the IP in byte format from opm_scan */
  addr->sin_family = AF_INET;
  addr->sin_port   = htons(conn->port);

  bind_ip = (opm_sockaddr *)libopm_config(scanner->config, OPM_CONFIG_BIND_IP);

  conn->fd = socket(AF_INET, SOCK_STREAM, 0);
  scanner->fd_use++;  /* Increase file descriptor use */

  if (conn->fd == -1)
  {
    libopm_do_callback(scanner, libopm_setup_remote(scan->remote, conn), OPM_CALLBACK_ERROR, OPM_ERR_NOFD);
    conn->state = OPM_STATE_CLOSED;
    return;
  }

  if (bind_ip)
  {
    memset(&local_addr, 0, sizeof(local_addr));

    local_addr.sin_addr.s_addr = bind_ip->sa4.sin_addr.s_addr;
    local_addr.sin_family = AF_INET;
    local_addr.sin_port = htons(0);

    if (bind(conn->fd, (struct sockaddr *)&(local_addr), sizeof(local_addr)) == -1)
    {
      libopm_do_callback(scanner, libopm_setup_remote(scan->remote, conn), OPM_CALLBACK_ERROR, OPM_ERR_BIND);
      conn->state = OPM_STATE_CLOSED;
      return;
    }
  }

  /* Set socket non blocking */
  fcntl(conn->fd, F_SETFL, O_NONBLOCK);

  connect(conn->fd, (struct sockaddr *)addr, sizeof(*addr));

  conn->state = OPM_STATE_ESTABLISHED;
  time(&conn->creation);  /* Stamp creation time, for timeout */
}

/* check_poll
 *
 * Check sockets for ready read/write
 *
 * Parameters:
 *    scanner: Scanner to isolate check on
 * Return:
 *    None
 */
static void
libopm_check_poll(OPM_T *scanner)
{
  OPM_NODE_T *node1, *node2;
  OPM_SCAN_T *scan;
  OPM_CONNECTION_T *conn;
  unsigned int size = 0;
  static unsigned int ufds_size;
  static struct pollfd *ufds = NULL;

  /* Grow pollfd array (ufds) as needed */
  if (ufds_size < (*(unsigned int *)libopm_config(scanner->config, OPM_CONFIG_FD_LIMIT)))
  {
    MyFree(ufds);

    ufds = xcalloc((sizeof *ufds) * (*(unsigned int *)libopm_config(scanner->config, OPM_CONFIG_FD_LIMIT)));
    ufds_size = (*(unsigned int *)libopm_config(scanner->config, OPM_CONFIG_FD_LIMIT));
  }

  if (LIST_SIZE(scanner->scans) == 0)
    return;

  LIST_FOREACH(node1, scanner->scans->head)
  {
    scan = node1->data;

    LIST_FOREACH(node2, scan->connections->head)
    {
      if (size >= ufds_size)
        break;

      conn = node2->data;

      if (conn->state < OPM_STATE_ESTABLISHED ||
          conn->state == OPM_STATE_CLOSED)
        continue;

      ufds[size].events = 0;
      ufds[size].revents = 0;
      ufds[size].fd = conn->fd;

      /* Check for HUNG UP. */
      ufds[size].events |= POLLHUP;
      /* Check for INVALID FD */
      ufds[size].events |= POLLNVAL;

      switch (conn->state)
      {
        case OPM_STATE_ESTABLISHED:
          ufds[size].events |= POLLOUT;
          break;
        case OPM_STATE_NEGSENT:
          ufds[size].events |= POLLIN;
          break;
      }

      size++;
    }
  }

  switch (poll(ufds, size, 0))
  {
    case -1:
      /* error in select/poll */
      return;
    case 0:
      /* Nothing to do */
      return;

    /* Pass pointer to connection to handler. */
  }

  LIST_FOREACH(node1, scanner->scans->head)
  {
    scan = node1->data;

    LIST_FOREACH(node2, scan->connections->head)
    {
      conn = node2->data;

      for (unsigned int i = 0; i < size; ++i)
      {
        if ((ufds[i].fd == conn->fd) && (conn->state != OPM_STATE_CLOSED))
        {
          if (ufds[i].revents & POLLIN)
            libopm_do_readready(scanner, scan, conn);
          if (ufds[i].revents & POLLOUT)
            libopm_do_writeready(scanner, scan, conn);
          if (ufds[i].revents & POLLHUP)
            libopm_do_hup(scanner, scan, conn);
        }
      }
    }
  }
}

/* do_readready
 *
 *    Remote connection is read ready, read the data into a buffer and check it against
 *    the target_string if neccessary
 *
 *    Parameters:
 *       scanner: Scanner doing the scan
 *       scan: Specific scan
 *       conn: Specific connection in the scan
 *
 *    Return:
 *       None
 */
static void
libopm_do_readready(OPM_T *scanner, OPM_SCAN_T *scan, OPM_CONNECTION_T *conn)
{
  int max_read;
  char c;

  /*
   * If protocol has a specific read function, call that instead of
   * reading data from here.
   */
  if (conn->protocol->read_function)
  {
    conn->protocol->read_function(scanner, scan, conn);
    return;
  }

  max_read = *(int *)libopm_config(scanner->config, OPM_CONFIG_MAX_READ);

  while (1)
  {
    switch (read(conn->fd, &c, 1))
    {
      case 0:
        libopm_do_hup(scanner, scan, conn);
        return;

      case -1:
        if (errno != EAGAIN)
          libopm_do_hup(scanner, scan, conn);
        return;

      default:
        conn->bytes_read++;

        if (conn->bytes_read >= max_read)
        {
          libopm_do_callback(scanner, libopm_setup_remote(scan->remote, conn), OPM_CALLBACK_ERROR, OPM_ERR_MAX_READ);
          conn->state = OPM_STATE_CLOSED;
          return;
        }

        if (c == '\0' || c == '\r')
          continue;

        if (c == '\n')
        {
          conn->readbuf[conn->readlen] = '\0';
          conn->readlen = 0;

          libopm_do_read(scanner, scan, conn);

          if (conn->state == OPM_STATE_CLOSED)
            return;

          continue;
        }

        if (conn->readlen < READBUFLEN)
          conn->readbuf[++(conn->readlen) - 1] = c;  /* -1 to pad for null term */
    }
  }
}

/* do_read
 *
 *    A line of data has been read from the socket, check it against
 *    target string.
 *
 *
 *
 *    Parameters:
 *       scanner: Scanner doing the scan
 *       scan: Specific scan
 *       conn: Specific connection in the scan
 *
 *    Return:
 *       None
 */
static void
libopm_do_read(OPM_T *scanner, OPM_SCAN_T *scan, OPM_CONNECTION_T *conn)
{
  OPM_LIST_T *list;
  OPM_NODE_T *node;
  char *target_string;

  /* Check readbuf against target strings */
  list = (OPM_LIST_T *)libopm_config(scanner->config, OPM_CONFIG_TARGET_STRING);

  LIST_FOREACH(node, list->head)
  {
    target_string = node->data;

    if (strstr(conn->readbuf, target_string))
    {
      libopm_do_openproxy(scanner, scan, conn);
      break;
    }
  }
}

/* do_openproxy
 *
 *    An open proxy was found on connection conn. Cleanup the connection and
 *    call the appropriate callback to let the client know the proxy was found.
 *
 *    Parameters:
 *       scanner: Scanner doing the scan
 *       scan: Specific scan
 *       conn: Specific connection in the scan
 *
 *    Return:
 *       None
 */
static void
libopm_do_openproxy(OPM_T *scanner, OPM_SCAN_T *scan, OPM_CONNECTION_T *conn)
{
  /* Mark the connection for close */
  conn->state = OPM_STATE_CLOSED;

  /* Call client's open proxy callback */
  libopm_do_callback(scanner, libopm_setup_remote(scan->remote, conn), OPM_CALLBACK_OPENPROXY, 0);
}

/*  do_writeready
 *
 *    Remote connection is write ready, call the specific protocol
 *    function for writing to this socket.
 *
 *    Parameters:
 *       scanner: Scanner doing the scan
 *       scan: Specific scan
 *       conn: Specific connection in the scan
 *
 *    Return:
 *       None
 */
static void
libopm_do_writeready(OPM_T *scanner, OPM_SCAN_T *scan, OPM_CONNECTION_T *conn)
{
  OPM_PROTOCOL_T *protocol;

  protocol = conn->protocol;

  /* Call write function for specific protocol */
  if (protocol->write_function)
    protocol->write_function(scanner, scan, conn);

  /* Flag as NEGSENT so we don't have to send data again*/
  conn->state = OPM_STATE_NEGSENT;
}

/* do_hup
 *
 *    Connection ended prematurely
 *
 * Parameters:
 *       scanner: Scanner doing the scan
 *       scan: Specific scan
 *       conn: Specific connection in the scan
 *       error: OPM_ERR_T containing the error type
 * Return:
 *       None
 */
static void
libopm_do_hup(OPM_T *scanner, OPM_SCAN_T *scan, OPM_CONNECTION_T *conn)
{
  /* Mark the connection for close */
  conn->state = OPM_STATE_CLOSED;

  libopm_do_callback(scanner, libopm_setup_remote(scan->remote, conn), OPM_CALLBACK_NEGFAIL, 0);
}

/* do_callback
 *
 *    Call callback
 *
 * Parameters:
 *    scanner: scanner remote is on
 *    remote:  remote callback is for
 *    type:    callback type
 *    var:     optional var passed back (error codes, etc )
 * Return:
 *    None
 */
static void
libopm_do_callback(OPM_T *scanner, OPM_REMOTE_T *remote, int type, int var)
{
  /* Callback is out of range */
  if (type < 0 || type >= CBLEN)
    return;

  if (scanner->callbacks[type].func)
    (scanner->callbacks[type].func)(scanner, remote, var, scanner->callbacks[type].data);
}

/* setup_remote
 *
 * Setup an OPM_REMOTE_T with information from an OPM_CONNECTION_T
 * for callback
 *
 * Parameters:
 *    remote, conn
 *
 * Return:
 *    remote
 */
static OPM_REMOTE_T *
libopm_setup_remote(OPM_REMOTE_T *remote, OPM_CONNECTION_T *conn)
{
  remote->port = conn->port;
  remote->bytes_read = conn->bytes_read;
  remote->protocol = conn->protocol->type;

  return remote;
}

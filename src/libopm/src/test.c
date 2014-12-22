/*
 * Copyright (C) 2002  Erik Fears
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

#include <stdio.h>
#include "opm.h"
#include "opm_error.h"
#include "opm_types.h"
#include "compat.h"
#ifdef HAVE_UNISTD_H
# include <unistd.h>
#endif

RCSID("$Id: test.c,v 1.36 2003/06/20 04:55:14 andy Exp $");

#define ARRAY_SIZEOF(x) (sizeof(x) / sizeof((x)[0]))

void open_proxy(OPM_T *, OPM_REMOTE_T *, int, void *);
void negotiation_failed(OPM_T *, OPM_REMOTE_T *, int, void *);
void timeout(OPM_T *, OPM_REMOTE_T *, int, void *);
void end(OPM_T *, OPM_REMOTE_T *, int, void *);
void handle_error(OPM_T *, OPM_REMOTE_T *, int, void *);

int complete = 0;

int main(int argc, char **argv)
{
   OPM_ERR_T err;
   int fdlimit = 1024;
   int scan_port = 6667;
   int max_read = 4096;
   int scantimeout  = 10;
   unsigned int i, s;

   unsigned short http_ports[] = {
      8000, 8080, 3128, 80
   };

   unsigned short wingate_ports[] = {
      23
   };

   unsigned short router_ports[] = {
      23
   };
   
   unsigned short socks4_ports[] = {
      1080
   };

   unsigned short socks5_ports[] = {
      1080
   };

   unsigned short httppost_ports[] = {
      80, 8090, 3128
   };
   
   OPM_T *scanner;
   OPM_REMOTE_T *remote;

   scanner = opm_create();
  
   if(argc >= 2)
      remote  = opm_remote_create(argv[1]);
   else
      remote  = opm_remote_create("127.0.0.1");

   /* Setup callbacks */
   opm_callback(scanner, OPM_CALLBACK_OPENPROXY, &open_proxy, NULL);
   opm_callback(scanner, OPM_CALLBACK_NEGFAIL, &negotiation_failed, NULL);
   opm_callback(scanner, OPM_CALLBACK_TIMEOUT, &timeout, NULL);
   opm_callback(scanner, OPM_CALLBACK_END, &end, NULL);
   opm_callback(scanner, OPM_CALLBACK_ERROR, &handle_error, NULL);


   /* Setup the scanner configuration */ 
   opm_config(scanner, OPM_CONFIG_FD_LIMIT, &fdlimit);
   opm_config(scanner, OPM_CONFIG_SCAN_IP, "216.175.104.202");
   opm_config(scanner, OPM_CONFIG_SCAN_PORT, &scan_port);
   opm_config(scanner, OPM_CONFIG_TARGET_STRING, "*** Looking up your hostname...");
   opm_config(scanner, OPM_CONFIG_TARGET_STRING, "ERROR :Trying to reconnect too fast.");
   opm_config(scanner, OPM_CONFIG_TIMEOUT, &scantimeout);
   opm_config(scanner, OPM_CONFIG_MAX_READ, &max_read);

   /* Setup the protocol configuration */
   for (s = ARRAY_SIZEOF(http_ports), i = 0; i < s; i++) {
      opm_addtype(scanner, OPM_TYPE_HTTP, http_ports[i]);
   }
   
   for (s = ARRAY_SIZEOF(wingate_ports), i = 0; i < s; i++) {
      opm_addtype(scanner, OPM_TYPE_WINGATE, wingate_ports[i]);
   }
   
   for (s = ARRAY_SIZEOF(router_ports), i = 0; i < s; i++) {
      opm_addtype(scanner, OPM_TYPE_ROUTER, router_ports[i]);
   }
   
   for (s = ARRAY_SIZEOF(socks4_ports), i = 0; i < s; i++) {
      opm_addtype(scanner, OPM_TYPE_SOCKS4, socks4_ports[i]);
   }
   
   for (s = ARRAY_SIZEOF(socks5_ports), i = 0; i < s; i++) {
      opm_addtype(scanner, OPM_TYPE_SOCKS5, socks5_ports[i]);
   }
   
   for (s = ARRAY_SIZEOF(httppost_ports), i = 0; i < s; i++) {
      opm_addtype(scanner, OPM_TYPE_HTTPPOST, httppost_ports[i]);
   }
   
   /* Remote structs can also have their own extended protocol configurations. For instance
      if the target hostname contains strings such as 'proxy' or 'www', extended ports could
      be scanned. */
   opm_remote_addtype(remote, OPM_TYPE_HTTP, 8001);
   opm_remote_addtype(remote, OPM_TYPE_HTTP, 8002);

   switch(err = opm_scan(scanner, remote))
   {
      case OPM_SUCCESS:
                       break;
      case OPM_ERR_BADADDR:
                       printf("Bad address\n");
                       opm_free(scanner);
                       opm_remote_free(remote);
                       return 0;
      default:
                       printf("Unknown Error %d\n", err);
                       return 0;
   }
   

   while(!complete)
      opm_cycle(scanner);

   opm_free(scanner);

   return 0; 
}

void open_proxy(OPM_T *scanner, OPM_REMOTE_T *remote, int notused,
      void *data)
{
   USE_VAR(notused);
   USE_VAR(data);

   printf("Open proxy on %s:%d [%d bytes read]\n", remote->ip,
         remote->port, remote->bytes_read);
   opm_end(scanner, remote);
}

void negotiation_failed(OPM_T *scanner, OPM_REMOTE_T *remote, int notused,
      void *data)
{
   USE_VAR(scanner);
   USE_VAR(notused);
   USE_VAR(data);

   printf("Negotiation on %s:%d failed [%d bytes read]\n", remote->ip,
         remote->port, remote->bytes_read);
}

void timeout(OPM_T *scanner, OPM_REMOTE_T *remote, int notused, void *data)
{
   USE_VAR(scanner);
   USE_VAR(notused);
   USE_VAR(data);

   printf("Negotiation timed out on %s:%d\n", remote->ip, remote->port);
}

void end(OPM_T *scanner, OPM_REMOTE_T *remote, int notused, void *data)
{
   USE_VAR(scanner);
   USE_VAR(notused);
   USE_VAR(data);

   printf("Scan on %s has ended\n", remote->ip);
   opm_remote_free(remote);
   complete = 1;
}

void handle_error(OPM_T *scanner, OPM_REMOTE_T *remote, int err, void *data)
{
   USE_VAR(scanner);
   USE_VAR(data);

   switch(err)
   {
      case OPM_ERR_MAX_READ:
         printf("Reached MAX READ on %s:%d\n", remote->ip, remote->port);
         break;
      case OPM_ERR_BIND:
         printf("Unable to bind for %s:%d\n", remote->ip, remote->port);
         break;
      case OPM_ERR_NOFD:
         printf("Unable to allocate file descriptor for %s:%d\n",
               remote->ip, remote->port);
         break;
      default:
         printf("Unknown error on %s:%d, err = %d\n", remote->ip,
               remote->port, err);
   }
}

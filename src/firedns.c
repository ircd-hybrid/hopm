/* vim: set shiftwidth=3 softtabstop=3 expandtab: */

/*
firedns.c - firedns library
Copyright (C) 2002 Ian Gulliver
 
This file has been gutted and mucked with for use in BOPM - see the
real library at http://ares.penguinhosting.net/~ian/ before you judge
firedns based on this..
 
This program is free software; you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License as
published by the Free Software Foundation.
 
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
 
You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include "setup.h"

#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/poll.h>
#include <sys/time.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>

#include "compat.h"
#include "inet.h"
#include "malloc.h"
#include "firedns.h"
#include "config.h"
#include "list.h"
#include "log.h"
#include "dnsbl.h"

RCSID("$Id: firedns.c,v 1.22 2005/06/03 12:58:12 dg Exp $");

#define FIREDNS_TRIES 3
#define min(a,b) (a < b ? a : b)

/* Global variables */

int fdns_errno = FDNS_ERR_NONE;
unsigned int fdns_fdinuse = 0;

/* Variables local to this file */

/* up to FDNS_MAX nameservers; populated by firedns_init() */
static struct in_addr servers4[FDNS_MAX];
/* actual count of nameservers; set by firedns_init() */
static int i4;

#ifdef IPV6
static int i6;
static struct in6_addr servers6[FDNS_MAX];
#endif

/*
 * linked list of open DNS queries; populated by firedns_add_query(),
 * decimated by firedns_getresult()
 */
static list_t *CONNECTIONS = NULL;

/*
 * List of errors, in order of values used in FDNS_ERR_*, returned by
 * firedns_strerror
 */
static char *errors[] = {
   "Success",
   "Format error",
   "Server failure",
   "Name error",
   "Not implemented",
   "Refused",
   "Timeout",
   "Network error",
   "FD Limit reached",
   "Unknown error"
};

/* Structures */

/* open DNS query */
struct s_connection
{
   /*
    * unique ID (random number), matches header ID; both set by
    * firedns_add_query()
    */
   unsigned char id[2];
   unsigned short class;
   unsigned short type;
   /* file descriptor returned from sockets */
   int fd;
   void *info;
   time_t start;
   char lookup[256];
#ifdef IPV6
   int v6;
#endif
};

struct s_rr_middle
{
   unsigned short type;
   unsigned short class;
   /* XXX - firedns depends on this being 4 bytes */
   uint32 ttl;
   unsigned short rdlength;
};

/* DNS query header */
struct s_header
{
   unsigned char id[2];
   unsigned char flags1;
#define FLAGS1_MASK_QR 0x80
/* bitshift right 3 */
#define FLAGS1_MASK_OPCODE 0x78
#define FLAGS1_MASK_AA 0x04
#define FLAGS1_MASK_TC 0x02
#define FLAGS1_MASK_RD 0x01

   unsigned char flags2;
#define FLAGS2_MASK_RA 0x80
#define FLAGS2_MASK_Z  0x70
#define FLAGS2_MASK_RCODE 0x0f

   unsigned short qdcount;
   unsigned short ancount;
   unsigned short nscount;
   unsigned short arcount;
   /* DNS question, populated by firedns_build_query_payload() */
   unsigned char payload[512];
};

/* Function prototypes */

static struct s_connection *firedns_add_query(void);
static int firedns_doquery(struct s_connection *s);
static int firedns_build_query_payload(const char * const name,
      unsigned short rr, unsigned short class, unsigned char * payload);
static int firedns_send_requests(struct s_header *h, struct s_connection *s,
      int l);


void firedns_init(void)
{
   /*
    * populates servers4 (or -6) struct with up to FDNS_MAX nameserver IP
    * addresses from /etc/firedns.conf (or /etc/resolv.conf)
    */
   FILE *f;
   int i;
   struct in_addr addr4;
   char buf[1024];
   char *file;
#ifdef IPV6

   struct in6_addr addr6;

   i6 = 0;
#endif

   i4 = 0;

   /* Initialize connections list */
   CONNECTIONS = list_create();

   srand((unsigned int) time(NULL));
   memset(servers4,'\0',sizeof(struct in_addr) * FDNS_MAX);
#ifdef IPV6

   memset(servers6,'\0',sizeof(struct in6_addr) * FDNS_MAX);
#endif
   /* read etc/firedns.conf if we've got it, otherwise parse /etc/resolv.conf */
   f = fopen(FDNS_CONFIG_PREF,"r");
   if (f == NULL)
   {
      f = fopen(FDNS_CONFIG_FBCK,"r");
      if (f == NULL)
      {
         log_printf("Unable to open %s", FDNS_CONFIG_FBCK);
         return;
      }
      file = FDNS_CONFIG_FBCK;
      while (fgets(buf,1024,f) != NULL)
      {
         if (strncmp(buf,"nameserver",10) == 0)
         {
            i = 10;
            while (buf[i] == ' ' || buf[i] == '\t')
               i++;
#ifdef IPV6
            /* glibc /etc/resolv.conf seems to allow ipv6 server names */
            if (i6 < FDNS_MAX)
            {
               if (inet_pton6(&buf[i], (char *)&addr6) != NULL)
               {
                  memcpy(&servers6[i6++],&addr6,sizeof(struct in6_addr));
                  continue;
               }
            }
#endif
            if (i4 < FDNS_MAX)
            {
               if (inet_aton(&buf[i], &addr4))
               {
                  memcpy(&servers4[i4++],&addr4,sizeof(struct in_addr));
               }
            }
         }
      }
   }
   else
   {
      file = FDNS_CONFIG_PREF;
      while (fgets(buf,1024,f) != NULL)
      {
         buf[strspn(buf, "0123456789.")] = '\0';
#ifdef IPV6
         if (i6 < FDNS_MAX)
         {
            if (inet_pton(AF_INET6, buf, (char *)&addr6))
            {
               memcpy(&servers6[i6++], &addr6, sizeof(struct in6_addr));
               continue;
            }
         }
#endif
         if (i4 < FDNS_MAX)
         {
            if (inet_pton(AF_INET, buf, (char *)&addr4))
               memcpy(&servers4[i4++],&addr4,sizeof(struct in_addr));
         }
      }
   }
   fclose(f);

   if(i4 == 0
#ifdef IPV6 /* (yuck) */
         && i6
#endif
     )
   {
      log_printf("FIREDNS -> No nameservers found in %s", file);
      exit(EXIT_FAILURE);
   }
}

struct in_addr *firedns_resolveip4(const char * const name)
{ /* immediate A query */
   static struct in_addr addr;

   if(inet_aton(name, &addr))
      return &addr;
   
   return (struct in_addr *) firedns_resolveip(FDNS_QRY_A, name);
}

struct in6_addr *firedns_resolveip6(const char * const name)
{ /* immediate AAAA query */
   return (struct in6_addr *) firedns_resolveip(FDNS_QRY_AAAA, name);
}

char *firedns_resolveip(int type, const char * const name)
{ /* resolve a query of a given type */
   int fd, t, i;
   struct firedns_result *result;
   struct timeval tv;
   fd_set s;

   for (t = 0; t < FIREDNS_TRIES; t++)
   {
      fd = firedns_getip(type, name, NULL);
      if (fd == -1)
         return NULL;

      tv.tv_sec = 5;
      tv.tv_usec = 0;
      FD_ZERO(&s);
      FD_SET(fd, &s);
      i = select(fd + 1, &s, NULL, NULL, &tv);

      result = firedns_getresult(fd);
      
      if (fdns_errno == FDNS_ERR_NONE)
      /* Return is from static memory in getresult, so there is no need to
         copy it until the next call to firedns. */
         return result->text;
      else if(fdns_errno == FDNS_ERR_NXDOMAIN)
         return NULL;
   }
   if(fdns_errno == FDNS_ERR_NONE)
      fdns_errno = FDNS_ERR_TIMEOUT;
   return NULL;
}

/*
 * build, add and send specified query; retrieve result with
 * firedns_getresult()
 */
int firedns_getip(int type, const char * const name, void *info)
{
   struct s_connection *s;
   node_t *node;
   int fd;

   s = firedns_add_query();

   s->class = 1;
   s->type = type;
   strncpy(s->lookup, name, 256);
   s->info = info;
   
   if(fdns_fdinuse >= OptionsItem->dns_fdlimit)
   {
      fdns_errno = FDNS_ERR_FDLIMIT;
      /* Don't add to queue if there is no info */
      if(info == NULL)
      {
         MyFree(s);
      }else{
         node = node_create(s);
         list_add(CONNECTIONS, node);      
      }
      return -1;
   }

   fd = firedns_doquery(s);

   if(fd == -1)
   {
      MyFree(s);
      return -1;
   }

   node = node_create(s);
   list_add(CONNECTIONS, node);
   return fd;
}

static struct s_connection *firedns_add_query(void)
{ /* build DNS query, add to list */
   struct s_connection *s;

   /* create new connection object */
   s = MyMalloc(sizeof *s);

   /* verified by firedns_getresult() */
   s->id[0] = rand() % 255;
   s->id[1] = rand() % 255;

   s->fd = -1;

   return s;
}

static int firedns_doquery(struct s_connection *s)
{
   int len;
   struct s_header h;

   len = firedns_build_query_payload(s->lookup, s->type, 1,
         (unsigned char *)&h.payload);

   if(len == -1)
   {
      fdns_errno = FDNS_ERR_FORMAT;
      return -1;
   }

   return firedns_send_requests(&h, s, len);
}

/*
 * populate payload with query: name= question, rr= record type
 */
static int firedns_build_query_payload(const char * const name,
      unsigned short rr, unsigned short class, unsigned char * payload)
{
   short payloadpos;
   const char * tempchr, * tempchr2;
   unsigned short l;

   payloadpos = 0;
   tempchr2 = name;

   /* split name up into labels, create query */
   while ((tempchr = strchr(tempchr2,'.')) != NULL)
   {
      l = tempchr - tempchr2;
      if (payloadpos + l + 1 > 507)
         return -1;
      payload[payloadpos++] = l;
      memcpy(&payload[payloadpos],tempchr2,l);
      payloadpos += l;
      tempchr2 = &tempchr[1];
   }
   l = strlen(tempchr2);
   if (l)
   {
      if (payloadpos + l + 2 > 507)
         return -1;
      payload[payloadpos++] = l;
      memcpy(&payload[payloadpos],tempchr2,l);
      payloadpos += l;
      payload[payloadpos++] = '\0';
   }
   if (payloadpos > 508)
      return -1;
   l = htons(rr);
   memcpy(&payload[payloadpos],&l,2);
   l = htons(class);
   memcpy(&payload[payloadpos + 2],&l,2);
   return payloadpos + 4;
}

/* send DNS query */
static int firedns_send_requests(struct s_header *h, struct s_connection *s,
      int l)
{
   int i, sent_ok = 0;
   struct sockaddr_in addr4;

#ifdef IPV6
   struct sockaddr_in6 addr6;
#endif
   
   /* set header flags */
   h->flags1 = 0 | FLAGS1_MASK_RD;
   h->flags2 = 0;
   h->qdcount = htons(1);
   h->ancount = htons(0);
   h->nscount = htons(0);
   h->arcount = htons(0);
   memcpy(h->id, s->id, 2);

   /* try to create ipv6 or ipv4 socket */
#ifdef IPV6

   s->v6 = 0;
   if (i6 > 0)
   {
      s->fd = socket(PF_INET6, SOCK_DGRAM, 0);
      if (s->fd != -1)
      {
         if (fcntl(s->fd, F_SETFL, O_NONBLOCK) != 0)
         {
            close(s->fd);
            s->fd = -1;
         }
      }
      if (s->fd != -1)
      {
         struct sockaddr_in6 addr6;
         memset(&addr6,0,sizeof(addr6));
         addr6.sin6_family = AF_INET6;
         if (bind(s->fd,(struct sockaddr *)&addr6,sizeof(addr6)) == 0)
            s->v6 = 1;
         else
         {
            close(s->fd);
         }
      }
   }
   if (s->v6 == 0)
   {
#endif
      s->fd = socket(PF_INET, SOCK_DGRAM, 0);
      if (s->fd != -1)
      {
         if (fcntl(s->fd, F_SETFL, O_NONBLOCK) != 0)
         {
            close(s->fd);
            s->fd = -1;
         }
      }
      if (s->fd != -1)
      {
         struct sockaddr_in addr;
         memset(&addr,0,sizeof(addr));
         addr.sin_family = AF_INET;
         addr.sin_port = 0;
         addr.sin_addr.s_addr = INADDR_ANY;
         if (bind(s->fd,(struct sockaddr *)&addr,sizeof(addr)) != 0)
         {
            close(s->fd);
            s->fd = -1;
         }
      }
      if (s->fd == -1)
      {
         fdns_errno = FDNS_ERR_NETWORK;
         return -1;
      }
#ifdef IPV6

   }
#endif


#ifdef IPV6
   /* if we've got ipv6 support, an ip v6 socket, and ipv6 servers, send to them */
   if (i6 > 0 && s->v6 == 1)
   {
      for (i = 0; i < i6; i++)
      {
         memset(&addr6,0,sizeof(addr6));
         memcpy(&addr6.sin6_addr,&servers6[i],sizeof(addr6.sin6_addr));
         addr6.sin6_family = AF_INET6;
         addr6.sin6_port = htons(FDNS_PORT);
         if(sendto(s->fd, h, l + 12, 0, (struct sockaddr *) &addr6, sizeof(addr6)) > 0)
            sent_ok = 1;
      }
   }
#endif

   for (i = 0; i < i4; i++)
   {
#ifdef IPV6
      /* send via ipv4-over-ipv6 if we've got an ipv6 socket */
      if (s->v6 == 1)
      {
         memset(&addr6,0,sizeof(addr6));
         memcpy(addr6.sin6_addr.s6_addr,"\0\0\0\0\0\0\0\0\0\0\xff\xff",12);
         memcpy(&addr6.sin6_addr.s6_addr[12],&servers4[i].s_addr,4);
         addr6.sin6_family = AF_INET6;
         addr6.sin6_port = htons(FDNS_PORT);
         if(sendto(s->fd, h, l + 12, 0, (struct sockaddr *) &addr6, sizeof(addr6)) > 0)
            sent_ok = 1;
         continue;
      }
#endif
      /* otherwise send via standard ipv4 boringness */
      memset(&addr4,0,sizeof(addr4));
      memcpy(&addr4.sin_addr,&servers4[i],sizeof(addr4.sin_addr));
      addr4.sin_family = AF_INET;
      addr4.sin_port = htons(FDNS_PORT);
      if(sendto(s->fd, h, l + 12, 0, (struct sockaddr *) &addr4, sizeof(addr4)) > 0)
         sent_ok = 1;
   }

   if(!sent_ok)
   {
      close(s->fd);
      s->fd = -1;
      fdns_errno = FDNS_ERR_NETWORK;
      return -1;
   }
   
   time(&s->start);
   fdns_fdinuse++;
   fdns_errno = FDNS_ERR_NONE;
   return s->fd;
}

struct firedns_result *firedns_getresult(const int fd)
{ /* retrieve result of DNS query */
   static struct firedns_result result;
   struct s_header h;
   struct s_connection *c;
   node_t *node;
   int l,i,q,curanswer;
   struct s_rr_middle *rr, rrbacking;
   char *src, *dst;
   int bytes;

   fdns_errno = FDNS_ERR_OTHER;
   result.info = (void *) NULL;
   memset(result.text, 0, sizeof(result.text));

   /* Find query in list of dns lookups */
   LIST_FOREACH(node, CONNECTIONS->head)
   {
      c = (struct s_connection *) node->data;
      if(c->fd == fd)
         break;
      else
         c = NULL;
   }

   /* query not found */
   if(c == NULL)
      return &result;

   /* query found -- we remove in cleanup */

   l = recv(c->fd,&h,sizeof(struct s_header),0);
   result.info = (void *) c->info;
   strncpy(result.lookup, c->lookup, 256);

   if(l == -1)
   {
      fdns_errno = FDNS_ERR_NETWORK;
      goto cleanup;
   }

   if (l < 12)
      goto cleanup;
   if (c->id[0] != h.id[0] || c->id[1] != h.id[1])
      /* ID mismatch: we keep the connection, as this could be an answer to
         a previous lookup.. */
      return NULL;
   if ((h.flags1 & FLAGS1_MASK_QR) == 0)
      goto cleanup;
   if ((h.flags1 & FLAGS1_MASK_OPCODE) != 0)
      goto cleanup;
   if ((h.flags2 & FLAGS2_MASK_RCODE) != 0)
   {
      fdns_errno = (h.flags2 & FLAGS2_MASK_RCODE);
      goto cleanup;
   }
   h.ancount = ntohs(h.ancount);
   if (h.ancount < 1) {
      fdns_errno = FDNS_ERR_NXDOMAIN;
   /* no sense going on if we don't have any answers */
      goto cleanup;
   }
   /* skip queries */
   i = 0;
   q = 0;
   l -= 12;
   h.qdcount = ntohs(h.qdcount);
   while (q < h.qdcount && i < l)
   {
      if (h.payload[i] > 63)
      { /* pointer */
         i += 6; /* skip pointer, class and type */
         q++;
      }
      else
      { /* label */
         if (h.payload[i] == 0)
         {
            q++;
            i += 5; /* skip nil, class and type */
         }
         else
            i += h.payload[i] + 1; /* skip length and label */
      }
   }
   /* &h.payload[i] should now be the start of the first response */
   curanswer = 0;
   while (curanswer < h.ancount)
   {
      q = 0;
      while (q == 0 && i < l)
      {
         if (h.payload[i] > 63)
         { /* pointer */
            i += 2; /* skip pointer */
            q = 1;
         }
         else
         { /* label */
            if (h.payload[i] == 0)
            {
               i++;
               q = 1;
            }
            else
               i += h.payload[i] + 1; /* skip length and label */
         }
      }
      if (l - i < 10)
         goto cleanup;
      rr = (struct s_rr_middle *)&h.payload[i];
      src = (char *) rr;
      dst = (char *) &rrbacking;
      for (bytes = sizeof(rrbacking); bytes; bytes--)
         *dst++ = *src++;
      rr = &rrbacking;
      i += 10;
      rr->rdlength = ntohs(rr->rdlength);
      if (ntohs(rr->type) != c->type)
      {
         curanswer++;
         i += rr->rdlength;
         continue;
      }
      if (ntohs(rr->class) != c->class)
      {
         curanswer++;
         i += rr->rdlength;
         continue;
      }
      break;
   }

   if (curanswer == h.ancount)
      goto cleanup;
   if (i + rr->rdlength > l)
      goto cleanup;
   if (rr->rdlength > 1023)
      goto cleanup;

   fdns_errno = FDNS_ERR_NONE;
   memcpy(result.text,&h.payload[i],rr->rdlength);
   result.text[rr->rdlength] = '\0';

   /* Clean-up */
cleanup:
   list_remove(CONNECTIONS, node);
   node_free(node);
   close(c->fd);
   fdns_fdinuse--;
   MyFree(c);

   return &result;
}

void firedns_cycle(void)
{
   node_t *node, *next;
   struct s_connection *p;
   struct firedns_result *res, new_result;
   static struct pollfd *ufds = NULL;
   int fd;
   unsigned int size, i;
   time_t timenow;

   if(LIST_SIZE(CONNECTIONS) == 0)
      return;

   if(ufds == NULL)
      ufds = MyMalloc((sizeof *ufds) * OptionsItem->dns_fdlimit);

   time(&timenow);
   size = 0;

   LIST_FOREACH_SAFE(node, next, CONNECTIONS->head)
   {
      if(size >= OptionsItem->dns_fdlimit)
         break;

      p = (struct s_connection *) node->data;

      if(p->fd < 0)
         continue;

      if(p->fd > 0 && (p->start + FDNS_TIMEOUT) < timenow)
      {
         /* Timed out - remove from list */
         list_remove(CONNECTIONS, node);
         node_free(node);

         memset(new_result.text, 0, sizeof(new_result.text));
         new_result.info = p->info;
         strncpy(new_result.lookup, p->lookup, 256);

         close(p->fd);
         fdns_fdinuse--;
         MyFree(p);

         fdns_errno = FDNS_ERR_TIMEOUT;

         if(new_result.info != NULL)
            dnsbl_result(&new_result);

         continue;
      }

      ufds[size].events = 0;
      ufds[size].revents = 0;
      ufds[size].fd = p->fd;
      ufds[size].events = POLLIN;

      size++;
   }


   switch(poll(ufds, size, 0))
   {
      case -1:
      case 0:
         return;
   }

   LIST_FOREACH_SAFE(node, next, CONNECTIONS->head)
   {
      p = (struct s_connection *) node->data;
      if(p->fd > 0)
      {
         for(i = 0; i < size; i++)
         {
            if((ufds[i].revents & POLLIN) && ufds[i].fd == p->fd)
            {
               fd = p->fd;
               res = firedns_getresult(fd);

               if(res != NULL && res->info != NULL)
                  dnsbl_result(res);
               break;
            }
         }
      }
      else if(fdns_fdinuse < OptionsItem->dns_fdlimit)
      {
         firedns_doquery(p);
      }
   }
}

char *firedns_strerror(int error)
{
   if(error == FDNS_ERR_NETWORK)
      return strerror(errno);
   return errors[error];
}


/*
 *  Copyright (c) 2002-2003 Erik Fears
 *  Copyright (c) 2014-2017 ircd-hybrid development team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
 *  USA
 */

#include "setup.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h>
#include <errno.h>
#include <assert.h>
#include "compat.h"
#include "config.h"
#include "dnsbl.h"
#include "list.h"
#include "log.h"
#include "main.h"
#include "match.h"
#include "memory.h"
#include "scan.h"
#include "irc.h"
#include "stats.h"


/*
 * Work out the DNSBL zones and send the dns query
 */
void
dnsbl_add(struct scan_struct *ss)
{
  char lookup[128];
  node_t *node;
  struct addrinfo hints, *addr_res;

  memset(&hints, 0, sizeof(hints));
  hints.ai_family = PF_UNSPEC;
  hints.ai_flags = AI_NUMERICHOST;

  if (getaddrinfo(ss->ip, NULL, &hints, &addr_res))
  {
    log_printf("DNSBL -> Invalid address '%s', ignoring.", ss->ip);
    return;
  }

  LIST_FOREACH(node, OpmItem->blacklists->head)
  {
    struct BlacklistConf *bl = node->data;

    if (addr_res->ai_family == AF_INET && bl->ipv4)
    {
      const struct sockaddr_in *v4 = (const struct sockaddr_in *)addr_res->ai_addr;
      const uint8_t *b = (const uint8_t *)&v4->sin_addr.s_addr;

      snprintf(lookup, sizeof(lookup), "%u.%u.%u.%u.%s",
               (unsigned int)(b[3]), (unsigned int)(b[2]),
               (unsigned int)(b[1]), (unsigned int)(b[0]), bl->name);
    }
    else if (addr_res->ai_family == AF_INET6 && bl->ipv6)
    {
      const struct sockaddr_in6 *v6 = (const struct sockaddr_in6 *)addr_res->ai_addr;
      const uint8_t *b = (const uint8_t *)&v6->sin6_addr.s6_addr;

      snprintf(lookup, sizeof(lookup),
               "%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x."
               "%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%x.%s",
               (unsigned int)(b[15] & 0xF), (unsigned int)(b[15] >> 4),
               (unsigned int)(b[14] & 0xF), (unsigned int)(b[14] >> 4),
               (unsigned int)(b[13] & 0xF), (unsigned int)(b[13] >> 4),
               (unsigned int)(b[12] & 0xF), (unsigned int)(b[12] >> 4),
               (unsigned int)(b[11] & 0xF), (unsigned int)(b[11] >> 4),
               (unsigned int)(b[10] & 0xF), (unsigned int)(b[10] >> 4),
               (unsigned int)(b[9] & 0xF), (unsigned int)(b[9] >> 4),
               (unsigned int)(b[8] & 0xF), (unsigned int)(b[8] >> 4),
               (unsigned int)(b[7] & 0xF), (unsigned int)(b[7] >> 4),
               (unsigned int)(b[6] & 0xF), (unsigned int)(b[6] >> 4),
               (unsigned int)(b[5] & 0xF), (unsigned int)(b[5] >> 4),
               (unsigned int)(b[4] & 0xF), (unsigned int)(b[4] >> 4),
               (unsigned int)(b[3] & 0xF), (unsigned int)(b[3] >> 4),
               (unsigned int)(b[2] & 0xF), (unsigned int)(b[2] >> 4),
               (unsigned int)(b[1] & 0xF), (unsigned int)(b[1] >> 4),
               (unsigned int)(b[0] & 0xF), (unsigned int)(b[0] >> 4), bl->name);
    }

    struct dnsbl_scan *ds = xcalloc(sizeof *ds);
    ds->ss = ss;
    ds->bl = bl;

    if (OPT_DEBUG)
      log_printf("DNSBL -> Passed '%s' to resolver", lookup);

    int res = firedns_getip(FDNS_QRY_A, lookup, ds);
    if (res == -1 && firedns_errno != FDNS_ERR_FDLIMIT)
    {
      log_printf("DNSBL -> Error sending dns lookup for '%s': %s", lookup, firedns_strerror(firedns_errno));
      xfree(ds);
    }
    else
      ++ss->scans;  /* Increase scan count - one for each blacklist */
  }

  freeaddrinfo(addr_res);
}

static void
dnsbl_positive(struct scan_struct *ss, struct BlacklistConf *bl, unsigned char type)
{
  char text_type[128] = "";
  node_t *node;

  if (bl->type == A_BITMASK)
  {
    LIST_FOREACH(node, bl->reply->head)
    {
      const struct BlacklistReplyConf *item = node->data;

      if (item->number & type)
      {
        strlcat(text_type, item->type, sizeof(text_type));
        strlcat(text_type, ", ", sizeof(text_type));
      }
    }

    if (text_type[0])
      *(strrchr(text_type, ',')) = '\0';
  }
  else
  {
    LIST_FOREACH(node, bl->reply->head)
    {
      const struct BlacklistReplyConf *item = node->data;

      if (item->number == type)
      {
        strlcpy(text_type, item->type, sizeof(text_type));
        break;
      }
    }
  }

  if (text_type[0] == '\0' && bl->ban_unknown == 0)
  {
    if (OPT_DEBUG)
      log_printf("DNSBL -> Unknown result from BL zone %s (%d)", bl->name, type);

    return;
  }

  if (ss->manual_target)
    irc_send("PRIVMSG %s :CHECK -> DNSBL -> %s appears in BL zone %s (%s)",
             ss->manual_target->name, ss->ip, bl->name, text_type);
  else if (ss->positive == 0)
  {
    /* Only report it if no other scans have found positives yet. */
    scan_positive(ss, (bl->kline[0] ? bl->kline : IRCItem->kline), text_type);

    irc_send_channels("DNSBL -> %s!%s@%s appears in BL zone %s (%s)",
                      ss->irc_nick, ss->irc_username, ss->irc_hostname, bl->name,
                      text_type);
    log_printf("DNSBL -> %s!%s@%s appears in BL zone %s (%s)",
               ss->irc_nick, ss->irc_username, ss->irc_hostname, bl->name,
               text_type);
  }

  /* Record stat */
  stats_dnsblrecv(bl);
}

void
dnsbl_result(struct firedns_result *res)
{
  struct dnsbl_scan *const ds = res->info;

  if (OPT_DEBUG)
  {
    if (ds->ss->manual_target)
      log_printf("DNSBL -> Lookup result for %s (%s) %d.%d.%d.%d (error: %d)",
                 ds->ss->ip,
                 res->lookup,
                 (unsigned char)res->text[0],
                 (unsigned char)res->text[1],
                 (unsigned char)res->text[2],
                 (unsigned char)res->text[3], firedns_errno);
    else
      log_printf("DNSBL -> Lookup result for %s!%s@%s (%s) %d.%d.%d.%d (error: %d)",
                 ds->ss->irc_nick,
                 ds->ss->irc_username,
                 ds->ss->irc_hostname,
                 res->lookup,
                 (unsigned char)res->text[0],
                 (unsigned char)res->text[1],
                 (unsigned char)res->text[2],
                 (unsigned char)res->text[3], firedns_errno);
  }

  /* Everything is OK */
  if (res->text[0] == '\0' && firedns_errno == FDNS_ERR_NXDOMAIN)
  {
    if (ds->ss->manual_target)
      irc_send("PRIVMSG %s :CHECK -> DNSBL -> %s does not appear in BL zone %s",
               ds->ss->manual_target->name, ds->ss->ip,
               (strlen(ds->ss->ip) < strlen(res->lookup)) ? (res->lookup + strlen(ds->ss->ip) + 1) : res->lookup);

    --ds->ss->scans;  /* We are done with ss here */
    scan_checkfinished(ds->ss);  /* This could free ss, don't use ss after this point */
    xfree(ds);  /* No longer need our information */
    return;
  }

  /* Either an error, or a positive lookup */
  if (firedns_errno == FDNS_ERR_NONE)
    dnsbl_positive(ds->ss, ds->bl, (unsigned char)res->text[3]);
  else
  {
    log_printf("DNSBL -> Lookup error on %s: %s", res->lookup,
               firedns_strerror(firedns_errno));

    if (firedns_errno != FDNS_ERR_TIMEOUT)
      irc_send_channels("DNSBL -> Lookup error on %s: %s", res->lookup,
                        firedns_strerror(firedns_errno));
  }

  /* Check if ss has any remaining scans */
  --ds->ss->scans;  /* We are done with ss here */
  scan_checkfinished(ds->ss);  /* This could free ss, don't use ss after this point */
  xfree(ds);  /* Finished with dnsbl_scan too */
}

void
dnsbl_cycle(void)
{
  firedns_cycle();
}

#define DNSBL_REPORT_VERSION "3.1.3"

/*
 * Send an email to report this open proxy.
 */
void
dnsbl_report(const struct scan_struct *ss)
{
  char buf[4096], cmdbuf[512];
  FILE *fp;

  assert(ss->ip);

  if (EmptyString(OpmItem->dnsbl_to) || EmptyString(OpmItem->dnsbl_from) || EmptyString(OpmItem->sendmail))
    return;

  snprintf(cmdbuf, sizeof(cmdbuf), "%s -t", OpmItem->sendmail);
  snprintf(buf, sizeof(buf),
           "From: %s <%s>\n"
           "To: %s\n"
           "Subject: BOPM Report\n"
           "X-BOPM-Version: %s\n\n"
           "%s: %s:%d\n\n"
           "%s\n", IRCItem->nick, OpmItem->dnsbl_from, OpmItem->dnsbl_to,
           DNSBL_REPORT_VERSION, scan_gettype(ss->remote->protocol), ss->ip,
           ss->remote->port, ss->proof);

  if (OPT_DEBUG >= 3)
    log_printf("DNSBL -> Sending following email:\n%s\n", buf);

  if ((fp = popen(cmdbuf, "w")) == NULL)
  {
    log_printf("DNSBL -> Failed to create pipe to '%s' for email report!", cmdbuf);
    irc_send_channels("I was trying to create a pipe to '%s' to send a DNSBL "
                      "report, and it failed! I'll give up for now.",
                      cmdbuf);
    return;
  }

  fputs(buf, fp);
  pclose(fp);

  log_printf("DNSBL -> Sent report to %s [%s]", OpmItem->dnsbl_to, ss->ip);

  /* Record send in stats */
  stats_dnsblsend();
}

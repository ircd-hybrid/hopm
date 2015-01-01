/*
Copyright (C) 2002-2003  Erik Fears
 
This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.
 
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
 
You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
 
      Foundation, Inc.
      59 Temple Place - Suite 330
      Boston, MA  02111-1307, USA.
 
*/

#include "setup.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <time.h>
#include <errno.h>

#include "compat.h"
#include "config.h"
#include "dnsbl.h"
#include "list.h"
#include "log.h"
#include "main.h"
#include "malloc.h"
#include "match.h"
#include "scan.h"
#include "irc.h"
#include "stats.h"


/*
 * Work out the DNSBL zones and send the dns query
 */
void
dnsbl_add(struct scan_struct *ss)
{
  struct in_addr in;
  unsigned char a, b, c, d;
  char lookup[128];
  node_t *p;
  int res;
  struct dnsbl_scan *ds;


  if (inet_pton(AF_INET, ss->ip, &in) <= 0)
  {
    log_printf("DNSBL -> Invalid address '%s', ignoring.", ss->ip);
    return;
  }

  d = (unsigned char)(in.s_addr >> 24) & 0xFF;
  c = (unsigned char)(in.s_addr >> 16) & 0xFF;
  b = (unsigned char)(in.s_addr >>  8) & 0xFF;
  a = (unsigned char) in.s_addr & 0xFF;

  LIST_FOREACH(p, OpmItem->blacklists->head)
  {
    struct BlacklistConf *bl = p->data;

#ifdef WORDS_BIGENDIAN
    snprintf(lookup, 128, "%d.%d.%d.%d.%s", a, b, c, d, bl->name);
#else
    snprintf(lookup, 128, "%d.%d.%d.%d.%s", d, c, b, a, bl->name);
#endif

    ds = MyMalloc(sizeof *ds);
    ds->ss = ss;
    ds->bl = bl;

    if (OPT_DEBUG)
      log_printf("DNSBL -> Passed '%s' to resolver", lookup);

    res = firedns_getip(FDNS_QRY_A, lookup, (void *) ds);

    if (res == -1 && fdns_errno != FDNS_ERR_FDLIMIT)
    {
      log_printf("DNSBL -> Error sending dns lookup for '%s': %s", lookup, firedns_strerror(fdns_errno));
      free(ds);
    }
    else
      ++ss->scans;  /* Increase scan count - one for each blacklist */
  }
}

static void
dnsbl_positive(struct scan_struct *ss, struct BlacklistConf *bl, unsigned char type)
{
  char text_type[128] = "";
  node_t *p;

  if (bl->type == A_BITMASK)
  {
    LIST_FOREACH(p, bl->reply->head)
    {
      struct BlacklistReplyConf *item = p->data;

      if (item->number & type)
      {
        strncat(text_type, item->type, sizeof(text_type) - strlen(text_type) - 2);
        text_type[sizeof(text_type) - 2] = '\0';

        strncat(text_type, ", ", sizeof(text_type) - strlen(text_type) - 1);
        text_type[sizeof(text_type) - 1] = '\0';
      }
    }

    if (text_type[0])
      *(strrchr(text_type, ',')) = '\0';
  }
  else
  {
    LIST_FOREACH(p, bl->reply->head)
    {
      struct BlacklistReplyConf *item = p->data;

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
  else if (!ss->positive)
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
  struct dnsbl_scan *ds = res->info;

  if (OPT_DEBUG)
  {
    if (ds->ss->manual_target)
      log_printf("DNSBL -> Lookup result for %s (%s) %d.%d.%d.%d (error: %d)",
                 ds->ss->ip,
                 res->lookup,
                 (unsigned char)res->text[0],
                 (unsigned char)res->text[1],
                 (unsigned char)res->text[2],
                 (unsigned char)res->text[3], fdns_errno);
    else
      log_printf("DNSBL -> Lookup result for %s!%s@%s (%s) %d.%d.%d.%d (error: %d)",
                 ds->ss->irc_nick,
                 ds->ss->irc_username,
                 ds->ss->irc_hostname,
                 res->lookup,
                 (unsigned char)res->text[0],
                 (unsigned char)res->text[1],
                 (unsigned char)res->text[2],
                 (unsigned char)res->text[3], fdns_errno);
  }

  /* Everything is OK */
  if (res->text[0] == '\0' && fdns_errno == FDNS_ERR_NXDOMAIN)
  {
    if (ds->ss->manual_target)
      irc_send("PRIVMSG %s :CHECK -> DNSBL -> %s does not appear in BL zone %s",
               ds->ss->manual_target->name, ds->ss->ip,
               (strlen(ds->ss->ip) < strlen(res->lookup)) ? (res->lookup + strlen(ds->ss->ip) + 1) : res->lookup);

    --ds->ss->scans;  /* We are done with ss here */
    scan_checkfinished(ds->ss);  /* This could free ss, don't use ss after this point */
    MyFree(ds);  /* No longer need our information */
    return;
  }

  /* Either an error, or a positive lookup */
  if (fdns_errno == FDNS_ERR_NONE)
    dnsbl_positive(ds->ss, ds->bl, (unsigned char)res->text[3]);
  else
  {
    log_printf("DNSBL -> Lookup error on %s: %s", res->lookup,
               firedns_strerror(fdns_errno));

    if (fdns_errno != FDNS_ERR_TIMEOUT)
      irc_send_channels("DNSBL -> Lookup error on %s: %s", res->lookup,
                        firedns_strerror(fdns_errno));
  }

  /* Check if ss has any remaining scans */
  --ds->ss->scans;  /* We are done with ss here */
  scan_checkfinished(ds->ss);  /* This could free ss, don't use ss after this point */
  MyFree(ds);  /* Finished with dnsbl_scan too */
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
dnsbl_report(struct scan_struct *ss)
{
  char buf[4096], cmdbuf[512];
  FILE *fp;

  if (ss->ip == NULL)
    return;

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
    irc_send_channels("I was trying to create a pipe to'%s' to send a DNSBL "
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

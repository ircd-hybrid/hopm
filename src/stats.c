/*
 *  Copyright (c) 2002 Erik Fears
 *  Copyright (c) 2014-2015 ircd-hybrid development team
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
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <time.h>
#include <sys/types.h>
#include <sys/resource.h> /* getrlimit */
#include <errno.h>

#include "irc.h"
#include "log.h"
#include "misc.h"
#include "config.h"
#include "stats.h"
#include "libopm/src/opm_types.h"

static time_t STATS_UPTIME;
static unsigned int STATS_CONNECTIONS;
static unsigned int STATS_DNSBLSENT;

static struct StatsHash STATS_PROXIES[] =
{
  { OPM_TYPE_HTTP,      0, "HTTP"      },
  { OPM_TYPE_HTTPPOST,  0, "HTTPPOST"  },
#ifdef HAVE_LIBCRYPTO
  { OPM_TYPE_HTTPS,     0, "HTTPS"     },
  { OPM_TYPE_HTTPSPOST, 0, "HTTPSPOST" },
#endif
  { OPM_TYPE_SOCKS4,    0, "SOCKS4"    },
  { OPM_TYPE_SOCKS5,    0, "SOCKS5"    },
  { OPM_TYPE_ROUTER,    0, "ROUTER"    },
  { OPM_TYPE_WINGATE,   0, "WINGATE"   },
  { OPM_TYPE_DREAMBOX,  0, "DREAMBOX"  },
  { 0, 0, NULL }
};


/* stats_init
 *
 *    Perform initialization of HOPM stats
 *
 * Parameters: NONE
 * Return: NONE
 *
 */
void
stats_init(void)
{
  time(&STATS_UPTIME);
}

/* stats_openproxy
 *
 *    Record open proxy.
 *
 *
 * Parameters: NONE
 * Return: NONE
 *
 */
void
stats_openproxy(unsigned int type)
{
  for (struct StatsHash *tab = STATS_PROXIES; tab->name; ++tab)
  {
    if (tab->type == type)
    {
      ++tab->count;
      break;
    }
  }
}

/* stats_connect
 *
 *    Record IRC connect.
 *
 *
 * Parameters: NONE
 * Return: NONE
 *
 */
void
stats_connect(void)
{
  ++STATS_CONNECTIONS;
}

/* stats_dnsblrecv
 *
 *    Record that a user was found in the blacklist.
 *
 * Parameters: BlacklistConf structure
 * Return: NONE
 *
 */
void
stats_dnsblrecv(struct BlacklistConf *bl)
{
  ++bl->stats_recv;
}

/* stats_dnsblsend
 *
 *    Record a sent report
 *
 * Parameters: NONE
 * Return: NONE
 *
 */
void
stats_dnsblsend(void)
{
  ++STATS_DNSBLSENT;
}

/* stats_output
 *
 *    Output stats to target via privmsg
 *
 *
 * Parameters: NONE
 * Return: NONE
 *
 */
void
stats_output(const char *target)
{
  time_t present;
  time_t uptime;
  node_t *p;

  time(&present);
  uptime = present - STATS_UPTIME;

  irc_send("PRIVMSG %s :Uptime: %s", target, dissect_time(uptime));

  LIST_FOREACH(p, OpmItem->blacklists->head)
  {
    const struct BlacklistConf *bl = p->data;

    if (bl->stats_recv > 0)
      irc_send("PRIVMSG %s :DNSBL: %u successful lookups from %s",
               target, bl->stats_recv, bl->name);
  }

  if (STATS_DNSBLSENT > 0)
    irc_send("PRIVMSG %s :DNSBL: %u reports sent", target,
             STATS_DNSBLSENT);

  for (const struct StatsHash *tab = STATS_PROXIES; tab->name; ++tab)
    if (tab->count)
      irc_send("PRIVMSG %s :Found %u (%s) open.", target,
               tab->count, tab->name);

   irc_send("PRIVMSG %s :Number of connects: %u (%.2f/minute)",
            target, STATS_CONNECTIONS, STATS_CONNECTIONS ?
            (float)STATS_CONNECTIONS / ((float)uptime / 60.0) : 0.0);
}

/* fdstats_output
 *
 *    Output file descriptor stats to target via privmsg
 *
 *
 * Parameters: NONE
 * Return: NONE
 *
 */
void
fdstats_output(const char *target)
{
  struct rlimit rlim;
  unsigned int total_fd_use = 0;

  /* Get file descriptor ceiling */
  if (getrlimit(RLIMIT_NOFILE, &rlim) == -1)
  {
    log_printf("FDSTAT -> getrlimit() error retrieving RLIMIT_NOFILE (%s)", strerror(errno));
    irc_send("PRIVMSG %s :FDSTAT -> getrlimit() error retrieving RLIMIT_NOFILE (%s)",
             target, strerror(errno));
    return;
  }

  /*
   * Check which file descriptors are active, based on suggestions from:
   * http://groups.google.com/groups?th=a48b9fe8ca43947c&rnum=1
   */
  for (unsigned int i = 0; i < rlim.rlim_cur; ++i)
  {
    int newfd = dup(i);

    if (newfd > -1)
    {
      ++total_fd_use;
      close(newfd);
    }
    else
    {
      switch (errno)
      {
        case EMFILE:
          /*
           * We ran out of FDs whilst trying to dup an existing one,
           * so all fds are open and we can stop checking here.
           */
          i = total_fd_use = rlim.rlim_cur;
          break;

        case EBADF:
          /* Not an FD in use. */
          break;

        case EINTR:
          /* Try again. */
          --i;
          break;

        default:
          /* We don't expect any other errors. */
          log_printf("fd %u errno = %u (%s)", i, errno, strerror(errno));
          break;
      }
    }
  }

  irc_send("PRIVMSG %s :Total open FD: %u/%d", target, total_fd_use, rlim.rlim_cur);
}

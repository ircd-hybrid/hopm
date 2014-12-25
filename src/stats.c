/*
Copyright (C) 2002  Erik Fears
 
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
#include <unistd.h>

#ifdef STDC_HEADERS
# include <stdlib.h>
#endif

#ifdef HAVE_STRINGS_H
# include <strings.h>
#endif

#if HAVE_STRING_H
# include <string.h>
#endif

#ifdef TIME_WITH_SYS_TIME
# include <sys/time.h>
# include <time.h>
#else
# ifdef HAVE_SYS_TIME_H
#  include <sys/time.h>
# else
#  include <time.h>
# endif
#endif

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include <sys/resource.h> /* getrlimit */
#include <errno.h>

#include "irc.h"
#include "log.h"
#include "misc.h"
#include "stats.h"
#include "config.h"
#include "extern.h"
#include "opercmd.h"
#include "scan.h"
#include "stats.h"
#include "libopm/src/opm_types.h"

static time_t STATS_UPTIME;
static unsigned int STATS_CONNECTIONS;
static unsigned int STATS_DNSBLSENT;

static struct StatsHash STATS_PROXIES[] =
{
  { OPM_TYPE_HTTP,     0, "HTTP"     },
  { OPM_TYPE_HTTPPOST, 0, "HTTPPOST" },
  { OPM_TYPE_SOCKS4,   0, "SOCKS4"   },
  { OPM_TYPE_SOCKS5,   0, "SOCKS5"   },
  { OPM_TYPE_ROUTER,   0, "ROUTER"   },
  { OPM_TYPE_WINGATE,  0, "WINGATE"  }
};


/* stats_init
 *
 *    Perform initialization of bopm stats
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
stats_openproxy(int type)
{
  for (unsigned int i = 0; i < (sizeof(STATS_PROXIES) / sizeof(struct StatsHash)); ++i)
    if (STATS_PROXIES[i].type == type)
      ++STATS_PROXIES[i].count;
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
stats_output(char *target)
{
  time_t present;
  time_t uptime;
  node_t *p;

  time(&present);
  uptime = present - STATS_UPTIME;

  irc_send("PRIVMSG %s :Uptime: %s", target, dissect_time(uptime));

  LIST_FOREACH(p, OpmItem->blacklists->head)
  {
    struct BlacklistConf *bl = p->data;

    if (bl->stats_recv > 0)
      irc_send("PRIVMSG %s :DNSBL: %u successful lookups from %s",
               target, bl->stats_recv, bl->name);
  }

  if (STATS_DNSBLSENT > 0)
    irc_send("PRIVMSG %s :DNSBL: %u reports sent", target,
             STATS_DNSBLSENT);

  for (unsigned int i = 0; i < (sizeof(STATS_PROXIES) / sizeof(struct StatsHash)); ++i)
    if (STATS_PROXIES[i].count > 0)
      irc_send("PRIVMSG %s :Found %u (%s) open.", target,
               STATS_PROXIES[i].count, STATS_PROXIES[i].name);

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
fdstats_output(char *target)
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

    if (newfd > 0)
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

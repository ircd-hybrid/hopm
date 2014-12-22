/* vim: set shiftwidth=3 softtabstop=3 expandtab: */ 

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
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <signal.h>
#include <unistd.h>
#include <errno.h>
#include <sys/resource.h> /* getrlimit */
#include <fcntl.h>

#ifdef STDC_HEADERS
#include <stdlib.h>
#include <string.h>
#endif

#include "compat.h"
#include "config.h"
#include "extern.h"
#include "irc.h"
#include "log.h"
#include "opercmd.h"
#include "scan.h"
#include "stats.h"
#include "negcache.h"
#include "options.h"
#include "malloc.h"
#include "firedns.h"
#include "main.h"

RCSID("$Id: main.c,v 1.18 2003/06/22 13:19:39 andy Exp $");

static RETSIGTYPE do_signal(int signum);

int RESTART = 0;             /* Flagged to restart on next cycle */
int ALARMED = 0;             /* Flagged to call timer functions on next cycle */
int REOPEN  = 0;             /* Flagged to reopen log files on next cycle */
unsigned int OPT_DEBUG = 0;  /* Debug level */

char *CONFNAME = DEFAULTNAME;
char *CONFDIR = HOPM_ETCDIR;
char *LOGDIR = HOPM_LOGDIR;
char *CONFFILE, *LOGFILE;

struct sigaction ALARMACTION;
struct sigaction INTACTION;
struct sigaction USR1ACTION;

int main(int argc, char **argv)
{
   char spid[16];
   pid_t pid;
   int c;
   size_t lenc, lenl, lenp;
   unsigned int nc_counter, i;
   FILE *pidout;
   struct rlimit rlim;

   nc_counter = 0;

   while (1)
   {
      c = getopt(argc, argv, "dc:");

      if (c == -1)
         break;

      switch (c)
      {
         case 'c':
            CONFNAME = strdup(optarg);
            break;
         case 'd':
            OPT_DEBUG++;
            break;
         case '?':
         default:
            /* Unknown arg, guess we'll just do nothing for now. */
            break;
      }
   }

   lenc = strlen(CONFDIR) + strlen(CONFNAME) + strlen(CONFEXT) + 3;
   lenl = strlen(LOGDIR) + strlen(CONFNAME) + strlen(LOGEXT) + 3;
   lenp = strlen(LOGDIR) + strlen(CONFNAME) + strlen(PIDEXT) + 3;

   CONFFILE = MyMalloc(lenc * sizeof *CONFFILE);
   LOGFILE = MyMalloc(lenl * sizeof *LOGFILE);

   snprintf(CONFFILE, lenc, "%s/%s.%s", CONFDIR, CONFNAME, CONFEXT);
   snprintf(LOGFILE, lenl, "%s/%s.%s", LOGDIR, CONFNAME, LOGEXT);

   /* Fork off. */

   if (OPT_DEBUG <= 0)
   {
      if ((pid = fork()) < 0)
      {
         perror("fork()");
         exit(EXIT_FAILURE);
      }
      else if (pid != 0)
      {
         _exit(EXIT_SUCCESS);
      }

      /* Get us in our own process group. */
      if (setpgid(0, 0) < 0)
      {
         perror("setpgid()");
         exit(EXIT_FAILURE);
      }

      /* Reset file mode. */
      /* shasta: o+w is BAD, mmkay? */
      umask(002);

      /* Close file descriptors. */
      close(STDIN_FILENO);
      close(STDOUT_FILENO);
      close(STDERR_FILENO);

      log_open(LOGFILE);
   }
   else
      log_printf("MAIN -> Debug level %d", OPT_DEBUG);


   log_printf("MAIN -> HOPM %s started.", VERSION);
   log_printf("MAIN -> Reading configuration file...");

   config_load(CONFFILE);

   if (OptionsItem->scanlog)
      scanlog_open(OptionsItem->scanlog);

   pid = getpid();

   pidout = fopen(OptionsItem->pidfile, "w");
   snprintf(spid, 16, "%u", pid);

   if (pidout)
   {
      fwrite(spid, sizeof(char), strlen(spid), pidout);
      fclose(pidout);
   }
   else
   {
      log_printf("MAIN -> Error opening %s: %s", OptionsItem->pidfile,
          strerror(errno));
      exit(EXIT_FAILURE);
   }

   /* Setup alarm & int handlers. */

   ALARMACTION.sa_handler = &(do_signal);
   ALARMACTION.sa_flags = SA_RESTART;
   INTACTION.sa_handler = &(do_signal);
   USR1ACTION.sa_handler = &(do_signal);

   sigaction(SIGALRM, &ALARMACTION, 0);
   sigaction(SIGINT, &INTACTION, 0);
   sigaction(SIGUSR1, &USR1ACTION, 0);

   /* Ignore SIGPIPE. */
   signal(SIGPIPE, SIG_IGN);

   alarm(1);

   while (1)
   {
      

      /* Main cycles */
      irc_cycle();
      scan_cycle();


      /* Restart bopm if main_restart() was called (usually happens by m_kill in irc.c) */
      if(RESTART)
      {
         /* If restarted in debug mode, die */
         if(OPT_DEBUG)
            return(1); 

         log_printf("MAIN -> Restarting process");

         /* Get upper file descriptor limit */
         if(getrlimit(RLIMIT_NOFILE, &rlim) == -1) 
         {
            log_printf("MAIN RESTART -> getrlimit() error retrieving RLIMIT_NOFILE (%s)", strerror(errno));
            return(1); 
         }

         /* Set file descriptors 0-rlim_cur close on exec */
         for(i = 0; i < rlim.rlim_cur; i++)
            fcntl(i, F_SETFD, FD_CLOEXEC);

         /* execute new process */
         if(execve(argv[0], argv, NULL) == -1)
            log_printf("MAIN RESTART -> Execution of \"%s\" failed. ERROR: %s", argv[0], strerror(errno));

         /* Should only get here if execve failed */
         RESTART = 0;
      }

      /* Check for log reopen */
      if(REOPEN)
      {
         log_printf("MAIN -> Caught SIGUSR1, reopening logfiles");
         log_close();
         log_open(LOGFILE);

         if(OptionsItem->scanlog)
         {
            scanlog_close();
            scanlog_open(OptionsItem->scanlog);
         }

         log_printf("MAIN -> reopened logfiles");

         REOPEN = 0;
      }

      /* Call 1 second timers */
      if(ALARMED)
      {
         irc_timer();
         scan_timer();
         command_timer();

         ALARMED = 0;
      }


   }

   if (!OPT_DEBUG)
      log_close();

   /* If there's no scanlog open then this will do nothing anyway */
   scanlog_close();

   return(0);
}

static void do_signal(int signum)
{
   switch (signum)
   {
      case SIGALRM:
         ALARMED = 1;
         alarm(1);
         break;
      case SIGINT:
         log_printf("MAIN -> Caught SIGINT, bye!");
         exit(0);
         break;
      case SIGUSR1:
         REOPEN = 1;
         break;
   }
}


void main_restart(void)
{
   RESTART = 1;
}

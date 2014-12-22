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

#ifdef HAVE_STRING_H
# include <string.h>
#endif

#include "extern.h"
#include "config.h"
#include "malloc.h"
#include "log.h"
#include "scan.h"
#include "irc.h"
#include "opercmd.h"
#include "stats.h"
#include "firedns.h"

extern FILE *yyin;
extern int yyparse(void);

void config_setup(void);
void config_init(void);



/* Configuration     */

struct OptionsConf *OptionsItem = NULL;
struct IRCConf *IRCItem = NULL;
struct OpmConf *OpmItem = NULL;
struct ExemptConf *ExemptItem = NULL;
list_t *UserItemList = NULL;
list_t *ScannerItemList = NULL;

/* End Configuration */



/* Rehash or load new configuration from filename, via flex/bison parser */
void config_load(const char *filename)
{

   config_init();
   config_setup(); /* Setup/clear current configuration */

   log_printf("CONFIG -> Loading %s", filename);

   if((yyin = fopen(filename, "r")) == NULL)
   {
      log_printf("CONFIG -> Error opening %s", filename);
      exit(1);
   }

   yyparse();

   scan_init();       /* Initialize the scanners once we have the configuration */
   command_init();    /* Initialize the command queue */
   stats_init();      /* Initialize stats (UPTIME) */
   firedns_init();    /* Initialize adns */

   fclose(yyin);
}

/* Malloc and initialize configuration data to NULL */
void config_init()
{
   /* Init IRC block */
   IRCItem = MyMalloc(sizeof *IRCItem);
   IRCItem->channels = list_create();
   IRCItem->performs = list_create();

   /* Init Options block */
   OptionsItem = MyMalloc(sizeof *OptionsItem);

   /* Init OPM block */
   OpmItem = MyMalloc(sizeof *OpmItem);
   OpmItem->blacklists = list_create();

   /* Init list of User blocks */
   UserItemList = list_create();

   /* Init list of Scanner blocks */
   ScannerItemList = list_create();

   /* Init list of Exempts */
   ExemptItem = MyMalloc(sizeof *ExemptItem);
   ExemptItem->masks = list_create();
}

/* Setup structs that hold configuration data and then reset default values */

void config_setup()
{

   /* Setup IRC Block Defaults */
   IRCItem->mode = DupString("+cs");
   IRCItem->nick = DupString("hopm");
   IRCItem->nickserv = DupString("");
   IRCItem->password = DupString("");
   IRCItem->port = 6667;
   IRCItem->oper = DupString("undefined");
   IRCItem->username = DupString("hopm");
   IRCItem->realname = DupString("Hybrid Open Proxy Monitor");
   IRCItem->server = DupString("myserver.blitzed.org");
   IRCItem->vhost = DupString("");
   IRCItem->connregex = DupString("\\*\\*\\* Notice -- Client connecting: ([^ ]+) \\(([^@]+)@([^\\)]+)\\) \\[([0-9\\.]+)\\].*");
   IRCItem->kline = DupString("KLINE %u@%h :Open Proxy found on your host.");


   /* Setup options block defaults */
   OptionsItem->negcache = 0;   /* 0 disabled negcache */
   OptionsItem->pidfile = DupString("hopm.pid");
   OptionsItem->dns_fdlimit = 50;
   OptionsItem->scanlog = NULL;

   /* Setup OPM block defaults */
   OpmItem->sendmail = DupString("/usr/sbin/sendmail");
   OpmItem->dnsbl_from = DupString("");
   OpmItem->dnsbl_to = DupString("");
}

void yyerror(const char *str)
{
   log_printf("CONFIG -> %s: line %d", str, linenum);
   exit(EXIT_FAILURE);
}

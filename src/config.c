/*
 *  Copyright (c) 2002 Erik Fears
 *  Copyright (c) 2014-2018 ircd-hybrid development team
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
#include <errno.h>
#include <string.h>
#include <stdlib.h>

#include "config.h"
#include "config-parser.h"
#include "compat.h"
#include "memory.h"
#include "log.h"
#include "scan.h"
#include "irc.h"
#include "opercmd.h"
#include "stats.h"
#include "firedns.h"
#include "misc.h"


FILE *conf_file;
struct OptionsConf OptionsItem;
struct IRCConf IRCItem;
struct OpmConf OpmItem;
struct ExemptConf ExemptItem;
list_t UserItemList;
list_t ScannerItemList;


/* Setup structs that hold configuration data and then reset default values */
static void
config_setup(void)
{
  /* Setup irc {} block defaults */
  IRCItem.mode = xstrdup("+c");
  IRCItem.nick = xstrdup("hopm");
  IRCItem.port = 6667;
  IRCItem.readtimeout = 900;
  IRCItem.reconnectinterval = 30;
  IRCItem.oper = xstrdup("undefined");
  IRCItem.username = xstrdup("hopm");
  IRCItem.realname = xstrdup("Hybrid Open Proxy Monitor");
  IRCItem.server = xstrdup("irc.example.org");
  IRCItem.connregex = xstrdup("\\*\\*\\* Notice -- Client connecting: ([^ ]+) \\(([^@]+)@([^\\)]+)\\) \\[([0-9a-f\\.:]+)\\].*");
  IRCItem.kline = xstrdup("KLINE %u@%h :Open Proxy found on your host.");

  /* Setup options {} block defaults */
  OptionsItem.command_queue_size = 64;
  OptionsItem.command_interval = 10;
  OptionsItem.command_timeout = 180;
  OptionsItem.negcache = 0;   /* 0 disabled negcache */
  OptionsItem.negcache_rebuild = 43200;
  OptionsItem.pidfile = xstrdup("hopm.pid");
  OptionsItem.dns_fdlimit = 50;
  OptionsItem.dns_timeout = 5;
}

/* Load configuration from filename, via flex/bison parser */
void
config_load(const char *filename)
{
  config_setup();  /* Setup/clear current configuration */

  log_printf("CONFIG -> Loading %s", filename);

  strlcpy(conffilebuf, filename, sizeof(conffilebuf));

  if ((conf_file = fopen(filename, "r")) == NULL)
  {
    log_printf("CONFIG -> Error opening %s: %s", filename, strerror(errno));
    exit(EXIT_FAILURE);
  }

  yyparse();
  fclose(conf_file);

  scan_init();     /* Initialize the scanners once we have the configuration */
  stats_init();    /* Initialize stats (UPTIME) */
  firedns_init();  /* Initialize adns */
}

void
yyerror(const char *str)
{
  log_printf("CONFIG -> \"%s\", line %u: %s: %s", conffilebuf, lineno, str, stripws(linebuf));
  exit(EXIT_FAILURE);
}

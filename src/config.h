/*
 *  Copyright (c) 2002 Erik Fears
 *  Copyright (c) 2014-2016 ircd-hybrid development team
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

#ifndef CONFIG_H
#define CONFIG_H

#include <stdio.h>
#include <time.h>
#include "list.h"
#include "libopm/src/opm_types.h"

extern char linebuf[512];
extern char conffilebuf[512];
extern unsigned int lineno;
extern FILE *conf_file;

struct IRCConf
{
  char *nick;
  char *username;
  char *realname;
  char *server;
  int port;
  time_t readtimeout;
  time_t reconnectinterval;
  char *password;
  char *vhost;
  char *nickserv;
  char *oper;
  char *mode;
  char *away;
  char *connregex;
  char *kline;
  list_t *channels;  /* List of ChannelConf */
  list_t *performs;  /* List of char * */
  list_t *notices;   /* List of char * */
};

struct ChannelConf
{
  char *name;
  char *key;
  char *invite;
};

struct OptionsConf
{
  unsigned int command_queue_size;
  time_t command_interval;
  time_t command_timeout;
  time_t negcache;
  time_t negcache_rebuild;
  unsigned int dns_fdlimit;
  time_t dns_timeout;
  char *pidfile;
  char *scanlog;
};

struct UserConf
{
  list_t *masks;     /* List of char * */
  list_t *scanners;  /* List of char * */
};

struct ScannerConf
{
  char *name;
  list_t *protocols;
  char *vhost;
  int fd;
  char *target_ip;
  int target_port;
  int timeout;
  int max_read;
  list_t *target_string;
  int target_string_created;
};

struct ProtocolConf
{
  int type;
  unsigned int port;
};

struct OpmConf
{
  list_t *blacklists;
  char *dnsbl_from;
  char *dnsbl_to;
  char *sendmail;
};

enum BlacklistType
{
   A_BITMASK = 1,
   A_REPLY
};

struct BlacklistConf
{
  char *name;
  char *kline;
  enum BlacklistType type;
  int ban_unknown;
  list_t *reply;
  unsigned int stats_recv;
};

struct BlacklistReplyConf
{
  unsigned char number;
  char *type;
};

struct ExemptConf
{
  list_t *masks;
};


/* Extern to actual config data declared in config.c */
extern struct IRCConf *IRCItem;
extern struct OptionsConf *OptionsItem;
extern struct OpmConf *OpmItem;
extern struct ExemptConf *ExemptItem;
extern list_t *UserItemList;
extern list_t *ScannerItemList;

extern void yyerror(const char *);
extern void config_load(const char *);
#endif /* CONFIG_H */

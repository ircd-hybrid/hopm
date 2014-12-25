#ifndef CONFIG_H
#define CONFIG_H

#include <stdio.h>
#include "list.h"
#include "libopm/src/opm_types.h"

extern char linebuf[512];
extern int  linenum;

extern void yyerror(const char *);
extern void config_load(const char *);


struct IRCConf
{
  char *nick;
  char *username;
  char *realname;
  char *server;
  int port;
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
};

struct ChannelConf
{
  char *name;
  char *key;
  char *invite;
};

struct OptionsConf
{
  int negcache;
  unsigned int dns_fdlimit;
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
  char number;
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

#endif /* CONFIG_H */

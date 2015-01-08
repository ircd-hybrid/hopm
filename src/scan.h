#ifndef SCAN_H
#define SCAN_H

#include "libopm/src/opm.h"

struct scan_struct
{
  char *irc_nick;
  char *irc_username;
  char *irc_hostname;

  char *ip;
  char *proof;
  OPM_REMOTE_T *remote;

  unsigned int scans;
  unsigned int positive;

  const struct ChannelConf *manual_target;
};

struct scanner_struct
{
  char *name;
  OPM_T *scanner;
  list_t *masks;
};

struct protocol_assoc
{
  int type;
  const char *name;
};

struct kline_format_assoc
{
  char key;
  const void *data;
};

extern void scan_init(void);
extern const char *scan_gettype(int);
extern void scan_cycle(void);
extern void scan_connect(const char *[], const char *);
extern void scan_checkfinished(struct scan_struct *);
extern void scan_manual(char *, const struct ChannelConf *);
extern int scan_checkexempt(const char *, const char *);
extern void scan_timer(void);
extern void scan_positive(struct scan_struct *, const char *, const char *);
#endif /* SCAN_H */

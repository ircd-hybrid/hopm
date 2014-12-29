#ifndef STATS_H
#define STATS_H

#include "irc.h"
#include "config.h"

struct StatsHash
{
  int type;
  unsigned int count;
  const char *name;
};

extern void stats_init(void);
extern void stats_openproxy(int);
extern void stats_connect(void);
extern void stats_dnsblrecv(struct BlacklistConf *);
extern void stats_dnsblsend(void);
extern void stats_output(const char *);
extern void fdstats_output(const char *);

#endif /* STATS_H */

#ifndef DNSBL_H
#define DNSBL_H

#include "firedns.h"
#include "scan.h"


struct dnsbl_scan
{
  struct scan_struct *ss;
  struct BlacklistConf *bl;
};

extern void dnsbl_add(struct scan_struct *);
extern void dnsbl_result(struct firedns_result *);
extern void dnsbl_cycle(void);
extern void dnsbl_report(const struct scan_struct *);
#endif

/*
 *  Copyright (c) 2002-2003 Erik Fears
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

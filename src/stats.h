/*
 *  Copyright (c) 2002 Erik Fears
 *  Copyright (c) 2014-2015 ircd-hybrid development team
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

#ifndef STATS_H
#define STATS_H

struct StatsHash
{
  const unsigned int type;
  unsigned int count;
  const char *name;
};

extern void stats_init(void);
extern void stats_openproxy(unsigned int);
extern void stats_connect(void);
extern void stats_dnsblrecv(struct BlacklistConf *);
extern void stats_dnsblsend(void);
extern void stats_output(const char *);
extern void fdstats_output(const char *);

#endif /* STATS_H */

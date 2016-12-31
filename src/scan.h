/*
 *  Copyright (c) 2002 Erik Fears
 *  Copyright (c) 2014-2017 ircd-hybrid development team
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

extern void scan_init(void);
extern const char *scan_gettype(int);
extern void scan_cycle(void);
extern void scan_connect(const char *[], const char *);
extern void scan_checkfinished(struct scan_struct *);
extern void scan_manual(char *, const struct ChannelConf *);
extern void scan_timer(void);
extern void scan_positive(struct scan_struct *, const char *, const char *);
#endif /* SCAN_H */

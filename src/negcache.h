/*
 *  Copyright (c) 2002-2003 Andy Smith
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

#ifndef NEGCACHE_H
#define NEGCACHE_H
#include "patricia.h"

struct negcache_item
{
  time_t seen;
};

extern void negcache_init(void);
extern struct negcache_item *negcache_check(const char *);
extern void negcache_insert(const char *);
extern void negcache_rebuild(void);
#endif

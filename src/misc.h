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

#ifndef MISC_H
#define MISC_H

#include <arpa/inet.h>

extern const char *date_iso8601(time_t);
extern const char *time_dissect(time_t);
extern const char *stripws(char *);
extern const int format_reverse_inet6(const struct in6_addr *, char *, size_t, const char *);
extern const int format_reverse_inet(const struct in_addr *, char *, size_t, const char *);
#endif

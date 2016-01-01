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

#ifndef LOG_H
#define LOG_H

enum { LOG_BUFSIZE = 512 };

extern void log_open(const char *);
extern void log_close(void);
extern void scanlog_open(const char *);
extern void scanlog_close(void);
#ifdef __GNUC__
extern void log_printf(const char *, ...) __attribute__((format(printf,1,2)));
#else
extern void log_printf(const char *, ...);
#endif
#endif

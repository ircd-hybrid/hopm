/*
 *  Copyright (c) 2002-2003 Erik Fears
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

#ifndef IRC_H
#define IRC_H

#include <sys/types.h>

#define MSGLENMAX 512 + 1


struct CommandHash
{
  const char *command;
  void (*handler)(char *[], unsigned int, const char *, const char *);
};

extern void irc_send(const char *, ...);
extern void irc_send_channels(const char *, ...);
extern void irc_cycle(void);
extern void irc_timer(void);
#endif

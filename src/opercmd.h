/*
 *  Copyright (c) 2002 Erik Fears
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

#ifndef OPERCMD_H
#define OPERCMD_H

struct OperCommandHash
{
  const char *command;
  void (*handler)(char *, const char *);
};

struct Command
{
  /* Points to specific entry in COMMAND_TABLE in opercmd.c */
  const struct OperCommandHash *tab;

  /* Command parameter.
   * <erik> but i cant think of any commands bopm will ever have that is
   *   multiple parameters
   *
   *         I still havn't  -Erik 12/11/02
   */
  char *param;

  /* Who ordered it. */
  char *irc_nick;

  /* Where the reply is to be sent. */
  const char *target;

  /*
   * When it was added, because we might need to remove it if it does
   * not get executed.
   */
  time_t added;
};

extern void command_init(void);
extern void command_userhost(const char *);
extern void command_timer(void);
extern void command_parse(const char *, const char *, const char *);
#endif

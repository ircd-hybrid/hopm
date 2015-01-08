#ifndef OPERCMD_H
#define OPERCMD_H

#include "config.h"


struct OperCommandHash
{
  const char *command;
  void (*handler)(char *, const struct ChannelConf *);
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
  const struct ChannelConf *target;

  /*
   * When it was added, because we might need to remove it if it does
   * not get executed.
   */
  time_t added;
};

extern void command_init(void);
extern void command_userhost(const char *);
extern void command_timer(void);
extern void command_parse(char *, char *, const struct ChannelConf *, const struct UserInfo *);
#endif

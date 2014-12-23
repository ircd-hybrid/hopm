#ifndef OPERCMD_H
#define OPERCMD_H

#include "config.h"

struct Command
{
   /* Index of command in COMMAND_TABLE in opercmd.c */
   unsigned short type;

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
   struct ChannelConf *target;

   /*
    * When it was added, because we might need to remove it if it does
    * not get executed.
    */
   time_t added;
};

struct OperCommandHash
{
   const char *command;
   void (*handler)(char *, char*, struct ChannelConf *);
};

extern void command_init(void);
extern void command_userhost(char *);
extern void command_timer(void);
extern void command_parse(char *, char *, struct ChannelConf *,
      struct UserInfo *);
#endif

#ifndef IRC_H
#define IRC_H

#include <sys/types.h>

#define MSGLENMAX 512 + 1


struct UserInfo
{
  char *irc_nick;
  char *irc_username;
  char *irc_hostname;
};

struct CommandHash
{
  const char *command;
  void (*handler)(char **, unsigned int, char *, struct UserInfo *);
};

extern void irc_send(const char *, ...);
extern void irc_send_channels(const char *, ...);
extern void irc_cycle(void);
extern void irc_timer(void);
#endif

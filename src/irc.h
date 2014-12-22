#ifndef IRC_H
#define IRC_H

#include "inet.h"

#define NICKMAX 32 + 1
#define MSGLENMAX 512 + 1


struct bopm_sockaddr
{
   struct sockaddr_in sa4;
};


struct bopm_ircaddr
{
   struct in_addr in4;
};


struct UserInfo
{
   char *irc_nick;
   char *irc_username;
   char *irc_hostname;
};

typedef void (*irc_command) (char **, unsigned int, char *, struct UserInfo *);

struct CommandHash
{
   char       *command;
   irc_command handler;
};


extern void irc_send(char *, ...);
extern void irc_send_channels(char *, ...);
extern void irc_cycle(void);
extern void irc_timer(void);


#define copy_s_addr(a, b)  \
do { \
((uint32_t *)a)[0] = ((uint32_t *)b)[0]; \
((uint32_t *)a)[1] = ((uint32_t *)b)[1]; \
((uint32_t *)a)[2] = ((uint32_t *)b)[2]; \
((uint32_t *)a)[3] = ((uint32_t *)b)[3]; \
} while(0)

#endif

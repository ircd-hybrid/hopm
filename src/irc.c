/*
 * Copyright (C) 2002-2003  Erik Fears
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to
 *
 *       The Free Software Foundation, Inc.
 *       59 Temple Place - Suite 330
 *       Boston, MA  02111-1307, USA.
 *
 *
 */

#include "setup.h"

#include <stdio.h>
#include <unistd.h>

#ifdef STDC_HEADERS
# include <stdlib.h>
# include <string.h>
#endif

#ifdef HAVE_STRINGS_H
# include <strings.h>
#endif

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#ifdef TIME_WITH_SYS_TIME
# include <sys/time.h>
# include <time.h>
#else
# ifdef HAVE_SYS_TIME_H
#  include <sys/time.h>
# else
#  include <time.h>
# endif
#endif

#include <errno.h>
#include <stdarg.h>
#include <regex.h>

#include "config.h"
#include "irc.h"
#include "log.h"
#include "opercmd.h"
#include "scan.h"
#include "dnsbl.h"
#include "stats.h"
#include "extern.h"
#include "options.h"
#include "match.h"
#include "compat.h"
#include "negcache.h"
#include "malloc.h"
#include "main.h"


static void irc_init(void);
static void irc_connect(void);
static void irc_reconnect(void);
static void irc_read(void);
static void irc_parse(void);

static struct ChannelConf *get_channel(const char *);

static struct UserInfo *userinfo_create(char *);
static void userinfo_free(struct UserInfo *source);

static void m_ping(char **, unsigned int, char *, struct UserInfo *);
static void m_invite(char **, unsigned int, char *, struct UserInfo *);
static void m_privmsg(char **, unsigned int, char *, struct UserInfo *);
static void m_ctcp(char **, unsigned int, char *, struct UserInfo *);
static void m_notice(char **, unsigned int, char *, struct UserInfo *);
static void m_perform(char **, unsigned int, char *, struct UserInfo *);
static void m_userhost(char **, unsigned int, char *, struct UserInfo *);
static void m_cannot_join(char **, unsigned int, char *, struct UserInfo *);
static void m_kill(char **, unsigned int, char *, struct UserInfo *);

extern struct cnode *nc_head;

/*
 * Certain variables we don't want to allocate memory for over and over
 * again so global scope is given.
 */

static char          IRC_RAW[MSGLENMAX];         /* Buffer to read data into              */
static unsigned int  IRC_RAW_LEN    = 0;         /* Position of IRC_RAW                   */
static int           IRC_FD         = 0;         /* File descriptor for IRC client        */

static struct bopm_sockaddr IRC_SVR;             /* Sock Address Struct for IRC server    */
static struct bopm_ircaddr  IRC_LOCAL;           /* Sock Address Struct for Bind          */

static fd_set        IRC_READ_FDSET;             /* fd_set for IRC (read) data for select()*/
static struct timeval IRC_TIMEOUT;               /* timeval struct for select() timeout   */

static time_t IRC_LAST = 0;                      /* Last full line of data from irc server*/
static time_t IRC_LASTRECONNECT = 0;             /* Time of last reconnection */

/*
 * Table should be ordered with most occuring (or priority)
 * commands at the top of the list.
 */
static struct CommandHash COMMAND_TABLE[] =
{
  { "NOTICE",   m_notice      },
  { "PRIVMSG",  m_privmsg     },
  { "PING",     m_ping        },
  { "INVITE",   m_invite      },
  { "001",      m_perform     },
  { "302",      m_userhost    },
  { "471",      m_cannot_join },
  { "473",      m_cannot_join },
  { "474",      m_cannot_join },
  { "475",      m_cannot_join },
  { "KILL",     m_kill        }
};

/* irc_cycle
 *
 *    Pass control to the IRC portion of HOPM to handle any awaiting IRC events.
 *
 * Parameters:
 *    None
 *
 * Return:
 *    None
 */
void
irc_cycle(void)
{
  if (IRC_FD <= 0)
  {
    /* Initialise negative cache. */
    if (OptionsItem->negcache > 0)
      nc_init(&nc_head);

    /* Resolve remote host. */
    irc_init();

    /* Connect to remote host. */
    irc_connect();
    return;  /* In case connect() immediately failed */
  }

  IRC_TIMEOUT.tv_sec  = 0;

  /* Block .025 seconds to avoid excessive CPU use on select(). */
  IRC_TIMEOUT.tv_usec = 25000;

  FD_ZERO(&IRC_READ_FDSET);
  FD_SET(IRC_FD, &IRC_READ_FDSET);

  switch (select((IRC_FD + 1), &IRC_READ_FDSET, 0, 0, &IRC_TIMEOUT))
  {
    case -1:
      return;
      break;
    case 0:
      break;
    default:
      /* Check if IRC data is available. */
      if (FD_ISSET(IRC_FD, &IRC_READ_FDSET))
        irc_read();

      break;
  }
}

/* irc_init
 *
 *    Resolve IRC host and perform other initialization.
 *
 * Parameters: 
 *    None
 * 
 * Return:
 *    None
 */
static void
irc_init(void)
{
  struct bopm_sockaddr bsaddr;
  struct in_addr *irc_host;

  if (IRC_FD)
    close(IRC_FD);

  memset(&IRC_SVR, 0, sizeof(IRC_SVR));
  memset(&IRC_LOCAL, 0, sizeof(IRC_LOCAL));
  memset(&bsaddr, 0, sizeof(struct bopm_sockaddr));

  /* Resolve IRC host. */
  if ((irc_host = firedns_resolveip4(IRCItem->server)) == NULL)
  {
    log_printf("IRC -> firedns_resolveip4(\"%s\"): %s", IRCItem->server,
               firedns_strerror(fdns_errno));
    exit(EXIT_FAILURE);
  }

  IRC_SVR.sa4.sin_family = AF_INET;
  IRC_SVR.sa4.sin_port = htons(IRCItem->port);
  IRC_SVR.sa4.sin_addr = *irc_host;

  if (IRC_SVR.sa4.sin_addr.s_addr == INADDR_NONE)
  {
    log_printf("IRC -> Unknown error resolving remote host (%s)",
               IRCItem->server);
    exit(EXIT_FAILURE);
  }

  /* Request file desc for IRC client socket */
  IRC_FD = socket(AF_INET, SOCK_STREAM, 0);

  if (IRC_FD == -1)
  {
    switch (errno)
    {
      case EINVAL:
      case EPROTONOSUPPORT:
        log_printf("IRC -> socket(): SOCK_STREAM is not supported on this domain");
        break;
      case ENFILE:
        log_printf("IRC -> socket(): Not enough free file descriptors to allocate IRC socket");
        break;
      case EMFILE:
        log_printf("IRC -> socket(): Process table overflow when requesting file descriptor");
        break;
      case EACCES:
        log_printf("IRC -> socket(): Permission denied to create socket of type SOCK_STREAM");
        break;
      case ENOMEM:
        log_printf("IRC -> socket(): Insufficient memory to allocate socket");
        break;
      default:
        log_printf("IRC -> socket(): Unknown error allocating socket");
        break;
    }

    exit(EXIT_FAILURE);
  }

  /* Bind */
  if (!EmptyString(IRCItem->vhost))
  {
    int bindret = 0;

    if (inet_pton(AF_INET, IRCItem->vhost, &(IRC_LOCAL.in4.s_addr)) <= 0)
    {
      log_printf("IRC -> bind(): %s is an invalid address", IRCItem->vhost);
      exit(EXIT_FAILURE);
    }

    bsaddr.sa4.sin_addr.s_addr = IRC_LOCAL.in4.s_addr;
    bsaddr.sa4.sin_family = AF_INET;
    bsaddr.sa4.sin_port = htons(0);

    bindret = bind(IRC_FD, (struct sockaddr *) &(bsaddr.sa4), sizeof(bsaddr.sa4));

    if (bindret)
    {
      switch (errno)
      {
        case EACCES:
          log_printf("IRC -> bind(): No access to bind to %s", IRCItem->vhost);
          break;
        default:
          log_printf("IRC -> bind(): Error binding to %s (%d)", IRCItem->vhost, errno);
          break;
      }

      exit(EXIT_FAILURE);
    }
  }
}

/* irc_send
 *
 *    Send data to remote IRC host.
 *
 * Parameters:
 *    data: Format of data to send
 *    ...: varargs to format with
 * 
 * Return: NONE
 */
void
irc_send(const char *data, ...)
{
  va_list arglist;
  char data2[MSGLENMAX];
  char tosend[MSGLENMAX];

  va_start(arglist, data);
  vsnprintf(data2, MSGLENMAX, data, arglist);
  va_end(arglist);

  if (OPT_DEBUG >= 2)
    log_printf("IRC SEND -> %s", data2);

  snprintf(tosend, MSGLENMAX, "%s\n", data2);

  if (send(IRC_FD, tosend, strlen(tosend), 0) == -1)
  {
    /* Return of -1 indicates error sending data; we reconnect. */
    log_printf("IRC -> Error sending data to server\n");
    irc_reconnect();
  }
}

/* irc_send
 *
 *    Send privmsg to all channels.
 *
 * Parameters:
 *    data: Format of data to send
 *    ...: varargs to format with
 *
 * Return: NONE
 */
void
irc_send_channels(const char *data, ...)
{
  const node_t *node;
  va_list arglist;
  char buf[MSGLENMAX];

  va_start(arglist, data);
  vsnprintf(buf, sizeof(buf), data, arglist);
  va_end(arglist);


  LIST_FOREACH(node, IRCItem->channels->head)
  {
    const struct ChannelConf *chan = node->data;

    irc_send("PRIVMSG %s :%s", chan->name, buf);
  }
}

/* irc_connect
 *
 *    Connect to IRC server.
 *    XXX: FD allocation done here
 *
 * Parameters: NONE
 * Return: NONE
 */
static void
irc_connect(void)
{
  /* Connect to IRC server as client. */
  if (connect(IRC_FD, (struct sockaddr *)&IRC_SVR, sizeof(IRC_SVR)) == -1)
  {
    switch (errno)
    {
      case EISCONN:
        /* Already connected */
        return;
      case ECONNREFUSED:
        log_printf("IRC -> connect(): Connection refused by (%s)",
                   IRCItem->server);
        break;
      case ETIMEDOUT:
        log_printf("IRC -> connect(): Timed out connecting to (%s)",
                   IRCItem->server);
        break;
      case ENETUNREACH:
        log_printf("IRC -> connect(): Network unreachable");
        break;
      case EALREADY:
        /* Previous attempt not complete */
        return;
      default:
        log_printf("IRC -> connect(): Unknown error connecting to (%s)",
                   IRCItem->server);

        if (OPT_DEBUG >= 1)
          log_printf("%s", strerror(errno));
    }

    /* Try to connect again */
    irc_reconnect();
    return;
  }

  irc_send("NICK %s", IRCItem->nick);

  if (!EmptyString(IRCItem->password))
    irc_send("PASS %s", IRCItem->password);

  irc_send("USER %s %s %s :%s",
           IRCItem->username,
           IRCItem->username,
           IRCItem->username,
           IRCItem->realname);
  time(&IRC_LAST);
}

/* irc_reconnect
 *
 *    Close connection to IRC server.
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
static void
irc_reconnect(void)
{
  time_t present;

  time(&present);

  /* Only try to reconnect every RECONNECT_INTERVAL seconds */
  if ((present - IRC_LASTRECONNECT) < RECONNECTINTERVAL)
  {
    /* Sleep to avoid excessive CPU */
    sleep(1);
    return;
  }

  time(&IRC_LASTRECONNECT);

  if (IRC_FD > 0)
    close(IRC_FD);

  /* Set IRC_FD 0 for reconnection on next irc_cycle(). */
  IRC_FD = 0;

  log_printf("IRC -> Connection to (%s) failed, reconnecting.", IRCItem->server);
}

/* irc_read
 *
 *    irc_read is called my irc_cycle when new data is ready to be
 *    read from the irc server.
 *
 * Parameters: NONE
 * Return: NONE
 */
static void
irc_read(void)
{
  int len;
  char c;

  while ((len = read(IRC_FD, &c, 1)) > 0)
  {
    if (c == '\r')
      continue;

    if (c == '\n')
    {
      /* Null string. */
      IRC_RAW[IRC_RAW_LEN] = '\0';

      /* Parse line. */
      irc_parse();

      /* Reset counter. */
      IRC_RAW_LEN = 0;
      break;
    }

    if (c != '\0')
      IRC_RAW[IRC_RAW_LEN++] = c;
  }

  if ((len <= 0) && (errno != EAGAIN))
  {
    if (OPT_DEBUG >= 2)
      log_printf("irc_read -> errno=%d len=%d", errno, len);

    irc_reconnect();
    IRC_RAW_LEN = 0;
    return;
  }
}

/* irc_parse
 *
 *    irc_parse is called by irc_read when a full line of data
 *    is ready to be parsed.
 *
 * Parameters: NONE
 * Return: NONE
 */
static void
irc_parse(void)
{
  struct UserInfo *source_p;
  char *pos;

  /*
   * parv stores the parsed token, parc is the count of the parsed
   * tokens
   *
   * parv[0] is ALWAYS the source, and is the server name of the source
   * did not exist
   */
  static char            *parv[17];
  static unsigned int     parc;
  static char             msg[MSGLENMAX];    /* Temporarily stores IRC msg to pass to handlers */

  parc = 1;

  if (IRC_RAW_LEN == 0)
    return;

  if (OPT_DEBUG >= 2)
    log_printf("IRC READ -> %s", IRC_RAW);

  time(&IRC_LAST);

  /* Store a copy of IRC_RAW for the handlers (for functions that need PROOF) */
  strlcpy(msg, IRC_RAW, sizeof(msg));

  /* parv[0] is always the source */
  if (IRC_RAW[0] == ':')
    parv[0] = IRC_RAW + 1;
  else
  {
    parv[0] = IRCItem->server;
    parv[parc++] = IRC_RAW;
  }

  pos = IRC_RAW;

  while ((pos = strchr(pos, ' ')) && parc <= 17)
  {
    /* Avoid excessive spaces and end of IRC_RAW */
    if (*(pos + 1) == ' ' && *(pos + 1) == '\0')
    {
      pos++;
      continue;
    }

    /* Anything after a : is considered the final string of the message */
    if (*(pos + 1) == ':')
    {
      parv[parc++] = pos + 2;
      *pos = '\0';
      break;
    }

    /*
     * Set the next parv at this position and replace the space with a
     * \0 for the previous parv
     */
    parv[parc++] = pos + 1;
    *pos = '\0';
    pos++;
  }

  /* Generate a UserInfo struct from the source */
  source_p = userinfo_create(parv[0]);

  /*
   * Determine which command this is from the command table
   * and let the handler for that command take control
   */
  for (unsigned int i = 0; i < (sizeof(COMMAND_TABLE) / sizeof(struct CommandHash)); ++i)
  {
    if (strcasecmp(COMMAND_TABLE[i].command, parv[1]) == 0)
    {
      (*COMMAND_TABLE[i].handler)(parv, parc, msg, source_p);
      break;
    }
  }

  userinfo_free(source_p);
}

/* irc_timer
 *
 *    Functions to be performed every ~seconds.
 *
 * Parameters: NONE
 * Return: NONE
 */
void
irc_timer(void)
{
  time_t present, delta;

  time(&present);

  delta = present - IRC_LAST;

  /* No data in NODATA_TIMEOUT minutes (set in options.h). */
  if (delta >= NODATA_TIMEOUT)
  {
    log_printf("IRC -> Timeout awaiting data from server.");
    irc_reconnect();

    /* Make sure we dont do this again for a while */
    time(&IRC_LAST);
  }
  else if (delta >= NODATA_TIMEOUT / 2)
  {
    /*
     * Generate some data so high ping times or bugs in certain
     * ircds (*cough* unreal *cough*) don't cause uneeded
     * reconnections
     */
    irc_send("PING :HOPM");
  }
}

/* get_channel
 *
 *    Check if a channel is defined in our conf. If so return
 *    a pointer to it.
 *
 * Parameters:
 *    channel: channel to search conf for
 *
 * Return: Pointer to ChannelConf containing the channel
 */
static struct ChannelConf *
get_channel(const char *channel)
{
  node_t *node;

  LIST_FOREACH(node, IRCItem->channels->head)
  {
    struct ChannelConf *item = node->data;

    if (strcasecmp(item->name, channel) == 0)
      return item;
  }

  return NULL;
}

/* userinfo_create
 *
 *    Parse a nick!user@host into a UserInfo struct
 *    and return a pointer to the new struct.
 *
 * Parameters:
 *    source: nick!user@host to parse
 *
 * Return:
 *    pointer to new UserInfo struct, or NULL if parsing failed
 */
static struct UserInfo *
userinfo_create(char *source)
{
  struct UserInfo *ret;
  char *nick;
  char *username;
  char *hostname;
  char *tmp;
  int i, len;

  nick = username = hostname = NULL;
  tmp = xstrdup(source);
  len = strlen(tmp);
  nick = tmp;

  for (i = 0; i < len; ++i)
  {
    if (tmp[i] == '!')
    {
      tmp[i] = '\0';
      username = tmp + i + 1;
    }

    if (tmp[i] == '@')
    {
      tmp[i] = '\0';
      hostname = tmp + i + 1;
    }
  }

  if (nick == NULL || username == NULL || hostname == NULL)
  {
    MyFree(tmp);
    return NULL;
  }

  ret = MyMalloc(sizeof *ret);
  ret->irc_nick     = xstrdup(nick);
  ret->irc_username = xstrdup(username);
  ret->irc_hostname = xstrdup(hostname);

  MyFree(tmp);

  return ret;
};

/* userinfo_free
 *
 *    Free a UserInfo struct created with userinfo_create.
 *
 * Parameters:
 *    source: struct to free
 *
 * Return: None
 */
static void
userinfo_free(struct UserInfo *source_p)
{
  if (source_p == NULL)
    return;

  MyFree(source_p->irc_nick);
  MyFree(source_p->irc_username);
  MyFree(source_p->irc_hostname);
  MyFree(source_p);
}

/* m_perform
 *
 *    actions to perform on IRC connection
 *
 * Parameters:
 * parv[0]  = source
 * parv[1]  = PING
 * parv[2]  = PING TS/Package
 *
 * source_p: UserInfo struct of the source user, or NULL if
 * the source (parv[0]) is a server.
 */
static void
m_perform(char **parv, unsigned int parc, char *msg, struct UserInfo *notused)
{
  node_t *node;

  log_printf("IRC -> Connected to %s:%d", IRCItem->server, IRCItem->port);

  /* Identify to nickserv if needed */
  if (!EmptyString(IRCItem->nickserv))
    irc_send("%s", IRCItem->nickserv);

  /* Oper */
  irc_send("OPER %s", IRCItem->oper);

  /* Set modes */
  irc_send("MODE %s %s", IRCItem->nick, IRCItem->mode);

  /* Set Away */
  if (!EmptyString(IRCItem->away))
    irc_send("AWAY :%s", IRCItem->away);

  /* Perform */
  LIST_FOREACH(node, IRCItem->performs->head)
    irc_send("%s", node->data);

  /* Join all listed channels. */
  LIST_FOREACH(node, IRCItem->channels->head)
  {
    struct ChannelConf *channel = node->data;

    if (EmptyString(channel->name))
      continue;

    if (!EmptyString(channel->key))
      irc_send("JOIN %s %s", channel->name, channel->key);
    else
      irc_send("JOIN %s", channel->name);
  }
}

/* m_ping
 *
 * parv[0]  = source
 * parv[1]  = PING
 * parv[2]  = PING TS/Package
 *
 * source_p: UserInfo struct of the source user, or NULL if
 * the source (parv[0]) is a server.
 */
static void
m_ping(char **parv, unsigned int parc, char *msg, struct UserInfo *source_p)
{
  if (parc < 3)
    return;

  if (OPT_DEBUG >= 2)
    log_printf("IRC -> PING? PONG!");

  irc_send("PONG %s", parv[2]);
}

/* m_invite
 *
 * parv[0]  = source
 * parv[1]  = INVITE
 * parv[2]  = target
 * parv[3]  = channel
 *
 * source_p: UserInfo struct of the source user, or NULL if
 * the source (parv[0]) is a server.
 */
static void
m_invite(char **parv, unsigned int parc, char *msg, struct UserInfo *source_p)
{
  struct ChannelConf *channel;

  if (parc < 4)
    return;

  log_printf("IRC -> Invited to %s by %s", parv[3], parv[0]);

  if ((channel = get_channel(parv[3])) == NULL)
    return;

  irc_send("JOIN %s %s", channel->name, channel->key);
}

/* m_privmsg
 *
 * parv[0]  = source
 * parv[1]  = PRIVMSG
 * parv[2]  = target (channel or user)
 * parv[3]  = message
 *
 * source_p: UserInfo struct of the source user, or NULL if
 * the source (parv[0]) is a server.
 */
static void
m_privmsg(char **parv, unsigned int parc, char *msg, struct UserInfo *source_p)
{
  struct ChannelConf *channel;
  size_t nick_len;

  if (source_p == NULL)
    return;

  if (parc < 4)
    return;

  /* CTCP */
  if (parv[3][0] == '\001')
    m_ctcp(parv, parc, msg, source_p);

  /* Only interested in privmsg to channels */
  if (parv[2][0] != '#' && parv[2][0] != '&')
    return;

  /* Get a target */
  if ((channel = get_channel(parv[2])) == NULL)
    return;

  /* Find a suitable length to compare with */
  nick_len = strcspn(parv[3], " :,");

  if (nick_len < 3 && strlen(IRCItem->nick) >= 3)
    nick_len = 3;

  /* message is a command */
  if (strncasecmp(parv[3], IRCItem->nick, nick_len) == 0  ||
      strncasecmp(parv[3], "!all", 4) == 0)
  {
    /* XXX command_parse will alter parv[3]. */
    command_parse(parv[3], msg, channel, source_p);
  }
}

/* m_ctcp
 * parv[0]  = source
 * parv[1]  = PRIVMSG
 * parv[2]  = target (channel or user)
 * parv[3]  = message
 *
 * source_p: UserInfo struct of the source user, or NULL if
 * the source (parv[0]) is a server.
 *
 */
static void
m_ctcp(char **parv, unsigned int parc, char *msg, struct UserInfo *source_p)
{
  if (strncasecmp(parv[3], "\001VERSION\001", 9) == 0)
    irc_send("NOTICE %s :\001VERSION Hybrid Open Proxy Monitor %s\001",
             source_p->irc_nick, VERSION);
}

/* m_notice
 *
 * parv[0]  = source
 * parv[1]  = NOTICE
 * parv[2]  = target
 * parv[3]  = message
 *
 *
 * source_p: UserInfo struct of the source user, or NULL if
 * the source (parv[0]) is a server.
 *
 */
static void
m_notice(char **parv, unsigned int parc, char *msg, struct UserInfo *source_p)
{
  static regex_t *preg = NULL;
  regmatch_t pmatch[5];

  static char errmsg[256];
  int errnum, i;
  char *user[4];

  if (parc < 4)
    return;

  /* Not interested in notices from users */
  if (source_p)
    return;

  /* Compile the regular expression if it has not been already */
  if (preg == NULL)
  {
    preg = MyMalloc(sizeof *preg);

    if ((errnum = regcomp(preg, IRCItem->connregex, REG_ICASE | REG_EXTENDED)))
    {
      regerror(errnum, preg, errmsg, 256);
      log_printf("IRC REGEX -> Error when compiling regular expression");
      log_printf("IRC REGEX -> %s", errmsg);

      MyFree(preg);
      preg = NULL;
      return;
    }
  }

  /* Match the expression against the possible connection notice */
  if (regexec(preg, parv[3], 5, pmatch, 0))
    return;

  if (OPT_DEBUG > 0)
    log_printf("IRC REGEX -> Regular expression caught connection notice. Parsing.");

  if (pmatch[4].rm_so == -1)
  {
    log_printf("IRC REGEX -> pmatch[4].rm_so is -1 while parsing??? Aborting.");
    return;
  }

  /*
   *   Offsets for data in the connection notice:
   *
   *   NICKNAME: pmatch[1].rm_so  TO  pmatch[1].rm_eo
   *   USERNAME: pmatch[2].rm_so  TO  pmatch[2].rm_eo
   *   HOSTNAME: pmatch[3].rm_so  TO  pmatch[3].rm_eo
   *   IP      : pmatch[4].rm_so  TO  pmatch[4].rm_eo
   */
  for (i = 0; i < 4; ++i)
  {
    user[i] = (parv[3] + pmatch[i + 1].rm_so);
    *(parv[3] + pmatch[i + 1].rm_eo) = '\0';
  }

  if (OPT_DEBUG > 0)
    log_printf("IRC REGEX -> Parsed %s!%s@%s [%s] from connection notice.",
               user[0], user[1], user[2], user[3]);

  /*FIXME (reminder) In the case of any rehash to the regex, preg MUST be freed first.
      regfree(preg);
   */

  /* Pass this information off to scan.c */
  scan_connect(user, msg);

  /* Record the connect for stats purposes */
  stats_connect();
}

/* m_userhost
 *
 * parv[0]  = source
 * parv[1]  = USERHOST
 * parv[2]  = target (hopm)
 * parv[3]  = :nick=(flags)user@host
 *
 *
 * source_p: UserInfo struct of the source user, or NULL if
 * the source (parv[0]) is a server.
 *
 */
static void
m_userhost(char **parv, unsigned int parc, char *msg, struct UserInfo *source_p)
{
  if (parc < 4)
    return;

  command_userhost(parv[3]);
}

/* m_cannot_join
 *
 * parv[0]  = source
 * parv[1]  = numeric
 * parv[2]  = target (hopm)
 * parv[3]  = channel
 * parv[4]  = error text
 *
 */
static void
m_cannot_join(char **parv, unsigned int parc, char *msg, struct UserInfo *source_p)
{
  struct ChannelConf *channel;

  if (parc < 5)
    return;

  /* Is it one of our channels? */
  if ((channel = get_channel(parv[3])) == NULL)
    return;

  if (EmptyString(channel->invite))
    return;

  irc_send("%s", channel->invite);
}

/* m_kill
 *
 * parv[0]  = source
 * parv[1]  = numeric
 * parv[2]  = target (hopm)
 * parv[3]  = channel
 * parv[4]  = error text
 *
 */
static void
m_kill(char **parv, unsigned int parc, char *msg, struct UserInfo *source_p)
{
  /* Restart hopm to rehash */
  main_restart();
}

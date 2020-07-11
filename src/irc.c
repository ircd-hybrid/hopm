/*
 *  Copyright (c) 2002-2003 Erik Fears
 *  Copyright (c) 2014-2020 ircd-hybrid development team
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

#include "setup.h"

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <poll.h>
#include <time.h>
#include <errno.h>
#include <stdarg.h>
#include <regex.h>
#include <assert.h>
#ifdef HAVE_LIBCRYPTO
#include <openssl/ssl.h>
#include <openssl/x509v3.h>
#include <openssl/err.h>
#endif

#include "config.h"
#include "irc.h"
#include "log.h"
#include "opercmd.h"
#include "scan.h"
#include "dnsbl.h"
#include "stats.h"
#include "options.h"
#include "match.h"
#include "compat.h"
#include "negcache.h"
#include "memory.h"
#include "main.h"
#include "serno.h"


/*
 * Certain variables we don't want to allocate memory for over and over
 * again so global scope is given.
 */
static char         IRC_RAW[MSGLENMAX];  /* Buffer to read data into               */
static unsigned int IRC_RAW_LEN;         /* Position of IRC_RAW                    */
static int          IRC_FD = -1;         /* File descriptor for IRC client         */

static struct sockaddr_storage IRC_SVR;  /* Sock Address Struct for IRC server     */
static socklen_t IRC_SVR_LEN;
static char IRC_SVR_STR[INET6_ADDRSTRLEN];
static time_t IRC_LAST;                  /* Last full line of data from irc server */
static time_t IRC_LASTRECONNECT;         /* Time of last reconnection              */

#ifdef HAVE_LIBCRYPTO
static SSL_CTX *ssl_ctx;
static SSL *ssl_handle;
#endif


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
static const struct ChannelConf *
get_channel(const char *name)
{
  node_t *node;

  LIST_FOREACH(node, IRCItem.channels.head)
  {
    struct ChannelConf *item = node->data;

    if (strcasecmp(item->name, name) == 0)
      return item;
  }

  return NULL;
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
m_perform(char *parv[], unsigned int parc, const char *msg, const char *source_p)
{
  node_t *node;

  log_printf("IRC -> Connected to %s[%s]:%i", IRC_SVR_STR, IRCItem.server, IRCItem.port);

  /* Identify to nickserv if needed */
  if (!EmptyString(IRCItem.nickserv))
    irc_send("%s", IRCItem.nickserv);

  /* Oper */
  if (!EmptyString(IRCItem.oper))
    irc_send("OPER %s", IRCItem.oper);

  /* Set modes */
  if (!EmptyString(IRCItem.mode))
    irc_send("MODE %s %s", IRCItem.nick, IRCItem.mode);

  /* Set Away */
  if (!EmptyString(IRCItem.away))
    irc_send("AWAY :%s", IRCItem.away);

  /* Perform */
  LIST_FOREACH(node, IRCItem.performs.head)
    irc_send("%s", node->data);

  /* Join all listed channels. */
  LIST_FOREACH(node, IRCItem.channels.head)
  {
    const struct ChannelConf *channel = node->data;

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
m_ping(char *parv[], unsigned int parc, const char *msg, const char *source_p)
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
m_invite(char *parv[], unsigned int parc, const char *msg, const char *source_p)
{
  if (parc < 4)
    return;

  log_printf("IRC -> Invited to %s by %s", parv[3], parv[0]);

  const struct ChannelConf *channel = get_channel(parv[3]);
  if (channel == NULL)
    return;

  irc_send("JOIN %s %s", channel->name, channel->key);
}

/* m_ctcp
 * parv[0]  = source
 * parv[1]  = PRIVMSG
 * parv[2]  = target (channel or user)
 * parv[3]  = message
 *
 * source_p: UserInfo struct of the source user, or NULL if
 * the source (parv[0]) is a server.
 */
static void
m_ctcp(char *parv[], unsigned int parc, const char *msg, const char *source_p)
{
  if (strncasecmp(parv[3], "\001VERSION\001", 9) == 0)
    irc_send("NOTICE %s :\001VERSION Hybrid Open Proxy Monitor %s(%s)\001",
             source_p, VERSION, SERIALNUM);
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
m_privmsg(char *parv[], unsigned int parc, const char *msg, const char *source_p)
{
  if (source_p == NULL)
    return;

  if (parc < 4)
    return;

  /* CTCP */
  if (*parv[3] == '\001')
  {
    m_ctcp(parv, parc, msg, source_p);
    return;
  }

  /* Only interested in privmsg to channels */
  if (*parv[2] != '#' && *parv[2] != '&')
    return;

  /* Get a target */
  const struct ChannelConf *channel = get_channel(parv[2]);
  if (channel == NULL)
    return;

  int hit = strncasecmp(parv[3], "!all ", 5) == 0;
  if (hit == 0)
  {
    size_t nick_len = strlen(IRCItem.nick);

    if (strncasecmp(parv[3], IRCItem.nick, nick_len) == 0)
      hit = *(parv[3] + nick_len) == ' ' ||
            *(parv[3] + nick_len) == ',' ||
            *(parv[3] + nick_len) == ':';
  }

  if (hit)
    /* XXX command_parse will alter parv[3]. */
    command_parse(parv[3], channel->name, source_p);
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
 */
static void
m_notice(char *parv[], unsigned int parc, const char *msg, const char *source_p)
{
  static regex_t *preg = NULL;
  regmatch_t pmatch[5];
  int errnum;
  const char *user[4];
  const node_t *node;

  /* Not interested in notices from users */
  if (source_p)
    return;

  if (parc < 4)
    return;

  /* Compile the regular expression if it has not been already */
  if (preg == NULL)
  {
    preg = xcalloc(sizeof(*preg));

    if ((errnum = regcomp(preg, IRCItem.connregex, REG_ICASE | REG_EXTENDED)))
    {
      char errmsg[256];

      regerror(errnum, preg, errmsg, sizeof(errmsg));
      log_printf("IRC REGEX -> Error when compiling regular expression: %s", errmsg);

      xfree(preg);
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
  for (unsigned int i = 0; i < 4; ++i)
  {
    user[i] = (parv[3] + pmatch[i + 1].rm_so);
    *(parv[3] + pmatch[i + 1].rm_eo) = '\0';
  }

  if (OPT_DEBUG > 0)
    log_printf("IRC REGEX -> Parsed %s!%s@%s [%s] from connection notice.",
               user[0], user[1], user[2], user[3]);

  LIST_FOREACH(node, IRCItem.notices.head)
    irc_send("NOTICE %s :%s", user[0], node->data);

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
 */
static void
m_userhost(char *parv[], unsigned int parc, const char *msg, const char *source_p)
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
 */
static void
m_cannot_join(char *parv[], unsigned int parc, const char *msg, const char *source_p)
{
  if (parc < 5)
    return;

  /* Is it one of our channels? */
  const struct ChannelConf *channel = get_channel(parv[3]);
  if (channel == NULL)
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
 */
static void
m_kill(char *parv[], unsigned int parc, const char *msg, const char *source_p)
{
  /* Restart hopm to rehash */
  main_restart();
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
static const char *
userinfo_create(const char *source)
{
  static char name[MSGLENMAX];
  unsigned int has_user = 0;
  unsigned int has_host = 0;

  strlcpy(name, source, sizeof(name));

  for (char *p = name; *p; ++p)
  {
    if (*p == '!')
    {
      *p = '\0';
      ++has_user;
      continue;
    }

    if (*p == '@' && has_user)
    {
      ++has_host;
      continue;
    }
  }

  if (has_user == 1 && has_host == 1)
    return name;
  return NULL;
};

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
  int n;
  const void *address;

  assert(IRC_FD == -1);

  memset(&IRC_SVR, 0, sizeof(IRC_SVR));

  /* Resolve IRC host. */
  if ((address = firedns_resolveip6(IRCItem.server)))
  {
    struct sockaddr_in6 *in = (struct sockaddr_in6 *)&IRC_SVR;

    IRC_SVR_LEN = sizeof(*in);
    IRC_SVR.ss_family = AF_INET6;
    in->sin6_port = htons(IRCItem.port);
    memcpy(&in->sin6_addr, address, sizeof(in->sin6_addr));
  }
  else if ((address = firedns_resolveip4(IRCItem.server)))
  {
    struct sockaddr_in *in = (struct sockaddr_in *)&IRC_SVR;

    IRC_SVR_LEN = sizeof(*in);
    IRC_SVR.ss_family = AF_INET;
    in->sin_port = htons(IRCItem.port);
    memcpy(&in->sin_addr, address, sizeof(in->sin_addr));
  }
  else
  {
    log_printf("IRC -> firedns_resolveip(\"%s\"): %s", IRCItem.server,
               firedns_strerror(firedns_errno));
    exit(EXIT_FAILURE);
  }

  n = getnameinfo((const struct sockaddr *)&IRC_SVR, IRC_SVR_LEN, IRC_SVR_STR,
                  sizeof(IRC_SVR_STR), NULL, 0, NI_NUMERICHOST);
  if (n)
  {
    log_printf("IRC -> getnameinfo() error: %s", gai_strerror(n));
    exit(EXIT_FAILURE);
  }

  /* Request file desc for IRC client socket */
  IRC_FD = socket(IRC_SVR.ss_family, SOCK_STREAM, 0);

  if (IRC_FD == -1)
  {
    log_printf("IRC -> socket(): error creating socket: %s", strerror(errno));
    exit(EXIT_FAILURE);
  }

  /* Bind */
  if (!EmptyString(IRCItem.vhost))
  {
    struct addrinfo hints, *res;

    memset(&hints, 0, sizeof(hints));

    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_NUMERICHOST;

    n = getaddrinfo(IRCItem.vhost, NULL, &hints, &res);
    if (n)
    {
      log_printf("IRC -> error binding to %s: %s", IRCItem.vhost, gai_strerror(n));
      exit(EXIT_FAILURE);
    }
    else if (bind(IRC_FD, res->ai_addr, res->ai_addrlen))
    {
      log_printf("IRC -> error binding to %s: %s", IRCItem.vhost, strerror(errno));
      exit(EXIT_FAILURE);
    }

    freeaddrinfo(res);
  }

  if (IRCItem.tls)
  {
#ifdef HAVE_LIBCRYPTO
    /* Initialize SSL */
    static int tls_init = 0;
    if (tls_init == 0)
    {
      tls_init = 1;

      ssl_ctx = SSL_CTX_new(TLS_client_method());
      if (ssl_ctx == NULL)
      {
        log_printf("IRC -> unable to create SSL context");
        exit(EXIT_FAILURE);
      }

      SSL_CTX_set_min_proto_version(ssl_ctx, TLS1_2_VERSION);
      SSL_CTX_set_default_verify_paths(ssl_ctx);
    }

    ssl_handle = SSL_new(ssl_ctx);
    SSL_set_fd(ssl_handle, IRC_FD);

    if (IRCItem.tls_hostname_verification)
    {
      SSL_set_hostflags(ssl_handle, X509_CHECK_FLAG_NO_PARTIAL_WILDCARDS);

      if (SSL_set1_host(ssl_handle, IRCItem.server) == 0)
      {
        log_printf("IRC -> unable to set expected DNS hostname");
        /* OpenSSL is unable to verify the server hostname at this point, so we exit. */
        exit(EXIT_FAILURE);
      }
    }

    SSL_set_verify(ssl_handle, SSL_VERIFY_PEER, NULL);
#else
    log_printf("IRC -> HOPM is not compiled with OpenSSL support");
    exit(EXIT_FAILURE);
#endif
  }
}

/* irc_close
 *
 *    Close connection to IRC server.
 *
 * Parameters: NONE
 *
 * Return: NONE
 */
static void
irc_close(void)
{
  if (IRC_FD > -1)
  {
#ifdef HAVE_LIBCRYPTO
    if (ssl_handle)
    {
      SSL_shutdown(ssl_handle);
      SSL_free(ssl_handle);
      ssl_handle = NULL;
    }
#endif

    close(IRC_FD);
    IRC_FD = -1;  /* Set IRC_FD -1 for reconnection on next irc_cycle(). */
  }

  log_printf("IRC -> Connection to (%s) failed, reconnecting.", IRCItem.server);
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
  time_t present;

  time(&present);

  /* Only try to reconnect every IRCItem.reconnectinterval seconds */
  if ((present - IRC_LASTRECONNECT) < IRCItem.reconnectinterval)
  {
    /* Sleep to avoid excessive CPU */
    sleep(1);
    return;
  }

  time(&IRC_LASTRECONNECT);
  time(&IRC_LAST);

  irc_init();

  log_printf("IRC -> Attempting to connect to %s[%s]:%i", IRC_SVR_STR, IRCItem.server, IRCItem.port);

  /* Connect to IRC server as client. */
  if (connect(IRC_FD, (struct sockaddr *)&IRC_SVR, IRC_SVR_LEN) == -1)
  {
    log_printf("IRC -> connect(): error connecting to %s: %s",
               IRCItem.server, strerror(errno));

    /* Close socket and try to connect again */
    irc_close();
    return;
  }

#ifdef HAVE_LIBCRYPTO
  if (ssl_handle)
  {
    int ret = SSL_connect(ssl_handle);
    if (ret != 1)
    {
      const char *error = ERR_error_string(ERR_get_error(), NULL);
      log_printf("IRC -> connect(): error performing TLS handshake with %s: %s",
                 IRCItem.server, error);

      /* Close socket and try to connect again */
      irc_close();
      return;
    }
  }
#endif

  irc_send("NICK %s", IRCItem.nick);

  if (!EmptyString(IRCItem.password))
    irc_send("PASS %s", IRCItem.password);

  irc_send("USER %s %s %s :%s",
           IRCItem.username,
           IRCItem.username,
           IRCItem.username,
           IRCItem.realname);
  time(&IRC_LAST);
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
  char *pos;

  /*
   * parv stores the parsed token, parc is the count of the parsed
   * tokens
   *
   * parv[0] is ALWAYS the source, and is the server name of the
   * source did not exist
   */
  char        *parv[17];
  static const unsigned int parv_size = sizeof(parv) / sizeof(parv[0]);
  unsigned int parc = 1;
  char         msg[MSGLENMAX];  /* Temporarily stores IRC msg to pass to handlers */

  struct CommandHash
  {
    const char *command;
    void (*handler)(char *[], unsigned int, const char *, const char *);
  };

  /*
   * Table should be ordered with most occuring (or priority)
   * commands at the top of the list.
   */
  static const struct CommandHash COMMAND_TABLE[] =
  {
    { .command = "NOTICE",  .handler = m_notice      },
    { .command = "PRIVMSG", .handler = m_privmsg     },
    { .command = "PING",    .handler = m_ping        },
    { .command = "INVITE",  .handler = m_invite      },
    { .command = "001",     .handler = m_perform     },
    { .command = "302",     .handler = m_userhost    },
    { .command = "471",     .handler = m_cannot_join },
    { .command = "473",     .handler = m_cannot_join },
    { .command = "474",     .handler = m_cannot_join },
    { .command = "475",     .handler = m_cannot_join },
    { .command = "KILL",    .handler = m_kill        },
    { .command = NULL }
  };

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
    parv[0] = IRCItem.server;
    parv[parc++] = IRC_RAW;
  }

  pos = IRC_RAW;

  while ((pos = strchr(pos, ' ')) && parc < parv_size)
  {
    /* Avoid excessive spaces and end of IRC_RAW */
    if (*(pos + 1) == ' ' || *(pos + 1) == '\0')
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

  /*
   * Determine which command this is from the command table
   * and let the handler for that command take control
   */
  for (const struct CommandHash *cmd = COMMAND_TABLE; cmd->command; ++cmd)
  {
    if (strcasecmp(cmd->command, parv[1]) == 0)
    {
      cmd->handler(parv, parc, msg, userinfo_create(parv[0]));
      break;
    }
  }
}

/* irc_read
 *
 *    irc_read is called by irc_cycle when new data is ready to be
 *    read from the irc server.
 *
 * Parameters: NONE
 * Return: NONE
 */
static void
irc_read(void)
{
  ssize_t len;
  char c;

  while (1)
  {
#ifdef HAVE_LIBCRYPTO
    if (ssl_handle)
      len = SSL_read(ssl_handle, &c, 1);
    else
#endif
      len = recv(IRC_FD, &c, 1, 0);

    if (len <= 0)
      break;

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
    if (errno != EINTR)
      log_printf("IRC -> Error reading data from server: %s", strerror(errno));

    irc_close();
    IRC_RAW_LEN = 0;
    return;
  }
}

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
  static struct pollfd pfd;

  if (IRC_FD == -1)
  {
    /* Initialize negative cache. */
    if (OptionsItem.negcache)
      negcache_init();

    /* Connect to remote host. */
    irc_connect();
    return;  /* In case connect() immediately failed */
  }

  pfd.fd = IRC_FD;
  pfd.events = POLLIN;

  /* Block .050 seconds to avoid excessive CPU use on poll(). */
  switch (poll(&pfd, 1, 50))
  {
    case  0:
    case -1:
      break;
    default:
      /* Check if IRC data is available. */
      if (pfd.revents & POLLIN)
        irc_read();
      else if (pfd.revents & (POLLERR | POLLHUP))
        irc_close();

      break;
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
  char buf[MSGLENMAX];

  va_start(arglist, data);
  ssize_t len = vsnprintf(buf, sizeof(buf), data, arglist);
  va_end(arglist);

  if (OPT_DEBUG >= 2)
    log_printf("IRC SEND -> %s", buf);

  if (len > 510)
    len = 510;

  buf[len++] = '\r';
  buf[len++] = '\n';

  ssize_t sent;
#ifdef HAVE_LIBCRYPTO
  if (ssl_handle)
    sent = SSL_write(ssl_handle, buf, len);
  else
#endif
    sent = send(IRC_FD, buf, len, 0);

  if (sent != len)
  {
    /* Return of -1 indicates error sending data; we reconnect. */
    log_printf("IRC -> Error sending data to server: %s", strerror(errno));
    irc_close();
  }
}

/* irc_send_channels
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

  LIST_FOREACH(node, IRCItem.channels.head)
  {
    const struct ChannelConf *chan = node->data;

    irc_send("PRIVMSG %s :%s", chan->name, buf);
  }
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

  /* No data in IRCItem.readtimeout seconds */
  if (delta >= IRCItem.readtimeout)
  {
    log_printf("IRC -> Timeout awaiting data from server.");
    irc_close();

    /* Make sure we don't do this again for a while */
    time(&IRC_LAST);
  }
  else if (delta >= IRCItem.readtimeout / 2)
  {
    /*
     * Generate some data so high ping times don't cause uneeded
     * reconnections
     */
    irc_send("PING :HOPM");
  }
}

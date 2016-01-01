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

%option case-insensitive
%option noyywrap
%option nounput
%option never-interactive

%{
#include <stdio.h>
#include <string.h>

#include "compat.h"
#include "config.h"
#include "config-parser.h"


static void ccomment(void);

unsigned int linenum = 1;
char linebuf[512];

%}

string                 \"[^\"\n]*[\"\n]
comment                ("//"|"#").*
whitespace             [ \t\r]*

%%

"/*"                    { ccomment(); }

{comment}               ;

{string}                {
                           /* QSTRING from Hybrid7. Why re-invent the wheel? */

                           if(yytext[yyleng-2] == '\\')
                           {
                              yyless(yyleng-1); /* return last quote */
                              yymore();         /* append next string */
                           }
                           else
                           {
                              yylval.string = yytext+1;
                              if(yylval.string[yyleng-2] != '"') ; /* log error */
                              else
                              {
                                 int i,j;

                                 yylval.string[yyleng-2] = '\0'; /* remove close
                                                                  *  quote
                                                                  */

                                 for (j=i=0 ;yylval.string[i] != '\0'; i++,j++)
                                 {
                                    if (yylval.string[i] != '\\')
                                    {
                                       yylval.string[j] = yylval.string[i];
                                    }
                                    else
                                    {
                                        i++;
                                        yylval.string[j] = yylval.string[i];
                                    }
                                 }
                                 yylval.string[j] = '\0';
                                 return STRING;
                              }
                           }
                        }

AWAY                    { return AWAY;         }
BAN_UNKNOWN             { return BAN_UNKNOWN;  }
BLACKLIST               { return BLACKLIST;    }
CHANNEL                 { return CHANNEL;      }
COMMAND_INTERVAL        { return COMMAND_INTERVAL; }
COMMAND_QUEUE_SIZE      { return COMMAND_QUEUE_SIZE; }
COMMAND_TIMEOUT         { return COMMAND_TIMEOUT; }
CONNREGEX               { return CONNREGEX;    }
DNS_FDLIMIT             { return DNS_FDLIMIT;  }
DNS_TIMEOUT             { return DNS_TIMEOUT;  }
DNSBL_FROM              { return DNSBL_FROM;   }
DNSBL_TO                { return DNSBL_TO;     }
EXEMPT                  { return EXEMPT;       }
FD                      { return FD;           }
INVITE                  { return INVITE;       }
IRC                     { return IRC;          }
KLINE                   { return KLINE;        }
KEY                     { return KEY;          }
MASK                    { return MASK;         }
MAX_READ                { return MAX_READ;     }
MODE                    { return MODE;         }
NAME                    { return NAME;         }
NEGCACHE                { return NEGCACHE;     }
NEGCACHE_REBUILD        { return NEGCACHE_REBUILD; }
NICK                    { return NICK;         }
NICKSERV                { return NICKSERV;     }
NOTICE                  { return NOTICE;       }
OPER                    { return OPER;         }
OPM                     { return OPM;          }
OPTIONS                 { return OPTIONS;      }
PASSWORD                { return PASSWORD;     }
PERFORM                 { return PERFORM;      }
PIDFILE                 { return PIDFILE;      }
PORT                    { return PORT;         }
PROTOCOL                { return PROTOCOL;     }
READTIMEOUT             { return READTIMEOUT;  }
REALNAME                { return REALNAME;     }
RECONNECTINTERVAL       { return RECONNECTINTERVAL; }
REPLY                   { return REPLY;        }
SCANLOG                 { return SCANLOG;      }
SCANNER                 { return SCANNER;      }
SENDMAIL                { return SENDMAIL;     }
SERVER                  { return SERVER;       }
TARGET_IP               { return TARGET_IP;    }
TARGET_PORT             { return TARGET_PORT;  }
TARGET_STRING           { return TARGET_STRING;}
TIMEOUT                 { return TIMEOUT;      }
TYPE                    { return TYPE;         }
USER                    { return USER;         }
USERNAME                { return USERNAME;     }
VHOST                   { return VHOST;        }

years                   { return YEARS; }
year                    { return YEARS; }
months                  { return MONTHS; }
month                   { return MONTHS; }
weeks                   { return WEEKS; }
week                    { return WEEKS; }
days                    { return DAYS; }
day                     { return DAYS; }
hours                   { return HOURS; }
hour                    { return HOURS; }
minutes                 { return MINUTES; }
minute                  { return MINUTES; }
seconds                 { return SECONDS; }
second                  { return SECONDS; }

bytes                   { return BYTES; }
byte                    { return BYTES; }
kilobytes               { return KBYTES; }
kilobyte                { return KBYTES; }
kbytes                  { return KBYTES; }
kbyte                   { return KBYTES; }
kb                      { return KBYTES; }
megabytes               { return MBYTES; }
megabyte                { return MBYTES; }
mbytes                  { return MBYTES; }
mbyte                   { return MBYTES; }
mb                      { return MBYTES; }

HTTP                    {
                          yylval.number = OPM_TYPE_HTTP;
                          return PROTOCOLTYPE;
                        }

HTTPPOST                {
                          yylval.number = OPM_TYPE_HTTPPOST;
                          return PROTOCOLTYPE;
                        }

HTTPS                   {
                          yylval.number = OPM_TYPE_HTTPS;
                          return PROTOCOLTYPE;
                        }

HTTPSPOST               {
                          yylval.number = OPM_TYPE_HTTPSPOST;
                          return PROTOCOLTYPE;
                        }

SOCKS4                  {
                          yylval.number = OPM_TYPE_SOCKS4;
                          return PROTOCOLTYPE;
                        }

SOCKS5                  {
                          yylval.number = OPM_TYPE_SOCKS5;
                          return PROTOCOLTYPE;
                        }

WINGATE                 {
                          yylval.number = OPM_TYPE_WINGATE;
                          return PROTOCOLTYPE;
                        }

ROUTER                  {
                          yylval.number = OPM_TYPE_ROUTER;
                          return PROTOCOLTYPE;
                        }

DREAMBOX                {
                          yylval.number = OPM_TYPE_DREAMBOX;
                          return PROTOCOLTYPE;
                        }



[0-9]+                  {
                           yylval.number=atoi(yytext);
                           return NUMBER;
                        }





TRUE                     {
                           yylval.number=1;
                           return NUMBER;
                         }
YES                      {
                           yylval.number=1;
                           return NUMBER;
                         }
ON                       {
                           yylval.number=1;
                           return NUMBER;
                         }



FALSE                    {
                           yylval.number=0;
                           return NUMBER;
                         }

NO                       {
                           yylval.number=0;
                           return NUMBER;
                         }

OFF                      {
                           yylval.number=0;
                           return NUMBER;
                         }


\n.*                     {
                           strlcpy(linebuf, yytext + 1, sizeof(linebuf));
                           ++linenum;
                           yyless(1);
                         }

{whitespace}            /* ignore whitespace */;

.                       return yytext[0];

%%


/* C-comment ignoring routine -kre*/
static void
ccomment(void)
{
  int c = 0;

  /* log(L_NOTICE, "got comment"); */
  while (1)
  {
    while ((c = input()) != '*' && c != EOF)
      if (c == '\n')
        ++linenum;

    if (c == '*')
    {
      while ((c = input()) == '*')
        /* Nothing */ ;
      if (c == '/')
        break;
      else if (c == '\n')
        ++linenum;
    }

    if (c == EOF)
    {
      YY_FATAL_ERROR("EOF in comment");

      /* XXX hack alert this disables
       * the stupid unused function warning
       * gcc generates
       */
      if (1 == 0)
        yy_fatal_error("EOF in comment");
      break;
    }
  }
}

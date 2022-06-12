/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_CONFIG_PARSER_H_INCLUDED
# define YY_YY_CONFIG_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ADDRESS_FAMILY = 258,          /* ADDRESS_FAMILY  */
    AWAY = 259,                    /* AWAY  */
    BAN_UNKNOWN = 260,             /* BAN_UNKNOWN  */
    BIND = 261,                    /* BIND  */
    BLACKLIST = 262,               /* BLACKLIST  */
    BYTES = 263,                   /* BYTES  */
    KBYTES = 264,                  /* KBYTES  */
    MBYTES = 265,                  /* MBYTES  */
    CHANNEL = 266,                 /* CHANNEL  */
    COMMAND_INTERVAL = 267,        /* COMMAND_INTERVAL  */
    COMMAND_QUEUE_SIZE = 268,      /* COMMAND_QUEUE_SIZE  */
    COMMAND_TIMEOUT = 269,         /* COMMAND_TIMEOUT  */
    CONNREGEX = 270,               /* CONNREGEX  */
    DNS_FDLIMIT = 271,             /* DNS_FDLIMIT  */
    DNS_TIMEOUT = 272,             /* DNS_TIMEOUT  */
    DNSBL_FROM = 273,              /* DNSBL_FROM  */
    DNSBL_TO = 274,                /* DNSBL_TO  */
    EXEMPT = 275,                  /* EXEMPT  */
    FD = 276,                      /* FD  */
    INVITE = 277,                  /* INVITE  */
    IPV4 = 278,                    /* IPV4  */
    IPV6 = 279,                    /* IPV6  */
    IRC = 280,                     /* IRC  */
    KLINE = 281,                   /* KLINE  */
    KEY = 282,                     /* KEY  */
    MASK = 283,                    /* MASK  */
    MAX_READ = 284,                /* MAX_READ  */
    MODE = 285,                    /* MODE  */
    NAME = 286,                    /* NAME  */
    NEGCACHE = 287,                /* NEGCACHE  */
    NEGCACHE_REBUILD = 288,        /* NEGCACHE_REBUILD  */
    NICK = 289,                    /* NICK  */
    NICKSERV = 290,                /* NICKSERV  */
    NOTICE = 291,                  /* NOTICE  */
    OPER = 292,                    /* OPER  */
    OPM = 293,                     /* OPM  */
    OPTIONS = 294,                 /* OPTIONS  */
    PASSWORD = 295,                /* PASSWORD  */
    PERFORM = 296,                 /* PERFORM  */
    PIDFILE = 297,                 /* PIDFILE  */
    PORT = 298,                    /* PORT  */
    PROTOCOL = 299,                /* PROTOCOL  */
    RSA_PRIVATE_KEY_FILE = 300,    /* RSA_PRIVATE_KEY_FILE  */
    READTIMEOUT = 301,             /* READTIMEOUT  */
    REALNAME = 302,                /* REALNAME  */
    RECONNECTINTERVAL = 303,       /* RECONNECTINTERVAL  */
    REPLY = 304,                   /* REPLY  */
    SCANLOG = 305,                 /* SCANLOG  */
    SCANNER = 306,                 /* SCANNER  */
    SECONDS = 307,                 /* SECONDS  */
    MINUTES = 308,                 /* MINUTES  */
    HOURS = 309,                   /* HOURS  */
    DAYS = 310,                    /* DAYS  */
    WEEKS = 311,                   /* WEEKS  */
    MONTHS = 312,                  /* MONTHS  */
    YEARS = 313,                   /* YEARS  */
    SENDMAIL = 314,                /* SENDMAIL  */
    SERVER = 315,                  /* SERVER  */
    TARGET_IP = 316,               /* TARGET_IP  */
    TARGET_PORT = 317,             /* TARGET_PORT  */
    TARGET_STRING = 318,           /* TARGET_STRING  */
    TIMEOUT = 319,                 /* TIMEOUT  */
    TLS = 320,                     /* TLS  */
    TLS_CERTIFICATE_FILE = 321,    /* TLS_CERTIFICATE_FILE  */
    TLS_HOSTNAME_VERIFICATION = 322, /* TLS_HOSTNAME_VERIFICATION  */
    TLS_DISABLE_CERTIFICATE_VERIFICATION = 323, /* TLS_DISABLE_CERTIFICATE_VERIFICATION  */
    TYPE = 324,                    /* TYPE  */
    USERNAME = 325,                /* USERNAME  */
    USER = 326,                    /* USER  */
    NUMBER = 327,                  /* NUMBER  */
    STRING = 328,                  /* STRING  */
    PROTOCOLTYPE = 329             /* PROTOCOLTYPE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ADDRESS_FAMILY 258
#define AWAY 259
#define BAN_UNKNOWN 260
#define BIND 261
#define BLACKLIST 262
#define BYTES 263
#define KBYTES 264
#define MBYTES 265
#define CHANNEL 266
#define COMMAND_INTERVAL 267
#define COMMAND_QUEUE_SIZE 268
#define COMMAND_TIMEOUT 269
#define CONNREGEX 270
#define DNS_FDLIMIT 271
#define DNS_TIMEOUT 272
#define DNSBL_FROM 273
#define DNSBL_TO 274
#define EXEMPT 275
#define FD 276
#define INVITE 277
#define IPV4 278
#define IPV6 279
#define IRC 280
#define KLINE 281
#define KEY 282
#define MASK 283
#define MAX_READ 284
#define MODE 285
#define NAME 286
#define NEGCACHE 287
#define NEGCACHE_REBUILD 288
#define NICK 289
#define NICKSERV 290
#define NOTICE 291
#define OPER 292
#define OPM 293
#define OPTIONS 294
#define PASSWORD 295
#define PERFORM 296
#define PIDFILE 297
#define PORT 298
#define PROTOCOL 299
#define RSA_PRIVATE_KEY_FILE 300
#define READTIMEOUT 301
#define REALNAME 302
#define RECONNECTINTERVAL 303
#define REPLY 304
#define SCANLOG 305
#define SCANNER 306
#define SECONDS 307
#define MINUTES 308
#define HOURS 309
#define DAYS 310
#define WEEKS 311
#define MONTHS 312
#define YEARS 313
#define SENDMAIL 314
#define SERVER 315
#define TARGET_IP 316
#define TARGET_PORT 317
#define TARGET_STRING 318
#define TIMEOUT 319
#define TLS 320
#define TLS_CERTIFICATE_FILE 321
#define TLS_HOSTNAME_VERIFICATION 322
#define TLS_DISABLE_CERTIFICATE_VERIFICATION 323
#define TYPE 324
#define USERNAME 325
#define USER 326
#define NUMBER 327
#define STRING 328
#define PROTOCOLTYPE 329

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 96 "config-parser.y"

  int number;
  char *string;

#line 220 "config-parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

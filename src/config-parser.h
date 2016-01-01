/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_CONFIG_PARSER_H_INCLUDED
# define YY_YY_CONFIG_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AWAY = 258,
    BAN_UNKNOWN = 259,
    BLACKLIST = 260,
    BYTES = 261,
    KBYTES = 262,
    MBYTES = 263,
    CHANNEL = 264,
    COMMAND_INTERVAL = 265,
    COMMAND_QUEUE_SIZE = 266,
    COMMAND_TIMEOUT = 267,
    CONNREGEX = 268,
    DNS_FDLIMIT = 269,
    DNS_TIMEOUT = 270,
    DNSBL_FROM = 271,
    DNSBL_TO = 272,
    EXEMPT = 273,
    FD = 274,
    INVITE = 275,
    IRC = 276,
    KLINE = 277,
    KEY = 278,
    MASK = 279,
    MAX_READ = 280,
    MODE = 281,
    NAME = 282,
    NEGCACHE = 283,
    NEGCACHE_REBUILD = 284,
    NICK = 285,
    NICKSERV = 286,
    NOTICE = 287,
    OPER = 288,
    OPM = 289,
    OPTIONS = 290,
    PASSWORD = 291,
    PERFORM = 292,
    PIDFILE = 293,
    PORT = 294,
    PROTOCOL = 295,
    READTIMEOUT = 296,
    REALNAME = 297,
    RECONNECTINTERVAL = 298,
    REPLY = 299,
    SCANLOG = 300,
    SCANNER = 301,
    SECONDS = 302,
    MINUTES = 303,
    HOURS = 304,
    DAYS = 305,
    WEEKS = 306,
    MONTHS = 307,
    YEARS = 308,
    SENDMAIL = 309,
    SERVER = 310,
    TARGET_IP = 311,
    TARGET_PORT = 312,
    TARGET_STRING = 313,
    TIMEOUT = 314,
    TYPE = 315,
    USERNAME = 316,
    USER = 317,
    VHOST = 318,
    NUMBER = 319,
    STRING = 320,
    PROTOCOLTYPE = 321
  };
#endif
/* Tokens.  */
#define AWAY 258
#define BAN_UNKNOWN 259
#define BLACKLIST 260
#define BYTES 261
#define KBYTES 262
#define MBYTES 263
#define CHANNEL 264
#define COMMAND_INTERVAL 265
#define COMMAND_QUEUE_SIZE 266
#define COMMAND_TIMEOUT 267
#define CONNREGEX 268
#define DNS_FDLIMIT 269
#define DNS_TIMEOUT 270
#define DNSBL_FROM 271
#define DNSBL_TO 272
#define EXEMPT 273
#define FD 274
#define INVITE 275
#define IRC 276
#define KLINE 277
#define KEY 278
#define MASK 279
#define MAX_READ 280
#define MODE 281
#define NAME 282
#define NEGCACHE 283
#define NEGCACHE_REBUILD 284
#define NICK 285
#define NICKSERV 286
#define NOTICE 287
#define OPER 288
#define OPM 289
#define OPTIONS 290
#define PASSWORD 291
#define PERFORM 292
#define PIDFILE 293
#define PORT 294
#define PROTOCOL 295
#define READTIMEOUT 296
#define REALNAME 297
#define RECONNECTINTERVAL 298
#define REPLY 299
#define SCANLOG 300
#define SCANNER 301
#define SECONDS 302
#define MINUTES 303
#define HOURS 304
#define DAYS 305
#define WEEKS 306
#define MONTHS 307
#define YEARS 308
#define SENDMAIL 309
#define SERVER 310
#define TARGET_IP 311
#define TARGET_PORT 312
#define TARGET_STRING 313
#define TIMEOUT 314
#define TYPE 315
#define USERNAME 316
#define USER 317
#define VHOST 318
#define NUMBER 319
#define STRING 320
#define PROTOCOLTYPE 321

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 89 "config-parser.y" /* yacc.c:1909  */

  int number;
  char *string;

#line 191 "config-parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

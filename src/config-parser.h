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
    ADDRESS_FAMILY = 258,
    AWAY = 259,
    BAN_UNKNOWN = 260,
    BLACKLIST = 261,
    BYTES = 262,
    KBYTES = 263,
    MBYTES = 264,
    CHANNEL = 265,
    COMMAND_INTERVAL = 266,
    COMMAND_QUEUE_SIZE = 267,
    COMMAND_TIMEOUT = 268,
    CONNREGEX = 269,
    DNS_FDLIMIT = 270,
    DNS_TIMEOUT = 271,
    DNSBL_FROM = 272,
    DNSBL_TO = 273,
    EXEMPT = 274,
    FD = 275,
    INVITE = 276,
    IRC = 277,
    KLINE = 278,
    KEY = 279,
    MASK = 280,
    MAX_READ = 281,
    MODE = 282,
    NAME = 283,
    NEGCACHE = 284,
    NEGCACHE_REBUILD = 285,
    NICK = 286,
    NICKSERV = 287,
    NOTICE = 288,
    OPER = 289,
    OPM = 290,
    OPTIONS = 291,
    PASSWORD = 292,
    PERFORM = 293,
    PIDFILE = 294,
    PORT = 295,
    PROTOCOL = 296,
    READTIMEOUT = 297,
    REALNAME = 298,
    RECONNECTINTERVAL = 299,
    REPLY = 300,
    SCANLOG = 301,
    SCANNER = 302,
    SECONDS = 303,
    MINUTES = 304,
    HOURS = 305,
    DAYS = 306,
    WEEKS = 307,
    MONTHS = 308,
    YEARS = 309,
    SENDMAIL = 310,
    SERVER = 311,
    TARGET_IP = 312,
    TARGET_PORT = 313,
    TARGET_STRING = 314,
    TIMEOUT = 315,
    TYPE = 316,
    USERNAME = 317,
    USER = 318,
    VHOST = 319,
    NUMBER = 320,
    STRING = 321,
    PROTOCOLTYPE = 322
  };
#endif
/* Tokens.  */
#define ADDRESS_FAMILY 258
#define AWAY 259
#define BAN_UNKNOWN 260
#define BLACKLIST 261
#define BYTES 262
#define KBYTES 263
#define MBYTES 264
#define CHANNEL 265
#define COMMAND_INTERVAL 266
#define COMMAND_QUEUE_SIZE 267
#define COMMAND_TIMEOUT 268
#define CONNREGEX 269
#define DNS_FDLIMIT 270
#define DNS_TIMEOUT 271
#define DNSBL_FROM 272
#define DNSBL_TO 273
#define EXEMPT 274
#define FD 275
#define INVITE 276
#define IRC 277
#define KLINE 278
#define KEY 279
#define MASK 280
#define MAX_READ 281
#define MODE 282
#define NAME 283
#define NEGCACHE 284
#define NEGCACHE_REBUILD 285
#define NICK 286
#define NICKSERV 287
#define NOTICE 288
#define OPER 289
#define OPM 290
#define OPTIONS 291
#define PASSWORD 292
#define PERFORM 293
#define PIDFILE 294
#define PORT 295
#define PROTOCOL 296
#define READTIMEOUT 297
#define REALNAME 298
#define RECONNECTINTERVAL 299
#define REPLY 300
#define SCANLOG 301
#define SCANNER 302
#define SECONDS 303
#define MINUTES 304
#define HOURS 305
#define DAYS 306
#define WEEKS 307
#define MONTHS 308
#define YEARS 309
#define SENDMAIL 310
#define SERVER 311
#define TARGET_IP 312
#define TARGET_PORT 313
#define TARGET_STRING 314
#define TIMEOUT 315
#define TYPE 316
#define USERNAME 317
#define USER 318
#define VHOST 319
#define NUMBER 320
#define STRING 321
#define PROTOCOLTYPE 322

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 91 "config-parser.y" /* yacc.c:1909  */

  int number;
  char *string;

#line 193 "config-parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

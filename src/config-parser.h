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
    CONNREGEX = 265,
    DNS_FDLIMIT = 266,
    DNSBL_FROM = 267,
    DNSBL_TO = 268,
    EXEMPT = 269,
    FD = 270,
    INVITE = 271,
    IRC = 272,
    KLINE = 273,
    KEY = 274,
    MASK = 275,
    MAX_READ = 276,
    MODE = 277,
    NAME = 278,
    NEGCACHE = 279,
    NEGCACHE_REBUILD = 280,
    NICK = 281,
    NICKSERV = 282,
    NOTICE = 283,
    OPER = 284,
    OPM = 285,
    OPTIONS = 286,
    PASSWORD = 287,
    PERFORM = 288,
    PIDFILE = 289,
    PORT = 290,
    PROTOCOL = 291,
    READTIMEOUT = 292,
    REALNAME = 293,
    RECONNECTINTERVAL = 294,
    REPLY = 295,
    SCANLOG = 296,
    SCANNER = 297,
    SECONDS = 298,
    MINUTES = 299,
    HOURS = 300,
    DAYS = 301,
    WEEKS = 302,
    MONTHS = 303,
    YEARS = 304,
    SENDMAIL = 305,
    SERVER = 306,
    TARGET_IP = 307,
    TARGET_PORT = 308,
    TARGET_STRING = 309,
    TIMEOUT = 310,
    TYPE = 311,
    USERNAME = 312,
    USER = 313,
    VHOST = 314,
    NUMBER = 315,
    STRING = 316,
    PROTOCOLTYPE = 317
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
#define CONNREGEX 265
#define DNS_FDLIMIT 266
#define DNSBL_FROM 267
#define DNSBL_TO 268
#define EXEMPT 269
#define FD 270
#define INVITE 271
#define IRC 272
#define KLINE 273
#define KEY 274
#define MASK 275
#define MAX_READ 276
#define MODE 277
#define NAME 278
#define NEGCACHE 279
#define NEGCACHE_REBUILD 280
#define NICK 281
#define NICKSERV 282
#define NOTICE 283
#define OPER 284
#define OPM 285
#define OPTIONS 286
#define PASSWORD 287
#define PERFORM 288
#define PIDFILE 289
#define PORT 290
#define PROTOCOL 291
#define READTIMEOUT 292
#define REALNAME 293
#define RECONNECTINTERVAL 294
#define REPLY 295
#define SCANLOG 296
#define SCANNER 297
#define SECONDS 298
#define MINUTES 299
#define HOURS 300
#define DAYS 301
#define WEEKS 302
#define MONTHS 303
#define YEARS 304
#define SENDMAIL 305
#define SERVER 306
#define TARGET_IP 307
#define TARGET_PORT 308
#define TARGET_STRING 309
#define TIMEOUT 310
#define TYPE 311
#define USERNAME 312
#define USER 313
#define VHOST 314
#define NUMBER 315
#define STRING 316
#define PROTOCOLTYPE 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 85 "config-parser.y" /* yacc.c:1909  */

  int number;
  char *string;

#line 183 "config-parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

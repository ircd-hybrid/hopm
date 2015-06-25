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
    DNS_TIMEOUT = 267,
    DNSBL_FROM = 268,
    DNSBL_TO = 269,
    EXEMPT = 270,
    FD = 271,
    INVITE = 272,
    IRC = 273,
    KLINE = 274,
    KEY = 275,
    MASK = 276,
    MAX_READ = 277,
    MODE = 278,
    NAME = 279,
    NEGCACHE = 280,
    NEGCACHE_REBUILD = 281,
    NICK = 282,
    NICKSERV = 283,
    NOTICE = 284,
    OPER = 285,
    OPM = 286,
    OPTIONS = 287,
    PASSWORD = 288,
    PERFORM = 289,
    PIDFILE = 290,
    PORT = 291,
    PROTOCOL = 292,
    READTIMEOUT = 293,
    REALNAME = 294,
    RECONNECTINTERVAL = 295,
    REPLY = 296,
    SCANLOG = 297,
    SCANNER = 298,
    SECONDS = 299,
    MINUTES = 300,
    HOURS = 301,
    DAYS = 302,
    WEEKS = 303,
    MONTHS = 304,
    YEARS = 305,
    SENDMAIL = 306,
    SERVER = 307,
    TARGET_IP = 308,
    TARGET_PORT = 309,
    TARGET_STRING = 310,
    TIMEOUT = 311,
    TYPE = 312,
    USERNAME = 313,
    USER = 314,
    VHOST = 315,
    NUMBER = 316,
    STRING = 317,
    PROTOCOLTYPE = 318
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
#define DNS_TIMEOUT 267
#define DNSBL_FROM 268
#define DNSBL_TO 269
#define EXEMPT 270
#define FD 271
#define INVITE 272
#define IRC 273
#define KLINE 274
#define KEY 275
#define MASK 276
#define MAX_READ 277
#define MODE 278
#define NAME 279
#define NEGCACHE 280
#define NEGCACHE_REBUILD 281
#define NICK 282
#define NICKSERV 283
#define NOTICE 284
#define OPER 285
#define OPM 286
#define OPTIONS 287
#define PASSWORD 288
#define PERFORM 289
#define PIDFILE 290
#define PORT 291
#define PROTOCOL 292
#define READTIMEOUT 293
#define REALNAME 294
#define RECONNECTINTERVAL 295
#define REPLY 296
#define SCANLOG 297
#define SCANNER 298
#define SECONDS 299
#define MINUTES 300
#define HOURS 301
#define DAYS 302
#define WEEKS 303
#define MONTHS 304
#define YEARS 305
#define SENDMAIL 306
#define SERVER 307
#define TARGET_IP 308
#define TARGET_PORT 309
#define TARGET_STRING 310
#define TIMEOUT 311
#define TYPE 312
#define USERNAME 313
#define USER 314
#define VHOST 315
#define NUMBER 316
#define STRING 317
#define PROTOCOLTYPE 318

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 86 "config-parser.y" /* yacc.c:1909  */

  int number;
  char *string;

#line 185 "config-parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

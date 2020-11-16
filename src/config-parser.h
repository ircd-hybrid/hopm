/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    BIND = 261,
    BLACKLIST = 262,
    BYTES = 263,
    KBYTES = 264,
    MBYTES = 265,
    CHANNEL = 266,
    COMMAND_INTERVAL = 267,
    COMMAND_QUEUE_SIZE = 268,
    COMMAND_TIMEOUT = 269,
    CONNREGEX = 270,
    DNS_FDLIMIT = 271,
    DNS_TIMEOUT = 272,
    DNSBL_FROM = 273,
    DNSBL_TO = 274,
    EXEMPT = 275,
    FD = 276,
    INVITE = 277,
    IPV4 = 278,
    IPV6 = 279,
    IRC = 280,
    KLINE = 281,
    KEY = 282,
    MASK = 283,
    MAX_READ = 284,
    MODE = 285,
    NAME = 286,
    NEGCACHE = 287,
    NEGCACHE_REBUILD = 288,
    NICK = 289,
    NICKSERV = 290,
    NOTICE = 291,
    OPER = 292,
    OPM = 293,
    OPTIONS = 294,
    PASSWORD = 295,
    PERFORM = 296,
    PIDFILE = 297,
    PORT = 298,
    PROTOCOL = 299,
    RSA_PRIVATE_KEY_FILE = 300,
    READTIMEOUT = 301,
    REALNAME = 302,
    RECONNECTINTERVAL = 303,
    REPLY = 304,
    SCANLOG = 305,
    SCANNER = 306,
    SECONDS = 307,
    MINUTES = 308,
    HOURS = 309,
    DAYS = 310,
    WEEKS = 311,
    MONTHS = 312,
    YEARS = 313,
    SENDMAIL = 314,
    SERVER = 315,
    TARGET_IP = 316,
    TARGET_PORT = 317,
    TARGET_STRING = 318,
    TIMEOUT = 319,
    TLS = 320,
    TLS_CERTIFICATE_FILE = 321,
    TLS_HOSTNAME_VERIFICATION = 322,
    TYPE = 323,
    USERNAME = 324,
    USER = 325,
    NUMBER = 326,
    STRING = 327,
    PROTOCOLTYPE = 328
  };
#endif
/* Tokens.  */
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
#define TYPE 323
#define USERNAME 324
#define USER 325
#define NUMBER 326
#define STRING 327
#define PROTOCOLTYPE 328

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 95 "config-parser.y"

  int number;
  char *string;

#line 208 "config-parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

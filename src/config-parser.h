/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
    OPER = 283,
    OPM = 284,
    OPTIONS = 285,
    PASSWORD = 286,
    PERFORM = 287,
    PIDFILE = 288,
    PORT = 289,
    PROTOCOL = 290,
    READTIMEOUT = 291,
    REALNAME = 292,
    REPLY = 293,
    SCANLOG = 294,
    SCANNER = 295,
    SECONDS = 296,
    MINUTES = 297,
    HOURS = 298,
    DAYS = 299,
    WEEKS = 300,
    MONTHS = 301,
    YEARS = 302,
    SENDMAIL = 303,
    SERVER = 304,
    TARGET_IP = 305,
    TARGET_PORT = 306,
    TARGET_STRING = 307,
    TIMEOUT = 308,
    TYPE = 309,
    USERNAME = 310,
    USER = 311,
    VHOST = 312,
    NUMBER = 313,
    STRING = 314,
    PROTOCOLTYPE = 315
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
#define OPER 283
#define OPM 284
#define OPTIONS 285
#define PASSWORD 286
#define PERFORM 287
#define PIDFILE 288
#define PORT 289
#define PROTOCOL 290
#define READTIMEOUT 291
#define REALNAME 292
#define REPLY 293
#define SCANLOG 294
#define SCANNER 295
#define SECONDS 296
#define MINUTES 297
#define HOURS 298
#define DAYS 299
#define WEEKS 300
#define MONTHS 301
#define YEARS 302
#define SENDMAIL 303
#define SERVER 304
#define TARGET_IP 305
#define TARGET_PORT 306
#define TARGET_STRING 307
#define TIMEOUT 308
#define TYPE 309
#define USERNAME 310
#define USER 311
#define VHOST 312
#define NUMBER 313
#define STRING 314
#define PROTOCOLTYPE 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 88 "config-parser.y" /* yacc.c:1909  */

        int number;
        char *string;

#line 179 "config-parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

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
    NICK = 280,
    NICKSERV = 281,
    OPER = 282,
    OPM = 283,
    OPTIONS = 284,
    PASSWORD = 285,
    PERFORM = 286,
    PIDFILE = 287,
    PORT = 288,
    PROTOCOL = 289,
    REALNAME = 290,
    REPLY = 291,
    SCANLOG = 292,
    SCANNER = 293,
    SECONDS = 294,
    MINUTES = 295,
    HOURS = 296,
    DAYS = 297,
    WEEKS = 298,
    MONTHS = 299,
    YEARS = 300,
    SENDMAIL = 301,
    SERVER = 302,
    TARGET_IP = 303,
    TARGET_PORT = 304,
    TARGET_STRING = 305,
    TIMEOUT = 306,
    TYPE = 307,
    USERNAME = 308,
    USER = 309,
    VHOST = 310,
    NUMBER = 311,
    STRING = 312,
    PROTOCOLTYPE = 313
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
#define NICK 280
#define NICKSERV 281
#define OPER 282
#define OPM 283
#define OPTIONS 284
#define PASSWORD 285
#define PERFORM 286
#define PIDFILE 287
#define PORT 288
#define PROTOCOL 289
#define REALNAME 290
#define REPLY 291
#define SCANLOG 292
#define SCANNER 293
#define SECONDS 294
#define MINUTES 295
#define HOURS 296
#define DAYS 297
#define WEEKS 298
#define MONTHS 299
#define YEARS 300
#define SENDMAIL 301
#define SERVER 302
#define TARGET_IP 303
#define TARGET_PORT 304
#define TARGET_STRING 305
#define TIMEOUT 306
#define TYPE 307
#define USERNAME 308
#define USER 309
#define VHOST 310
#define NUMBER 311
#define STRING 312
#define PROTOCOLTYPE 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 85 "config-parser.y" /* yacc.c:1909  */

        int number;
        char *string;

#line 175 "config-parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

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
    CHANNEL = 261,
    CONNREGEX = 262,
    DNS_FDLIMIT = 263,
    DNSBL_FROM = 264,
    DNSBL_TO = 265,
    EXEMPT = 266,
    FD = 267,
    INVITE = 268,
    IRC = 269,
    KLINE = 270,
    KEY = 271,
    MASK = 272,
    MAX_READ = 273,
    MODE = 274,
    NAME = 275,
    NEGCACHE = 276,
    NICK = 277,
    NICKSERV = 278,
    OPER = 279,
    OPM = 280,
    OPTIONS = 281,
    PASSWORD = 282,
    PERFORM = 283,
    PIDFILE = 284,
    PORT = 285,
    PROTOCOL = 286,
    REALNAME = 287,
    REPLY = 288,
    SCANLOG = 289,
    SCANNER = 290,
    SENDMAIL = 291,
    SERVER = 292,
    TARGET_IP = 293,
    TARGET_PORT = 294,
    TARGET_STRING = 295,
    TIMEOUT = 296,
    TYPE = 297,
    USERNAME = 298,
    USER = 299,
    VHOST = 300,
    NUMBER = 301,
    STRING = 302,
    PROTOCOLTYPE = 303
  };
#endif
/* Tokens.  */
#define AWAY 258
#define BAN_UNKNOWN 259
#define BLACKLIST 260
#define CHANNEL 261
#define CONNREGEX 262
#define DNS_FDLIMIT 263
#define DNSBL_FROM 264
#define DNSBL_TO 265
#define EXEMPT 266
#define FD 267
#define INVITE 268
#define IRC 269
#define KLINE 270
#define KEY 271
#define MASK 272
#define MAX_READ 273
#define MODE 274
#define NAME 275
#define NEGCACHE 276
#define NICK 277
#define NICKSERV 278
#define OPER 279
#define OPM 280
#define OPTIONS 281
#define PASSWORD 282
#define PERFORM 283
#define PIDFILE 284
#define PORT 285
#define PROTOCOL 286
#define REALNAME 287
#define REPLY 288
#define SCANLOG 289
#define SCANNER 290
#define SENDMAIL 291
#define SERVER 292
#define TARGET_IP 293
#define TARGET_PORT 294
#define TARGET_STRING 295
#define TIMEOUT 296
#define TYPE 297
#define USERNAME 298
#define USER 299
#define VHOST 300
#define NUMBER 301
#define STRING 302
#define PROTOCOLTYPE 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 81 "config-parser.y" /* yacc.c:1909  */

        int number;
        char *string;

#line 155 "config-parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     PROTOCOLTYPE = 287,
     REALNAME = 288,
     REPLY = 289,
     SCANLOG = 290,
     SCANNER = 291,
     SENDMAIL = 292,
     SERVER = 293,
     TARGET_IP = 294,
     TARGET_PORT = 295,
     TARGET_STRING = 296,
     TIMEOUT = 297,
     TYPE = 298,
     USERNAME = 299,
     USER = 300,
     VHOST = 301,
     NUMBER = 302,
     STRING = 303
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
#define PROTOCOLTYPE 287
#define REALNAME 288
#define REPLY 289
#define SCANLOG 290
#define SCANNER 291
#define SENDMAIL 292
#define SERVER 293
#define TARGET_IP 294
#define TARGET_PORT 295
#define TARGET_STRING 296
#define TIMEOUT 297
#define TYPE 298
#define USERNAME 299
#define USER 300
#define VHOST 301
#define NUMBER 302
#define STRING 303




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 82 "config-parser.y"
{
        int number;
        char *string;
}
/* Line 1529 of yacc.c.  */
#line 150 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;


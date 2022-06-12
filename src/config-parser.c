/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 21 "config-parser.y"

#include <string.h>

#include "memory.h"
#include "config.h"

int yylex(void);

static void *tmp;  /* Variable to temporarily hold nodes before insertion to list */


#line 83 "config-parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 289 "config-parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ADDRESS_FAMILY = 3,             /* ADDRESS_FAMILY  */
  YYSYMBOL_AWAY = 4,                       /* AWAY  */
  YYSYMBOL_BAN_UNKNOWN = 5,                /* BAN_UNKNOWN  */
  YYSYMBOL_BIND = 6,                       /* BIND  */
  YYSYMBOL_BLACKLIST = 7,                  /* BLACKLIST  */
  YYSYMBOL_BYTES = 8,                      /* BYTES  */
  YYSYMBOL_KBYTES = 9,                     /* KBYTES  */
  YYSYMBOL_MBYTES = 10,                    /* MBYTES  */
  YYSYMBOL_CHANNEL = 11,                   /* CHANNEL  */
  YYSYMBOL_COMMAND_INTERVAL = 12,          /* COMMAND_INTERVAL  */
  YYSYMBOL_COMMAND_QUEUE_SIZE = 13,        /* COMMAND_QUEUE_SIZE  */
  YYSYMBOL_COMMAND_TIMEOUT = 14,           /* COMMAND_TIMEOUT  */
  YYSYMBOL_CONNREGEX = 15,                 /* CONNREGEX  */
  YYSYMBOL_DNS_FDLIMIT = 16,               /* DNS_FDLIMIT  */
  YYSYMBOL_DNS_TIMEOUT = 17,               /* DNS_TIMEOUT  */
  YYSYMBOL_DNSBL_FROM = 18,                /* DNSBL_FROM  */
  YYSYMBOL_DNSBL_TO = 19,                  /* DNSBL_TO  */
  YYSYMBOL_EXEMPT = 20,                    /* EXEMPT  */
  YYSYMBOL_FD = 21,                        /* FD  */
  YYSYMBOL_INVITE = 22,                    /* INVITE  */
  YYSYMBOL_IPV4 = 23,                      /* IPV4  */
  YYSYMBOL_IPV6 = 24,                      /* IPV6  */
  YYSYMBOL_IRC = 25,                       /* IRC  */
  YYSYMBOL_KLINE = 26,                     /* KLINE  */
  YYSYMBOL_KEY = 27,                       /* KEY  */
  YYSYMBOL_MASK = 28,                      /* MASK  */
  YYSYMBOL_MAX_READ = 29,                  /* MAX_READ  */
  YYSYMBOL_MODE = 30,                      /* MODE  */
  YYSYMBOL_NAME = 31,                      /* NAME  */
  YYSYMBOL_NEGCACHE = 32,                  /* NEGCACHE  */
  YYSYMBOL_NEGCACHE_REBUILD = 33,          /* NEGCACHE_REBUILD  */
  YYSYMBOL_NICK = 34,                      /* NICK  */
  YYSYMBOL_NICKSERV = 35,                  /* NICKSERV  */
  YYSYMBOL_NOTICE = 36,                    /* NOTICE  */
  YYSYMBOL_OPER = 37,                      /* OPER  */
  YYSYMBOL_OPM = 38,                       /* OPM  */
  YYSYMBOL_OPTIONS = 39,                   /* OPTIONS  */
  YYSYMBOL_PASSWORD = 40,                  /* PASSWORD  */
  YYSYMBOL_PERFORM = 41,                   /* PERFORM  */
  YYSYMBOL_PIDFILE = 42,                   /* PIDFILE  */
  YYSYMBOL_PORT = 43,                      /* PORT  */
  YYSYMBOL_PROTOCOL = 44,                  /* PROTOCOL  */
  YYSYMBOL_RSA_PRIVATE_KEY_FILE = 45,      /* RSA_PRIVATE_KEY_FILE  */
  YYSYMBOL_READTIMEOUT = 46,               /* READTIMEOUT  */
  YYSYMBOL_REALNAME = 47,                  /* REALNAME  */
  YYSYMBOL_RECONNECTINTERVAL = 48,         /* RECONNECTINTERVAL  */
  YYSYMBOL_REPLY = 49,                     /* REPLY  */
  YYSYMBOL_SCANLOG = 50,                   /* SCANLOG  */
  YYSYMBOL_SCANNER = 51,                   /* SCANNER  */
  YYSYMBOL_SECONDS = 52,                   /* SECONDS  */
  YYSYMBOL_MINUTES = 53,                   /* MINUTES  */
  YYSYMBOL_HOURS = 54,                     /* HOURS  */
  YYSYMBOL_DAYS = 55,                      /* DAYS  */
  YYSYMBOL_WEEKS = 56,                     /* WEEKS  */
  YYSYMBOL_MONTHS = 57,                    /* MONTHS  */
  YYSYMBOL_YEARS = 58,                     /* YEARS  */
  YYSYMBOL_SENDMAIL = 59,                  /* SENDMAIL  */
  YYSYMBOL_SERVER = 60,                    /* SERVER  */
  YYSYMBOL_TARGET_IP = 61,                 /* TARGET_IP  */
  YYSYMBOL_TARGET_PORT = 62,               /* TARGET_PORT  */
  YYSYMBOL_TARGET_STRING = 63,             /* TARGET_STRING  */
  YYSYMBOL_TIMEOUT = 64,                   /* TIMEOUT  */
  YYSYMBOL_TLS = 65,                       /* TLS  */
  YYSYMBOL_TLS_CERTIFICATE_FILE = 66,      /* TLS_CERTIFICATE_FILE  */
  YYSYMBOL_TLS_HOSTNAME_VERIFICATION = 67, /* TLS_HOSTNAME_VERIFICATION  */
  YYSYMBOL_TLS_DISABLE_CERTIFICATE_VERIFICATION = 68, /* TLS_DISABLE_CERTIFICATE_VERIFICATION  */
  YYSYMBOL_TYPE = 69,                      /* TYPE  */
  YYSYMBOL_USERNAME = 70,                  /* USERNAME  */
  YYSYMBOL_USER = 71,                      /* USER  */
  YYSYMBOL_NUMBER = 72,                    /* NUMBER  */
  YYSYMBOL_STRING = 73,                    /* STRING  */
  YYSYMBOL_PROTOCOLTYPE = 74,              /* PROTOCOLTYPE  */
  YYSYMBOL_75_ = 75,                       /* '{'  */
  YYSYMBOL_76_ = 76,                       /* '}'  */
  YYSYMBOL_77_ = 77,                       /* ';'  */
  YYSYMBOL_78_ = 78,                       /* '='  */
  YYSYMBOL_79_ = 79,                       /* ':'  */
  YYSYMBOL_80_ = 80,                       /* ','  */
  YYSYMBOL_YYACCEPT = 81,                  /* $accept  */
  YYSYMBOL_config = 82,                    /* config  */
  YYSYMBOL_config_items = 83,              /* config_items  */
  YYSYMBOL_timespec_ = 84,                 /* timespec_  */
  YYSYMBOL_timespec = 85,                  /* timespec  */
  YYSYMBOL_sizespec_ = 86,                 /* sizespec_  */
  YYSYMBOL_sizespec = 87,                  /* sizespec  */
  YYSYMBOL_options_entry = 88,             /* options_entry  */
  YYSYMBOL_options_items = 89,             /* options_items  */
  YYSYMBOL_options_item = 90,              /* options_item  */
  YYSYMBOL_options_negcache = 91,          /* options_negcache  */
  YYSYMBOL_options_negcache_rebuild = 92,  /* options_negcache_rebuild  */
  YYSYMBOL_options_pidfile = 93,           /* options_pidfile  */
  YYSYMBOL_options_dns_fdlimit = 94,       /* options_dns_fdlimit  */
  YYSYMBOL_options_dns_timeout = 95,       /* options_dns_timeout  */
  YYSYMBOL_options_scanlog = 96,           /* options_scanlog  */
  YYSYMBOL_options_command_queue_size = 97, /* options_command_queue_size  */
  YYSYMBOL_options_command_interval = 98,  /* options_command_interval  */
  YYSYMBOL_options_command_timeout = 99,   /* options_command_timeout  */
  YYSYMBOL_irc_entry = 100,                /* irc_entry  */
  YYSYMBOL_irc_items = 101,                /* irc_items  */
  YYSYMBOL_irc_item = 102,                 /* irc_item  */
  YYSYMBOL_irc_away = 103,                 /* irc_away  */
  YYSYMBOL_irc_kline = 104,                /* irc_kline  */
  YYSYMBOL_irc_mode = 105,                 /* irc_mode  */
  YYSYMBOL_irc_nick = 106,                 /* irc_nick  */
  YYSYMBOL_irc_nickserv = 107,             /* irc_nickserv  */
  YYSYMBOL_irc_oper = 108,                 /* irc_oper  */
  YYSYMBOL_irc_password = 109,             /* irc_password  */
  YYSYMBOL_irc_perform = 110,              /* irc_perform  */
  YYSYMBOL_irc_notice = 111,               /* irc_notice  */
  YYSYMBOL_irc_port = 112,                 /* irc_port  */
  YYSYMBOL_irc_tls = 113,                  /* irc_tls  */
  YYSYMBOL_irc_rsa_private_key_file = 114, /* irc_rsa_private_key_file  */
  YYSYMBOL_irc_tls_certificate_file = 115, /* irc_tls_certificate_file  */
  YYSYMBOL_irc_tls_hostname_verification = 116, /* irc_tls_hostname_verification  */
  YYSYMBOL_irc_tls_disable_certificate_verification = 117, /* irc_tls_disable_certificate_verification  */
  YYSYMBOL_irc_readtimeout = 118,          /* irc_readtimeout  */
  YYSYMBOL_irc_reconnectinterval = 119,    /* irc_reconnectinterval  */
  YYSYMBOL_irc_realname = 120,             /* irc_realname  */
  YYSYMBOL_irc_server = 121,               /* irc_server  */
  YYSYMBOL_irc_username = 122,             /* irc_username  */
  YYSYMBOL_irc_bind = 123,                 /* irc_bind  */
  YYSYMBOL_irc_connregex = 124,            /* irc_connregex  */
  YYSYMBOL_channel_entry = 125,            /* channel_entry  */
  YYSYMBOL_126_1 = 126,                    /* $@1  */
  YYSYMBOL_channel_items = 127,            /* channel_items  */
  YYSYMBOL_channel_item = 128,             /* channel_item  */
  YYSYMBOL_channel_name = 129,             /* channel_name  */
  YYSYMBOL_channel_key = 130,              /* channel_key  */
  YYSYMBOL_channel_invite = 131,           /* channel_invite  */
  YYSYMBOL_user_entry = 132,               /* user_entry  */
  YYSYMBOL_133_2 = 133,                    /* $@2  */
  YYSYMBOL_user_items = 134,               /* user_items  */
  YYSYMBOL_user_item = 135,                /* user_item  */
  YYSYMBOL_user_mask = 136,                /* user_mask  */
  YYSYMBOL_user_scanner = 137,             /* user_scanner  */
  YYSYMBOL_scanner_entry = 138,            /* scanner_entry  */
  YYSYMBOL_139_3 = 139,                    /* $@3  */
  YYSYMBOL_scanner_items = 140,            /* scanner_items  */
  YYSYMBOL_scanner_item = 141,             /* scanner_item  */
  YYSYMBOL_scanner_name = 142,             /* scanner_name  */
  YYSYMBOL_scanner_bind = 143,             /* scanner_bind  */
  YYSYMBOL_scanner_target_ip = 144,        /* scanner_target_ip  */
  YYSYMBOL_scanner_target_string = 145,    /* scanner_target_string  */
  YYSYMBOL_scanner_fd = 146,               /* scanner_fd  */
  YYSYMBOL_scanner_target_port = 147,      /* scanner_target_port  */
  YYSYMBOL_scanner_timeout = 148,          /* scanner_timeout  */
  YYSYMBOL_scanner_max_read = 149,         /* scanner_max_read  */
  YYSYMBOL_scanner_protocol = 150,         /* scanner_protocol  */
  YYSYMBOL_opm_entry = 151,                /* opm_entry  */
  YYSYMBOL_opm_items = 152,                /* opm_items  */
  YYSYMBOL_opm_item = 153,                 /* opm_item  */
  YYSYMBOL_opm_dnsbl_from = 154,           /* opm_dnsbl_from  */
  YYSYMBOL_opm_dnsbl_to = 155,             /* opm_dnsbl_to  */
  YYSYMBOL_opm_sendmail = 156,             /* opm_sendmail  */
  YYSYMBOL_opm_blacklist_entry = 157,      /* opm_blacklist_entry  */
  YYSYMBOL_158_4 = 158,                    /* $@4  */
  YYSYMBOL_blacklist_items = 159,          /* blacklist_items  */
  YYSYMBOL_blacklist_item = 160,           /* blacklist_item  */
  YYSYMBOL_blacklist_name = 161,           /* blacklist_name  */
  YYSYMBOL_blacklist_address_family = 162, /* blacklist_address_family  */
  YYSYMBOL_163_5 = 163,                    /* $@5  */
  YYSYMBOL_blacklist_address_family_items = 164, /* blacklist_address_family_items  */
  YYSYMBOL_blacklist_address_family_item = 165, /* blacklist_address_family_item  */
  YYSYMBOL_blacklist_kline = 166,          /* blacklist_kline  */
  YYSYMBOL_blacklist_type = 167,           /* blacklist_type  */
  YYSYMBOL_blacklist_ban_unknown = 168,    /* blacklist_ban_unknown  */
  YYSYMBOL_blacklist_reply = 169,          /* blacklist_reply  */
  YYSYMBOL_blacklist_reply_items = 170,    /* blacklist_reply_items  */
  YYSYMBOL_blacklist_reply_item = 171,     /* blacklist_reply_item  */
  YYSYMBOL_exempt_entry = 172,             /* exempt_entry  */
  YYSYMBOL_exempt_items = 173,             /* exempt_items  */
  YYSYMBOL_exempt_item = 174,              /* exempt_item  */
  YYSYMBOL_exempt_mask = 175               /* exempt_mask  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   374

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  395

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   329


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    79,    77,
       2,    78,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,     2,    76,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   111,   111,   112,   115,   116,   117,   118,   119,   120,
     122,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     133,   133,   134,   135,   136,   137,   142,   144,   145,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   158,
     163,   168,   174,   179,   184,   190,   195,   200,   207,   209,
     210,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   237,   243,   249,   255,   261,
     267,   273,   279,   284,   289,   294,   299,   306,   312,   317,
     322,   327,   332,   338,   344,   350,   356,   365,   365,   378,
     379,   381,   382,   383,   385,   393,   401,   412,   412,   422,
     423,   425,   426,   427,   429,   436,   446,   446,   481,   482,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     495,   503,   511,   519,   532,   539,   546,   553,   560,   576,
     578,   579,   581,   582,   583,   584,   585,   587,   593,   599,
     608,   608,   624,   625,   627,   628,   629,   630,   631,   632,
     633,   635,   644,   643,   651,   651,   652,   657,   664,   672,
     684,   691,   693,   694,   696,   710,   712,   713,   715,   716,
     718
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ADDRESS_FAMILY",
  "AWAY", "BAN_UNKNOWN", "BIND", "BLACKLIST", "BYTES", "KBYTES", "MBYTES",
  "CHANNEL", "COMMAND_INTERVAL", "COMMAND_QUEUE_SIZE", "COMMAND_TIMEOUT",
  "CONNREGEX", "DNS_FDLIMIT", "DNS_TIMEOUT", "DNSBL_FROM", "DNSBL_TO",
  "EXEMPT", "FD", "INVITE", "IPV4", "IPV6", "IRC", "KLINE", "KEY", "MASK",
  "MAX_READ", "MODE", "NAME", "NEGCACHE", "NEGCACHE_REBUILD", "NICK",
  "NICKSERV", "NOTICE", "OPER", "OPM", "OPTIONS", "PASSWORD", "PERFORM",
  "PIDFILE", "PORT", "PROTOCOL", "RSA_PRIVATE_KEY_FILE", "READTIMEOUT",
  "REALNAME", "RECONNECTINTERVAL", "REPLY", "SCANLOG", "SCANNER",
  "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS", "MONTHS", "YEARS",
  "SENDMAIL", "SERVER", "TARGET_IP", "TARGET_PORT", "TARGET_STRING",
  "TIMEOUT", "TLS", "TLS_CERTIFICATE_FILE", "TLS_HOSTNAME_VERIFICATION",
  "TLS_DISABLE_CERTIFICATE_VERIFICATION", "TYPE", "USERNAME", "USER",
  "NUMBER", "STRING", "PROTOCOLTYPE", "'{'", "'}'", "';'", "'='", "':'",
  "','", "$accept", "config", "config_items", "timespec_", "timespec",
  "sizespec_", "sizespec", "options_entry", "options_items",
  "options_item", "options_negcache", "options_negcache_rebuild",
  "options_pidfile", "options_dns_fdlimit", "options_dns_timeout",
  "options_scanlog", "options_command_queue_size",
  "options_command_interval", "options_command_timeout", "irc_entry",
  "irc_items", "irc_item", "irc_away", "irc_kline", "irc_mode", "irc_nick",
  "irc_nickserv", "irc_oper", "irc_password", "irc_perform", "irc_notice",
  "irc_port", "irc_tls", "irc_rsa_private_key_file",
  "irc_tls_certificate_file", "irc_tls_hostname_verification",
  "irc_tls_disable_certificate_verification", "irc_readtimeout",
  "irc_reconnectinterval", "irc_realname", "irc_server", "irc_username",
  "irc_bind", "irc_connregex", "channel_entry", "$@1", "channel_items",
  "channel_item", "channel_name", "channel_key", "channel_invite",
  "user_entry", "$@2", "user_items", "user_item", "user_mask",
  "user_scanner", "scanner_entry", "$@3", "scanner_items", "scanner_item",
  "scanner_name", "scanner_bind", "scanner_target_ip",
  "scanner_target_string", "scanner_fd", "scanner_target_port",
  "scanner_timeout", "scanner_max_read", "scanner_protocol", "opm_entry",
  "opm_items", "opm_item", "opm_dnsbl_from", "opm_dnsbl_to",
  "opm_sendmail", "opm_blacklist_entry", "$@4", "blacklist_items",
  "blacklist_item", "blacklist_name", "blacklist_address_family", "$@5",
  "blacklist_address_family_items", "blacklist_address_family_item",
  "blacklist_kline", "blacklist_type", "blacklist_ban_unknown",
  "blacklist_reply", "blacklist_reply_items", "blacklist_reply_item",
  "exempt_entry", "exempt_items", "exempt_item", "exempt_mask", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-243)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-151)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -243,   151,  -243,   -67,   -65,   -54,   -48,  -243,  -243,  -243,
    -243,   -57,  -243,   -22,  -243,  -243,    11,   112,   125,   180,
     -44,   -19,  -243,    -9,    16,  -243,  -243,  -243,     4,     6,
       8,    10,    23,    46,    51,    52,    55,    59,    61,    62,
      63,    78,    85,    86,    89,    90,   107,   108,   109,   113,
       0,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,  -243,  -243,  -243,    69,  -243,   117,   120,   121,
      31,  -243,  -243,  -243,  -243,  -243,   102,  -243,   122,   123,
     126,   131,   132,   133,   136,   138,   140,    41,  -243,  -243,
    -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,    84,   144,
      96,   106,  -243,   130,   146,   147,   148,   158,   159,   160,
     161,   162,   163,   164,    56,   165,   145,   166,   145,   167,
     169,   172,   170,   174,   175,   173,  -243,    87,   176,   178,
     179,   177,  -243,   181,   145,   183,   145,   185,   145,   145,
     145,   186,   187,   184,  -243,  -243,   188,   189,    24,  -243,
    -243,  -243,  -243,   190,   191,   192,   193,   194,   195,   196,
     197,   198,    58,  -243,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,  -243,   200,  -243,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   171,   214,
     215,   216,   217,   218,   219,   220,   221,   222,  -243,    50,
     223,   224,   225,  -243,   105,   226,   227,   228,   229,   230,
     231,   232,   233,   234,  -243,   239,   240,   237,  -243,   242,
     244,   245,   246,   247,   249,   248,   250,   145,   241,  -243,
    -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,  -243,  -243,   145,   145,   145,   145,   145,   145,
     145,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,   251,   252,   253,   139,  -243,  -243,  -243,  -243,
    -243,  -243,  -243,  -243,  -243,   254,   255,   256,   260,   258,
       2,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,  -243,  -243,  -243,  -243,  -243,   261,   262,  -243,
     263,   264,    53,   265,   266,   168,   267,   268,   269,   270,
    -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,   275,   276,
     277,   274,  -243,   259,   280,   281,   282,   284,   285,   283,
    -243,  -243,  -243,  -243,  -243,   245,   245,   245,  -243,  -243,
    -243,  -243,   287,  -243,  -243,  -243,  -243,   286,   288,   289,
    -243,    91,   290,   291,   292,   279,   -63,  -243,   293,  -243,
    -243,  -243,  -243,   294,  -243,  -243,  -243,  -243,  -243,   -61,
    -243,  -243,  -243,  -243,   299,   296,  -243,  -243,  -243,  -243,
      91,   297,  -243,  -243,  -243
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   107,     1,     0,     0,     0,     0,     3,     5,     4,
       7,     0,     8,     0,     6,     9,     0,     0,     0,     0,
       0,     0,   179,     0,     0,   177,   178,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    51,    53,    56,    54,    55,    57,    58,    71,
      72,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    52,    73,     0,   146,     0,     0,     0,
       0,   141,   142,   143,   144,   145,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,   176,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,     0,
       0,     0,   140,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,   113,     0,     0,     0,   110,
     111,   112,   129,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,   121,   123,   125,   122,   124,
     127,   128,   126,     0,   175,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,     0,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     180,    75,    95,    96,    76,    77,    78,    79,    83,    80,
      81,    82,    84,    86,    10,    10,    10,    10,    10,    10,
      10,    12,    11,    90,    92,    91,    93,    85,    87,    88,
      89,    94,     0,     0,     0,     0,   100,   101,   102,   103,
     147,   148,   149,   160,   162,     0,     0,     0,     0,     0,
       0,   153,   154,   155,   157,   156,   158,   159,    46,    45,
      47,    42,    43,    39,    40,    41,    44,     0,     0,   108,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
     117,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
     152,   114,   115,   131,   134,    20,    20,    20,    22,    21,
     137,   130,     0,   132,   135,   133,   136,     0,     0,     0,
      98,     0,     0,     0,     0,     0,     0,   173,     0,   151,
      23,    24,    25,     0,   106,   105,   104,   166,   167,     0,
     165,   170,   168,   161,     0,     0,   172,   169,   138,   163,
       0,     0,   171,   164,   174
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -243,  -243,  -243,  -161,  -126,  -242,    13,  -243,  -243,   156,
    -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,   278,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,  -243,  -243,  -243,  -243,  -243,   -17,  -243,  -243,
    -243,  -243,  -243,  -243,   104,  -243,  -243,  -243,  -243,  -243,
      92,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,   273,  -243,  -243,  -243,  -243,  -243,  -243,   -27,
    -243,  -243,  -243,  -243,  -125,  -243,  -243,  -243,  -243,  -243,
     -42,  -243,  -243,   301,  -243
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     7,   261,   262,   348,   349,     8,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,     9,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,   275,   276,   277,   278,
     279,    10,    11,   158,   159,   160,   161,    12,    13,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      14,    80,    81,    82,    83,    84,    85,    86,   290,   291,
     292,   293,   333,   379,   380,   294,   295,   296,   297,   366,
     367,    15,    24,    25,    26
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     199,    27,   201,   283,    28,   284,    29,   285,    16,   365,
      17,   -97,    22,   385,    20,    30,   389,    22,   215,   390,
     217,    18,   219,   220,   221,   155,    31,    19,   286,    21,
      32,   108,    76,   287,    33,    34,    35,    36,  -150,    23,
      37,    38,    87,    39,    23,    40,    41,    42,    43,    77,
      78,   288,   156,    88,    89,    90,   109,    91,    92,   162,
      44,   345,   346,   347,   163,    45,    46,    47,    48,   110,
      49,   289,   272,    93,    94,   157,   135,   273,   339,   164,
     137,   274,   113,    95,   114,   155,   115,   165,   116,   166,
      79,    96,   111,   321,   322,   323,   324,   325,   326,   327,
     227,   117,   167,   370,   371,   372,   283,   141,   284,   143,
     285,   319,   156,    27,   377,   378,    28,   153,    29,   168,
     169,   170,   171,   -97,   118,   312,    76,    30,   196,   119,
     120,   286,  -150,   121,   238,   157,   287,   122,    31,   123,
     124,   125,    32,    77,    78,   162,    33,    34,    35,    36,
     163,     2,    37,    38,   288,    39,   126,    40,    41,    42,
      43,   272,   209,   127,   128,   164,   273,   129,   130,   183,
     274,     3,    44,   165,   289,   166,     4,    45,    46,    47,
      48,    87,    49,   184,    79,   131,   132,   133,   167,     5,
       6,   134,    88,    89,    90,   138,    91,    92,   139,   140,
     144,   145,  -116,   185,   146,   168,   169,   170,   171,   147,
     148,   149,    93,    94,   150,   331,   151,   198,   152,   186,
     187,   188,    95,   254,   255,   256,   257,   258,   259,   260,
      96,   189,   190,   191,   192,   193,   194,   195,   197,   200,
     202,   203,   205,   198,   313,   204,   206,   352,   207,   210,
     208,   211,   212,   154,   213,   216,   214,   218,   332,   222,
     223,   224,   228,   340,   239,   393,   225,   226,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     280,   281,   282,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   320,   314,
     317,   315,   316,   318,   386,   112,     0,     0,   136,   328,
     329,   330,   334,   335,   336,   337,   338,   361,   341,   342,
     343,   344,   350,   351,   353,   354,   355,   356,   357,   358,
     359,   360,   362,   142,   363,   364,   365,   384,   368,   373,
     369,     0,     0,   374,     0,   375,   376,   381,   382,   383,
     387,   388,   391,   392,   394
};

static const yytype_int16 yycheck[] =
{
     126,     1,   128,     1,     4,     3,     6,     5,    75,    72,
      75,    11,     1,    76,    71,    15,    77,     1,   144,    80,
     146,    75,   148,   149,   150,     1,    26,    75,    26,    51,
      30,    75,     1,    31,    34,    35,    36,    37,     7,    28,
      40,    41,     1,    43,    28,    45,    46,    47,    48,    18,
      19,    49,    28,    12,    13,    14,    75,    16,    17,     1,
      60,     8,     9,    10,     6,    65,    66,    67,    68,    78,
      70,    69,    22,    32,    33,    51,    76,    27,    76,    21,
      11,    31,    78,    42,    78,     1,    78,    29,    78,    31,
      59,    50,    76,   254,   255,   256,   257,   258,   259,   260,
      76,    78,    44,   345,   346,   347,     1,    76,     3,     7,
       5,   237,    28,     1,    23,    24,     4,    76,     6,    61,
      62,    63,    64,    11,    78,    72,     1,    15,    72,    78,
      78,    26,     7,    78,    76,    51,    31,    78,    26,    78,
      78,    78,    30,    18,    19,     1,    34,    35,    36,    37,
       6,     0,    40,    41,    49,    43,    78,    45,    46,    47,
      48,    22,    75,    78,    78,    21,    27,    78,    78,    73,
      31,    20,    60,    29,    69,    31,    25,    65,    66,    67,
      68,     1,    70,    77,    59,    78,    78,    78,    44,    38,
      39,    78,    12,    13,    14,    78,    16,    17,    78,    78,
      78,    78,    51,    73,    78,    61,    62,    63,    64,    78,
      78,    78,    32,    33,    78,    76,    78,    72,    78,    73,
      73,    73,    42,    52,    53,    54,    55,    56,    57,    58,
      50,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    72,    72,    72,   231,    73,    72,    79,    73,    73,
      77,    73,    73,    97,    77,    72,    75,    72,   275,    73,
      73,    77,   158,   290,   172,   390,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    73,    73,    77,    73,    72,    72,    77,    73,
      72,    74,    73,    73,   366,    24,    -1,    -1,    50,    78,
      78,    78,    78,    78,    78,    75,    78,    78,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    73,    73,
      73,    77,    72,    80,    73,    73,    72,    78,    73,    72,
      77,    -1,    -1,    77,    -1,    77,    77,    77,    77,    77,
      77,    77,    73,    77,    77
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    82,     0,    20,    25,    38,    39,    83,    88,   100,
     132,   133,   138,   139,   151,   172,    75,    75,    75,    75,
      71,    51,     1,    28,   173,   174,   175,     1,     4,     6,
      15,    26,    30,    34,    35,    36,    37,    40,    41,    43,
      45,    46,    47,    48,    60,    65,    66,    67,    68,    70,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     1,    18,    19,    59,
     152,   153,   154,   155,   156,   157,   158,     1,    12,    13,
      14,    16,    17,    32,    33,    42,    50,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    75,    75,
      78,    76,   174,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    76,   102,    11,    78,    78,
      78,    76,   153,     7,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    76,    90,     1,    28,    51,   134,   135,
     136,   137,     1,     6,    21,    29,    31,    44,    61,    62,
      63,    64,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    73,    77,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    72,    73,    72,    85,
      73,    85,    73,    72,    73,    72,    72,    73,    77,    75,
      73,    73,    73,    77,    75,    85,    72,    85,    72,    85,
      85,    85,    73,    73,    77,    78,    78,    76,   135,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    76,   141,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    52,    53,    54,    55,    56,    57,
      58,    84,    85,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    22,    27,    31,   127,   128,   129,   130,   131,
      77,    77,    77,     1,     3,     5,    26,    31,    49,    69,
     159,   160,   161,   162,   166,   167,   168,   169,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    73,    73,    77,
      73,    72,    72,    87,    73,    74,    73,    72,    73,    85,
      77,    84,    84,    84,    84,    84,    84,    84,    78,    78,
      78,    76,   128,   163,    78,    78,    78,    75,    78,    76,
     160,    77,    77,    77,    77,     8,     9,    10,    86,    87,
      77,    77,    79,    77,    77,    77,    77,    73,    73,    73,
      77,    78,    72,    73,    73,    72,   170,   171,    73,    77,
      86,    86,    86,    72,    77,    77,    77,    23,    24,   164,
     165,    77,    77,    77,    78,    76,   171,    77,    77,    77,
      80,    73,    77,   165,    77
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    83,    83,    83,    83,    83,    83,
      84,    84,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    86,    87,    87,    87,    87,    88,    89,    89,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   126,   125,   127,
     127,   128,   128,   128,   129,   130,   131,   133,   132,   134,
     134,   135,   135,   135,   136,   137,   139,   138,   140,   140,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   152,   153,   153,   153,   153,   153,   154,   155,   156,
     158,   157,   159,   159,   160,   160,   160,   160,   160,   160,
     160,   161,   163,   162,   164,   164,   165,   165,   166,   167,
     168,   169,   170,   170,   171,   172,   173,   173,   174,   174,
     175
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       0,     1,     2,     3,     3,     3,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     4,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     6,     5,
       2,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     0,     5,     3,     1,     1,     1,     4,     4,
       4,     5,     2,     1,     4,     5,     2,     1,     1,     1,
       4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 10: /* timespec_: %empty  */
#line 122 "config-parser.y"
           { (yyval.number) = 0; }
#line 1737 "config-parser.c"
    break;

  case 12: /* timespec: NUMBER timespec_  */
#line 123 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1743 "config-parser.c"
    break;

  case 13: /* timespec: NUMBER SECONDS timespec_  */
#line 124 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1749 "config-parser.c"
    break;

  case 14: /* timespec: NUMBER MINUTES timespec_  */
#line 125 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 1755 "config-parser.c"
    break;

  case 15: /* timespec: NUMBER HOURS timespec_  */
#line 126 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 1761 "config-parser.c"
    break;

  case 16: /* timespec: NUMBER DAYS timespec_  */
#line 127 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 1767 "config-parser.c"
    break;

  case 17: /* timespec: NUMBER WEEKS timespec_  */
#line 128 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 1773 "config-parser.c"
    break;

  case 18: /* timespec: NUMBER MONTHS timespec_  */
#line 129 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 1779 "config-parser.c"
    break;

  case 19: /* timespec: NUMBER YEARS timespec_  */
#line 130 "config-parser.y"
                                    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 1785 "config-parser.c"
    break;

  case 20: /* sizespec_: %empty  */
#line 133 "config-parser.y"
           { (yyval.number) = 0; }
#line 1791 "config-parser.c"
    break;

  case 22: /* sizespec: NUMBER sizespec_  */
#line 134 "config-parser.y"
                                   { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1797 "config-parser.c"
    break;

  case 23: /* sizespec: NUMBER BYTES sizespec_  */
#line 135 "config-parser.y"
                                   { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1803 "config-parser.c"
    break;

  case 24: /* sizespec: NUMBER KBYTES sizespec_  */
#line 136 "config-parser.y"
                                   { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 1809 "config-parser.c"
    break;

  case 25: /* sizespec: NUMBER MBYTES sizespec_  */
#line 137 "config-parser.y"
                                   { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 1815 "config-parser.c"
    break;

  case 39: /* options_negcache: NEGCACHE '=' timespec ';'  */
#line 159 "config-parser.y"
{
  OptionsItem.negcache = (yyvsp[-1].number);
}
#line 1823 "config-parser.c"
    break;

  case 40: /* options_negcache_rebuild: NEGCACHE_REBUILD '=' timespec ';'  */
#line 164 "config-parser.y"
{
  OptionsItem.negcache_rebuild = (yyvsp[-1].number);
}
#line 1831 "config-parser.c"
    break;

  case 41: /* options_pidfile: PIDFILE '=' STRING ';'  */
#line 169 "config-parser.y"
{
  xfree(OptionsItem.pidfile);
  OptionsItem.pidfile = xstrdup((yyvsp[-1].string));
}
#line 1840 "config-parser.c"
    break;

  case 42: /* options_dns_fdlimit: DNS_FDLIMIT '=' NUMBER ';'  */
#line 175 "config-parser.y"
{
  OptionsItem.dns_fdlimit = (yyvsp[-1].number);
}
#line 1848 "config-parser.c"
    break;

  case 43: /* options_dns_timeout: DNS_TIMEOUT '=' timespec ';'  */
#line 180 "config-parser.y"
{
  OptionsItem.dns_timeout = (yyvsp[-1].number);
}
#line 1856 "config-parser.c"
    break;

  case 44: /* options_scanlog: SCANLOG '=' STRING ';'  */
#line 185 "config-parser.y"
{
  xfree(OptionsItem.scanlog);
  OptionsItem.scanlog = xstrdup((yyvsp[-1].string));
}
#line 1865 "config-parser.c"
    break;

  case 45: /* options_command_queue_size: COMMAND_QUEUE_SIZE '=' NUMBER ';'  */
#line 191 "config-parser.y"
{
  OptionsItem.command_queue_size = (yyvsp[-1].number);
}
#line 1873 "config-parser.c"
    break;

  case 46: /* options_command_interval: COMMAND_INTERVAL '=' timespec ';'  */
#line 196 "config-parser.y"
{
  OptionsItem.command_interval = (yyvsp[-1].number);
}
#line 1881 "config-parser.c"
    break;

  case 47: /* options_command_timeout: COMMAND_TIMEOUT '=' timespec ';'  */
#line 201 "config-parser.y"
{
  OptionsItem.command_timeout = (yyvsp[-1].number);
}
#line 1889 "config-parser.c"
    break;

  case 75: /* irc_away: AWAY '=' STRING ';'  */
#line 238 "config-parser.y"
{
  xfree(IRCItem.away);
  IRCItem.away = xstrdup((yyvsp[-1].string));
}
#line 1898 "config-parser.c"
    break;

  case 76: /* irc_kline: KLINE '=' STRING ';'  */
#line 244 "config-parser.y"
{
  xfree(IRCItem.kline);
  IRCItem.kline = xstrdup((yyvsp[-1].string));
}
#line 1907 "config-parser.c"
    break;

  case 77: /* irc_mode: MODE '=' STRING ';'  */
#line 250 "config-parser.y"
{
  xfree(IRCItem.mode);
  IRCItem.mode = xstrdup((yyvsp[-1].string));
}
#line 1916 "config-parser.c"
    break;

  case 78: /* irc_nick: NICK '=' STRING ';'  */
#line 256 "config-parser.y"
{
  xfree(IRCItem.nick);
  IRCItem.nick = xstrdup((yyvsp[-1].string));
}
#line 1925 "config-parser.c"
    break;

  case 79: /* irc_nickserv: NICKSERV '=' STRING ';'  */
#line 262 "config-parser.y"
{
  xfree(IRCItem.nickserv);
  IRCItem.nickserv = xstrdup((yyvsp[-1].string));
}
#line 1934 "config-parser.c"
    break;

  case 80: /* irc_oper: OPER '=' STRING ';'  */
#line 268 "config-parser.y"
{
  xfree(IRCItem.oper);
  IRCItem.oper = xstrdup((yyvsp[-1].string));
}
#line 1943 "config-parser.c"
    break;

  case 81: /* irc_password: PASSWORD '=' STRING ';'  */
#line 274 "config-parser.y"
{
  xfree(IRCItem.password);
  IRCItem.password = xstrdup((yyvsp[-1].string));
}
#line 1952 "config-parser.c"
    break;

  case 82: /* irc_perform: PERFORM '=' STRING ';'  */
#line 280 "config-parser.y"
{
  list_add(xstrdup((yyvsp[-1].string)), node_create(), &IRCItem.performs);
}
#line 1960 "config-parser.c"
    break;

  case 83: /* irc_notice: NOTICE '=' STRING ';'  */
#line 285 "config-parser.y"
{
  list_add(xstrdup((yyvsp[-1].string)), node_create(), &IRCItem.notices);
}
#line 1968 "config-parser.c"
    break;

  case 84: /* irc_port: PORT '=' NUMBER ';'  */
#line 290 "config-parser.y"
{
  IRCItem.port = (yyvsp[-1].number);
}
#line 1976 "config-parser.c"
    break;

  case 85: /* irc_tls: TLS '=' NUMBER ';'  */
#line 295 "config-parser.y"
{
  IRCItem.tls = (yyvsp[-1].number);
}
#line 1984 "config-parser.c"
    break;

  case 86: /* irc_rsa_private_key_file: RSA_PRIVATE_KEY_FILE '=' STRING ';'  */
#line 300 "config-parser.y"
{
  xfree(IRCItem.rsa_private_key_file);
  IRCItem.rsa_private_key_file = xstrdup((yyvsp[-1].string));
}
#line 1993 "config-parser.c"
    break;

  case 87: /* irc_tls_certificate_file: TLS_CERTIFICATE_FILE '=' STRING ';'  */
#line 307 "config-parser.y"
{
  xfree(IRCItem.tls_certificate_file);
  IRCItem.tls_certificate_file = xstrdup((yyvsp[-1].string));
}
#line 2002 "config-parser.c"
    break;

  case 88: /* irc_tls_hostname_verification: TLS_HOSTNAME_VERIFICATION '=' NUMBER ';'  */
#line 313 "config-parser.y"
{
  IRCItem.tls_hostname_verification = (yyvsp[-1].number);
}
#line 2010 "config-parser.c"
    break;

  case 89: /* irc_tls_disable_certificate_verification: TLS_DISABLE_CERTIFICATE_VERIFICATION '=' NUMBER ';'  */
#line 318 "config-parser.y"
{
  IRCItem.tls_disable_certificate_verification = (yyvsp[-1].number);
}
#line 2018 "config-parser.c"
    break;

  case 90: /* irc_readtimeout: READTIMEOUT '=' timespec ';'  */
#line 323 "config-parser.y"
{
  IRCItem.readtimeout = (yyvsp[-1].number);
}
#line 2026 "config-parser.c"
    break;

  case 91: /* irc_reconnectinterval: RECONNECTINTERVAL '=' timespec ';'  */
#line 328 "config-parser.y"
{
  IRCItem.reconnectinterval = (yyvsp[-1].number);
}
#line 2034 "config-parser.c"
    break;

  case 92: /* irc_realname: REALNAME '=' STRING ';'  */
#line 333 "config-parser.y"
{
  xfree(IRCItem.realname);
  IRCItem.realname = xstrdup((yyvsp[-1].string));
}
#line 2043 "config-parser.c"
    break;

  case 93: /* irc_server: SERVER '=' STRING ';'  */
#line 339 "config-parser.y"
{
  xfree(IRCItem.server);
  IRCItem.server = xstrdup((yyvsp[-1].string));
}
#line 2052 "config-parser.c"
    break;

  case 94: /* irc_username: USERNAME '=' STRING ';'  */
#line 345 "config-parser.y"
{
  xfree(IRCItem.username);
  IRCItem.username = xstrdup((yyvsp[-1].string));
}
#line 2061 "config-parser.c"
    break;

  case 95: /* irc_bind: BIND '=' STRING ';'  */
#line 351 "config-parser.y"
{
  xfree(IRCItem.bind);
  IRCItem.bind = xstrdup((yyvsp[-1].string));
}
#line 2070 "config-parser.c"
    break;

  case 96: /* irc_connregex: CONNREGEX '=' STRING ';'  */
#line 357 "config-parser.y"
{
  xfree(IRCItem.connregex);
  IRCItem.connregex = xstrdup((yyvsp[-1].string));
}
#line 2079 "config-parser.c"
    break;

  case 97: /* $@1: %empty  */
#line 365 "config-parser.y"
{
  struct ChannelConf *item;

  item = xcalloc(sizeof(*item));
  item->name = xstrdup("");
  item->key = xstrdup("");
  item->invite = xstrdup("");

  list_add(item, &item->node, &IRCItem.channels);
  tmp = item;
}
#line 2095 "config-parser.c"
    break;

  case 104: /* channel_name: NAME '=' STRING ';'  */
#line 386 "config-parser.y"
{
  struct ChannelConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2106 "config-parser.c"
    break;

  case 105: /* channel_key: KEY '=' STRING ';'  */
#line 394 "config-parser.y"
{
  struct ChannelConf *item = tmp;

  xfree(item->key);
  item->key = xstrdup((yyvsp[-1].string));
}
#line 2117 "config-parser.c"
    break;

  case 106: /* channel_invite: INVITE '=' STRING ';'  */
#line 402 "config-parser.y"
{
  struct ChannelConf *item = tmp;

  xfree(item->invite);
  item->invite = xstrdup((yyvsp[-1].string));
}
#line 2128 "config-parser.c"
    break;

  case 107: /* $@2: %empty  */
#line 412 "config-parser.y"
{
  struct UserConf *item;

  item = xcalloc(sizeof(*item));

  list_add(item, &item->node, &UserItemList);
  tmp = item;
}
#line 2141 "config-parser.c"
    break;

  case 114: /* user_mask: MASK '=' STRING ';'  */
#line 430 "config-parser.y"
{
  struct UserConf *item = tmp;

  list_add(xstrdup((yyvsp[-1].string)), node_create(), &item->masks);
}
#line 2151 "config-parser.c"
    break;

  case 115: /* user_scanner: SCANNER '=' STRING ';'  */
#line 437 "config-parser.y"
{
  struct UserConf *item = tmp;

  list_add(xstrdup((yyvsp[-1].string)), node_create(), &item->scanners);
}
#line 2161 "config-parser.c"
    break;

  case 116: /* $@3: %empty  */
#line 446 "config-parser.y"
{
  struct ScannerConf *item, *olditem;

  item = xcalloc(sizeof(*item));

  /* Setup ScannerConf defaults */
  item->name = xstrdup("undefined");

  if (LIST_SIZE(&ScannerItemList))
  {
    olditem = ScannerItemList.tail->data;

    item->bind = xstrdup(olditem->bind);
    item->fd = olditem->fd;
    item->target_ip = xstrdup(olditem->target_ip);
    item->target_port = olditem->target_port;
    item->timeout = olditem->timeout;
    item->max_read = olditem->max_read;
    memcpy(&item->target_string, &olditem->target_string, sizeof(item->target_string));
  }
  else
  {
    item->bind = xstrdup("0.0.0.0");
    item->fd = 512;
    item->target_ip = xstrdup("127.0.0.1");
    item->target_port = 6667;
    item->timeout = 30;
    item->max_read = 4096;
  }

  list_add(item, &item->node, &ScannerItemList);
  tmp = item;
}
#line 2199 "config-parser.c"
    break;

  case 130: /* scanner_name: NAME '=' STRING ';'  */
#line 496 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2210 "config-parser.c"
    break;

  case 131: /* scanner_bind: BIND '=' STRING ';'  */
#line 504 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  xfree(item->bind);
  item->bind = xstrdup((yyvsp[-1].string));
}
#line 2221 "config-parser.c"
    break;

  case 132: /* scanner_target_ip: TARGET_IP '=' STRING ';'  */
#line 512 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  xfree(item->target_ip);
  item->target_ip = xstrdup((yyvsp[-1].string));
}
#line 2232 "config-parser.c"
    break;

  case 133: /* scanner_target_string: TARGET_STRING '=' STRING ';'  */
#line 520 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  if (item->target_string_created == 0)
  {
    memset(&item->target_string, 0, sizeof(item->target_string));
    item->target_string_created = 1;
  }

  list_add(xstrdup((yyvsp[-1].string)), node_create(), &item->target_string);
}
#line 2248 "config-parser.c"
    break;

  case 134: /* scanner_fd: FD '=' NUMBER ';'  */
#line 533 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  item->fd = (yyvsp[-1].number);
}
#line 2258 "config-parser.c"
    break;

  case 135: /* scanner_target_port: TARGET_PORT '=' NUMBER ';'  */
#line 540 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  item->target_port = (yyvsp[-1].number);
}
#line 2268 "config-parser.c"
    break;

  case 136: /* scanner_timeout: TIMEOUT '=' timespec ';'  */
#line 547 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  item->timeout = (yyvsp[-1].number);
}
#line 2278 "config-parser.c"
    break;

  case 137: /* scanner_max_read: MAX_READ '=' sizespec ';'  */
#line 554 "config-parser.y"
{
  struct ScannerConf *item = tmp;

  item->max_read = (yyvsp[-1].number);
}
#line 2288 "config-parser.c"
    break;

  case 138: /* scanner_protocol: PROTOCOL '=' PROTOCOLTYPE ':' NUMBER ';'  */
#line 561 "config-parser.y"
{
  struct ProtocolConf *item;
  struct ScannerConf *item2;

  item = xcalloc(sizeof(*item));
  item->type = (yyvsp[-3].number);
  item->port = (yyvsp[-1].number);

  item2 = tmp;

  list_add(item, node_create(), &item2->protocols);
}
#line 2305 "config-parser.c"
    break;

  case 147: /* opm_dnsbl_from: DNSBL_FROM '=' STRING ';'  */
#line 588 "config-parser.y"
{
  xfree(OpmItem.dnsbl_from);
  OpmItem.dnsbl_from = xstrdup((yyvsp[-1].string));
}
#line 2314 "config-parser.c"
    break;

  case 148: /* opm_dnsbl_to: DNSBL_TO '=' STRING ';'  */
#line 594 "config-parser.y"
{
  xfree(OpmItem.dnsbl_to);
  OpmItem.dnsbl_to = xstrdup((yyvsp[-1].string));
}
#line 2323 "config-parser.c"
    break;

  case 149: /* opm_sendmail: SENDMAIL '=' STRING ';'  */
#line 600 "config-parser.y"
{
  xfree(OpmItem.sendmail);
  OpmItem.sendmail = xstrdup((yyvsp[-1].string));
}
#line 2332 "config-parser.c"
    break;

  case 150: /* $@4: %empty  */
#line 608 "config-parser.y"
{
  struct BlacklistConf *item;

  item = xcalloc(sizeof(*item));
  item->name = xstrdup("");
  item->kline = xstrdup("");
  item->ipv4 = 1;
  item->ban_unknown = 0;
  item->type = A_BITMASK;

  list_add(item, node_create(), &OpmItem.blacklists);

  tmp = item;
}
#line 2351 "config-parser.c"
    break;

  case 161: /* blacklist_name: NAME '=' STRING ';'  */
#line 636 "config-parser.y"
{
  struct BlacklistConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2362 "config-parser.c"
    break;

  case 162: /* $@5: %empty  */
#line 644 "config-parser.y"
{
  struct BlacklistConf *item = tmp;

  item->ipv4 = 0;
  item->ipv6 = 0;
}
#line 2373 "config-parser.c"
    break;

  case 166: /* blacklist_address_family_item: IPV4  */
#line 653 "config-parser.y"
{
  struct BlacklistConf *item = tmp;

  item->ipv4 = 1;
}
#line 2383 "config-parser.c"
    break;

  case 167: /* blacklist_address_family_item: IPV6  */
#line 658 "config-parser.y"
{
  struct BlacklistConf *item = tmp;

  item->ipv6 = 1;
}
#line 2393 "config-parser.c"
    break;

  case 168: /* blacklist_kline: KLINE '=' STRING ';'  */
#line 665 "config-parser.y"
{
  struct BlacklistConf *item = tmp;

  xfree(item->kline);
  item->kline = xstrdup((yyvsp[-1].string));
}
#line 2404 "config-parser.c"
    break;

  case 169: /* blacklist_type: TYPE '=' STRING ';'  */
#line 673 "config-parser.y"
{
  struct BlacklistConf *item = tmp;

  if (strcmp("A record bitmask", (yyvsp[-1].string)) == 0)
    item->type = A_BITMASK;
  else if (strcmp("A record reply", (yyvsp[-1].string)) == 0)
    item->type = A_REPLY;
  else
    yyerror("Unknown blacklist type defined");
}
#line 2419 "config-parser.c"
    break;

  case 170: /* blacklist_ban_unknown: BAN_UNKNOWN '=' NUMBER ';'  */
#line 685 "config-parser.y"
{
  struct BlacklistConf *item = tmp;

  item->ban_unknown = (yyvsp[-1].number);
}
#line 2429 "config-parser.c"
    break;

  case 174: /* blacklist_reply_item: NUMBER '=' STRING ';'  */
#line 697 "config-parser.y"
{
  struct BlacklistReplyConf *item;
  struct BlacklistConf *blacklist = tmp;

  item = xcalloc(sizeof(*item));
  item->number = (yyvsp[-3].number);
  item->type = xstrdup((yyvsp[-1].string));

  list_add(item, node_create(), &blacklist->reply);
}
#line 2444 "config-parser.c"
    break;

  case 180: /* exempt_mask: MASK '=' STRING ';'  */
#line 719 "config-parser.y"
{
  list_add(xstrdup((yyvsp[-1].string)), node_create(), &ExemptItem.masks);
}
#line 2452 "config-parser.c"
    break;


#line 2456 "config-parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 723 "config-parser.y"


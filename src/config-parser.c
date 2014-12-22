/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 25 "config-parser.y"

#include <stdio.h>
#include <string.h>
#include "malloc.h"
#include "config.h"

int yydebug=0;
void *tmp;        /* Variable to temporarily hold nodes before insertion to list */



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 82 "config-parser.y"
{
        int number;
        char *string;
}
/* Line 193 of yacc.c.  */
#line 208 "config-parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 221 "config-parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   281

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNRULES -- Number of states.  */
#define YYNSTATES  293

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    51,
       2,    52,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      45,    46,    47,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    25,    26,    29,    31,    33,    35,    37,    39,    41,
      46,    51,    56,    61,    67,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    96,    98,
     100,   102,   104,   109,   114,   119,   124,   129,   134,   139,
     144,   149,   154,   159,   164,   169,   174,   175,   182,   185,
     187,   189,   191,   193,   198,   203,   208,   209,   216,   219,
     221,   223,   225,   227,   232,   237,   238,   245,   248,   250,
     252,   254,   256,   258,   260,   262,   264,   266,   268,   270,
     275,   280,   285,   290,   295,   300,   305,   310,   317,   323,
     324,   327,   329,   331,   333,   335,   337,   339,   344,   349,
     354,   355,   362,   363,   366,   368,   370,   372,   374,   376,
     378,   380,   385,   390,   395,   400,   406,   407,   410,   412,
     417,   423,   424,   427,   429,   431,   433
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    -1,    55,    56,    -1,    64,    -1,    57,
      -1,   107,    -1,    88,    -1,    94,    -1,   124,    -1,    26,
      49,    58,    50,    51,    -1,    -1,    58,    59,    -1,    59,
      -1,    60,    -1,    61,    -1,    62,    -1,    63,    -1,     1,
      -1,    21,    52,    47,    51,    -1,    29,    52,    48,    51,
      -1,     8,    52,    47,    51,    -1,    35,    52,    48,    51,
      -1,    14,    49,    65,    50,    51,    -1,    65,    66,    -1,
      66,    -1,    67,    -1,    80,    -1,    68,    -1,    70,    -1,
      71,    -1,    69,    -1,    72,    -1,    73,    -1,    75,    -1,
      76,    -1,    77,    -1,    78,    -1,    79,    -1,    74,    -1,
      81,    -1,     1,    -1,     3,    52,    48,    51,    -1,    15,
      52,    48,    51,    -1,    19,    52,    48,    51,    -1,    22,
      52,    48,    51,    -1,    23,    52,    48,    51,    -1,    24,
      52,    48,    51,    -1,    27,    52,    48,    51,    -1,    28,
      52,    48,    51,    -1,    30,    52,    47,    51,    -1,    33,
      52,    48,    51,    -1,    38,    52,    48,    51,    -1,    44,
      52,    48,    51,    -1,    46,    52,    48,    51,    -1,     7,
      52,    48,    51,    -1,    -1,    82,     6,    49,    83,    50,
      51,    -1,    83,    84,    -1,    84,    -1,    85,    -1,    86,
      -1,    87,    -1,    20,    52,    48,    51,    -1,    16,    52,
      48,    51,    -1,    13,    52,    48,    51,    -1,    -1,    89,
      45,    49,    90,    50,    51,    -1,    90,    91,    -1,    91,
      -1,    92,    -1,    93,    -1,     1,    -1,    17,    52,    48,
      51,    -1,    36,    52,    48,    51,    -1,    -1,    95,    36,
      49,    96,    50,    51,    -1,    96,    97,    -1,    97,    -1,
      98,    -1,    99,    -1,   102,    -1,   100,    -1,   103,    -1,
     101,    -1,   106,    -1,   104,    -1,   105,    -1,     1,    -1,
      20,    52,    48,    51,    -1,    46,    52,    48,    51,    -1,
      39,    52,    48,    51,    -1,    41,    52,    48,    51,    -1,
      12,    52,    47,    51,    -1,    40,    52,    47,    51,    -1,
      42,    52,    47,    51,    -1,    18,    52,    47,    51,    -1,
      31,    52,    32,    53,    47,    51,    -1,    25,    49,   108,
      50,    51,    -1,    -1,   108,   109,    -1,   109,    -1,   110,
      -1,   111,    -1,   112,    -1,   113,    -1,     1,    -1,     9,
      52,    48,    51,    -1,    10,    52,    48,    51,    -1,    37,
      52,    48,    51,    -1,    -1,   114,     5,    49,   115,    50,
      51,    -1,    -1,   115,   116,    -1,   116,    -1,   117,    -1,
     119,    -1,   118,    -1,   120,    -1,   121,    -1,     1,    -1,
      20,    52,    48,    51,    -1,    15,    52,    48,    51,    -1,
      43,    52,    48,    51,    -1,     4,    52,    47,    51,    -1,
      34,    49,   122,    50,    51,    -1,    -1,   122,   123,    -1,
     123,    -1,    47,    52,    48,    51,    -1,    11,    49,   125,
      50,    51,    -1,    -1,   125,   126,    -1,   126,    -1,   127,
      -1,     1,    -1,    17,    52,    48,    51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    93,    93,    94,    97,    98,    99,   100,   101,   102,
     107,   109,   110,   111,   113,   114,   115,   116,   117,   119,
     124,   130,   135,   143,   145,   146,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   165,   171,   177,   183,   189,   195,   201,   207,
     215,   220,   226,   232,   238,   244,   254,   254,   271,   272,
     274,   275,   276,   278,   286,   294,   305,   305,   321,   322,
     324,   325,   326,   328,   338,   351,   351,   396,   397,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   410,
     417,   424,   431,   447,   453,   459,   465,   471,   490,   492,
     493,   494,   496,   497,   498,   499,   500,   502,   508,   514,
     523,   523,   542,   543,   544,   546,   547,   548,   549,   550,
     551,   553,   560,   567,   578,   584,   586,   587,   588,   590,
     608,   610,   611,   612,   614,   615,   617
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AWAY", "BAN_UNKNOWN", "BLACKLIST",
  "CHANNEL", "CONNREGEX", "DNS_FDLIMIT", "DNSBL_FROM", "DNSBL_TO",
  "EXEMPT", "FD", "INVITE", "IRC", "KLINE", "KEY", "MASK", "MAX_READ",
  "MODE", "NAME", "NEGCACHE", "NICK", "NICKSERV", "OPER", "OPM", "OPTIONS",
  "PASSWORD", "PERFORM", "PIDFILE", "PORT", "PROTOCOL", "PROTOCOLTYPE",
  "REALNAME", "REPLY", "SCANLOG", "SCANNER", "SENDMAIL", "SERVER",
  "TARGET_IP", "TARGET_PORT", "TARGET_STRING", "TIMEOUT", "TYPE",
  "USERNAME", "USER", "VHOST", "NUMBER", "STRING", "'{'", "'}'", "';'",
  "'='", "':'", "$accept", "config", "config_items", "options_entry",
  "options_items", "options_item", "options_negcache", "options_pidfile",
  "options_dns_fdlimit", "options_scanlog", "irc_entry", "irc_items",
  "irc_item", "irc_away", "irc_kline", "irc_mode", "irc_nick",
  "irc_nickserv", "irc_oper", "irc_password", "irc_perform", "irc_port",
  "irc_realname", "irc_server", "irc_username", "irc_vhost",
  "irc_connregex", "channel_entry", "@1", "channel_items", "channel_item",
  "channel_name", "channel_key", "channel_invite", "user_entry", "@2",
  "user_items", "user_item", "user_mask", "user_scanner", "scanner_entry",
  "@3", "scanner_items", "scanner_item", "scanner_name", "scanner_vhost",
  "scanner_target_ip", "scanner_target_string", "scanner_fd",
  "scanner_target_port", "scanner_timeout", "scanner_max_read",
  "scanner_protocol", "opm_entry", "opm_items", "opm_item",
  "opm_dnsbl_from", "opm_dnsbl_to", "opm_sendmail", "opm_blacklist_entry",
  "@4", "blacklist_items", "blacklist_item", "blacklist_name",
  "blacklist_kline", "blacklist_type", "blacklist_ban_unknown",
  "blacklist_reply", "blacklist_reply_items", "blacklist_reply_item",
  "exempt_entry", "exempt_items", "exempt_item", "exempt_mask", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   123,
     125,    59,    61,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    56,    56,    56,    56,
      57,    58,    58,    58,    59,    59,    59,    59,    59,    60,
      61,    62,    63,    64,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    82,    81,    83,    83,
      84,    84,    84,    85,    86,    87,    89,    88,    90,    90,
      91,    91,    91,    92,    93,    95,    94,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     108,   108,   109,   109,   109,   109,   109,   110,   111,   112,
     114,   113,   115,   115,   115,   116,   116,   116,   116,   116,
     116,   117,   118,   119,   120,   121,   122,   122,   122,   123,
     124,   125,   125,   125,   126,   126,   127
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       5,     0,     2,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     6,     5,     0,
       2,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       0,     6,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     5,     0,     2,     1,     4,
       5,     0,     2,     1,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    66,     1,     0,     0,     0,     0,     3,     5,     4,
       7,     0,     8,     0,     6,     9,     0,     0,     0,     0,
       0,     0,   135,     0,     0,   133,   134,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,    28,    31,    29,    30,    32,
      33,    39,    34,    35,    36,    37,    38,    27,    40,     0,
     106,     0,     0,     0,     0,   101,   102,   103,   104,   105,
       0,    18,     0,     0,     0,     0,     0,    13,    14,    15,
      16,    17,     0,     0,     0,     0,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,     0,    12,    72,     0,     0,     0,
      69,    70,    71,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    82,    84,    81,
      83,    86,    87,    85,     0,   130,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,    98,     0,     0,     0,     0,
       0,    10,     0,     0,     0,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,   136,    42,    55,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,    59,    60,    61,    62,
     107,   108,   109,   120,     0,     0,     0,     0,     0,     0,
     114,   115,   117,   116,   118,   119,    21,    19,    20,    22,
       0,     0,    67,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,     0,     0,    58,     0,     0,
       0,   126,     0,     0,   113,    73,    74,    93,    96,    89,
       0,    91,    94,    92,    95,    90,     0,     0,     0,    57,
       0,     0,     0,     0,     0,   128,     0,   111,     0,    65,
      64,    63,   124,   122,   121,     0,     0,   127,   123,    97,
       0,   125,   129
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,     8,    76,    77,    78,    79,    80,    81,
       9,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,   205,
     206,   207,   208,   209,    10,    11,   119,   120,   121,   122,
      12,    13,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    14,    64,    65,    66,    67,    68,    69,
      70,   219,   220,   221,   222,   223,   224,   225,   274,   275,
      15,    24,    25,    26
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -91
static const yytype_int16 yypact[] =
{
     -91,   132,   -91,   -40,   -39,   -34,   -30,   -91,   -91,   -91,
     -91,   -14,   -91,    -3,   -91,   -91,    24,   107,     2,    59,
      -7,    -5,   -91,   -17,    29,   -91,   -91,   -91,    -4,     9,
      11,    19,    30,    35,    38,    43,    44,    51,    53,    55,
      63,    66,    -1,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,    69,
     -91,    68,    71,    72,    67,   -91,   -91,   -91,   -91,   -91,
      86,   -91,    76,    81,    87,    89,    77,   -91,   -91,   -91,
     -91,   -91,    80,   124,    54,    60,   -91,    73,    90,    99,
     100,   101,   102,   104,   106,   108,   112,   113,   114,   119,
     121,   109,   -91,    52,   123,   125,   126,   127,   -91,    70,
     128,   129,   131,   133,   134,   -91,   -91,   120,   130,    23,
     -91,   -91,   -91,   -91,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    16,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   145,   -91,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     -91,     0,   160,   161,   162,   -91,    49,   163,   164,   165,
     166,   -91,   170,   171,   169,   -91,   174,   175,   176,   191,
     177,   179,   180,   182,   183,   181,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   178,   184,   185,   -12,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   186,   187,   188,   192,   190,    50,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     193,   194,   -91,   195,   196,   197,   198,   199,   201,   202,
     203,   204,   -91,   208,   209,   210,   211,   -91,   212,   213,
     215,   217,   218,   214,   -91,   -91,   -91,   -91,   -91,   -91,
     220,   -91,   -91,   -91,   -91,   -91,   219,   221,   222,   -91,
     223,   224,   225,   216,    39,   -91,   226,   -91,   227,   -91,
     -91,   -91,   -91,   -91,   -91,   231,   229,   -91,   -91,   -91,
     230,   -91,   -91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -91,   -91,   -91,   -91,   -91,   110,   -91,   -91,   -91,   -91,
     -91,   -91,   207,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -28,   -91,   -91,   -91,   -91,   -91,   -91,    61,   -91,   -91,
     -91,   -91,   -91,    94,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   205,   -91,   -91,   -91,   -91,
     -91,   -91,   -36,   -91,   -91,   -91,   -91,   -91,   -91,   -90,
     -91,   -91,   236,   -91
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -132
static const yytype_int16 yytable[] =
{
      27,   202,    28,    60,   203,   -56,    29,   -99,   204,    16,
      17,    61,    62,   202,    30,    18,   203,   123,    31,    19,
     204,    32,    33,    34,   116,    22,    35,    36,   124,    37,
      22,    20,    38,    21,   125,    84,   126,    39,   246,    63,
     117,    23,    82,    40,    83,    41,    23,   127,    87,   101,
     213,   213,   -99,   214,   214,   128,   129,   130,   131,   118,
      71,    88,   132,    89,   215,   215,   185,    72,    60,   216,
     216,    90,  -110,   174,  -131,   103,    61,    62,    71,    85,
      73,   116,    91,   217,   217,    72,   273,    92,    74,   286,
      93,   109,   218,   218,    75,    94,    95,   117,    73,  -112,
     253,   161,   144,    96,    63,    97,    74,    98,    27,   -11,
      28,   145,    75,   -56,    29,    99,   118,   107,   100,   166,
     104,   146,    30,   105,   106,   123,    31,   114,   110,    32,
      33,    34,     2,   111,    35,    36,   124,    37,   147,   112,
      38,   113,   125,     3,   126,    39,     4,   148,   149,   150,
     151,    40,   152,    41,   153,   127,   154,     5,     6,   155,
     160,   156,   157,   128,   129,   130,   131,   158,   -75,   159,
     132,   162,   172,   163,   164,   167,   168,   247,   165,   169,
     175,   170,   173,   254,   287,   171,   115,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   210,   211,   212,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   236,   235,   237,   238,   186,   239,   240,
     243,   241,   242,     0,     0,     0,   244,   245,   248,   249,
     250,   251,   252,     0,   255,   256,   257,   258,   259,   102,
     261,   260,   262,   263,   264,   265,   266,   267,   268,   270,
      86,   271,   269,   272,   273,   277,   276,   278,   285,   108,
     279,     0,   280,   281,   282,   283,   284,   288,   289,   290,
     291,   292
};

static const yytype_int16 yycheck[] =
{
       1,    13,     3,     1,    16,     6,     7,     5,    20,    49,
      49,     9,    10,    13,    15,    49,    16,     1,    19,    49,
      20,    22,    23,    24,     1,     1,    27,    28,    12,    30,
       1,    45,    33,    36,    18,    52,    20,    38,    50,    37,
      17,    17,    49,    44,    49,    46,    17,    31,    52,    50,
       1,     1,    50,     4,     4,    39,    40,    41,    42,    36,
       1,    52,    46,    52,    15,    15,    50,     8,     1,    20,
      20,    52,     5,    50,    50,     6,     9,    10,     1,    50,
      21,     1,    52,    34,    34,     8,    47,    52,    29,    50,
      52,     5,    43,    43,    35,    52,    52,    17,    21,    50,
      50,    49,    48,    52,    37,    52,    29,    52,     1,    50,
       3,    51,    35,     6,     7,    52,    36,    50,    52,    49,
      52,    48,    15,    52,    52,     1,    19,    50,    52,    22,
      23,    24,     0,    52,    27,    28,    12,    30,    48,    52,
      33,    52,    18,    11,    20,    38,    14,    48,    48,    48,
      48,    44,    48,    46,    48,    31,    48,    25,    26,    47,
      51,    48,    48,    39,    40,    41,    42,    48,    36,    48,
      46,    48,    52,    48,    48,    47,    47,   205,    51,    48,
     119,    48,    52,   219,   274,    51,    76,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    48,    48,
      51,    47,    47,    32,    48,    48,    47,   133,    48,    47,
      52,    48,    51,    -1,    -1,    -1,    52,    52,    52,    52,
      52,    49,    52,    -1,    51,    51,    51,    51,    51,    42,
      51,    53,    51,    51,    51,    51,    48,    48,    48,    47,
      24,    48,    51,    48,    47,    51,    48,    47,    52,    64,
      51,    -1,    51,    51,    51,    51,    51,    51,    51,    48,
      51,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,     0,    11,    14,    25,    26,    56,    57,    64,
      88,    89,    94,    95,   107,   124,    49,    49,    49,    49,
      45,    36,     1,    17,   125,   126,   127,     1,     3,     7,
      15,    19,    22,    23,    24,    27,    28,    30,    33,    38,
      44,    46,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
       1,     9,    10,    37,   108,   109,   110,   111,   112,   113,
     114,     1,     8,    21,    29,    35,    58,    59,    60,    61,
      62,    63,    49,    49,    52,    50,   126,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    50,    66,     6,    52,    52,    52,    50,   109,     5,
      52,    52,    52,    52,    50,    59,     1,    17,    36,    90,
      91,    92,    93,     1,    12,    18,    20,    31,    39,    40,
      41,    42,    46,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    48,    51,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    47,    48,    48,    48,    48,
      51,    49,    48,    48,    48,    51,    49,    47,    47,    48,
      48,    51,    52,    52,    50,    91,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    50,    97,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    13,    16,    20,    83,    84,    85,    86,    87,
      51,    51,    51,     1,     4,    15,    20,    34,    43,   115,
     116,   117,   118,   119,   120,   121,    51,    51,    51,    51,
      48,    48,    51,    47,    47,    48,    32,    48,    47,    48,
      47,    48,    51,    52,    52,    52,    50,    84,    52,    52,
      52,    49,    52,    50,   116,    51,    51,    51,    51,    51,
      53,    51,    51,    51,    51,    51,    48,    48,    48,    51,
      47,    48,    48,    47,   122,   123,    48,    51,    47,    51,
      51,    51,    51,    51,    51,    52,    50,   123,    51,    51,
      48,    51,    51
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 19:
#line 120 "config-parser.y"
    {
   OptionsItem->negcache = (yyvsp[(3) - (4)].number);
}
    break;

  case 20:
#line 125 "config-parser.y"
    {
   MyFree(OptionsItem->pidfile);
   OptionsItem->pidfile = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 21:
#line 131 "config-parser.y"
    {
   OptionsItem->dns_fdlimit = (yyvsp[(3) - (4)].number);
}
    break;

  case 22:
#line 136 "config-parser.y"
    {
   MyFree(OptionsItem->scanlog);
   OptionsItem->scanlog = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 42:
#line 166 "config-parser.y"
    {
   MyFree(IRCItem->away);
   IRCItem->away = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 43:
#line 172 "config-parser.y"
    {
   MyFree(IRCItem->kline);
   IRCItem->kline = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 44:
#line 178 "config-parser.y"
    {
   MyFree(IRCItem->mode);
   IRCItem->mode = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 45:
#line 184 "config-parser.y"
    {
   MyFree(IRCItem->nick);
   IRCItem->nick = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 46:
#line 190 "config-parser.y"
    {
   MyFree(IRCItem->nickserv);
   IRCItem->nickserv = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 47:
#line 196 "config-parser.y"
    {
   MyFree(IRCItem->oper);
   IRCItem->oper = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 48:
#line 202 "config-parser.y"
    {
   MyFree(IRCItem->password);
   IRCItem->password = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 49:
#line 208 "config-parser.y"
    {
   node_t *node;
   node = node_create(DupString((yyvsp[(3) - (4)].string)));

   list_add(IRCItem->performs, node);
}
    break;

  case 50:
#line 216 "config-parser.y"
    {
   IRCItem->port = (yyvsp[(3) - (4)].number);
}
    break;

  case 51:
#line 221 "config-parser.y"
    {
   MyFree(IRCItem->realname);
   IRCItem->realname = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 52:
#line 227 "config-parser.y"
    {
   MyFree(IRCItem->server);
   IRCItem->server = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 53:
#line 233 "config-parser.y"
    {
   MyFree(IRCItem->username);
   IRCItem->username = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 54:
#line 239 "config-parser.y"
    {
   MyFree(IRCItem->vhost);
   IRCItem->vhost = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 55:
#line 245 "config-parser.y"
    {
   MyFree(IRCItem->connregex);
   IRCItem->connregex = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 56:
#line 254 "config-parser.y"
    {
   node_t *node;
   struct ChannelConf *item;

   item = MyMalloc(sizeof *item);

   item->name = DupString("");
   item->key = DupString("");
   item->invite = DupString("");

   node = node_create(item);
   list_add(IRCItem->channels, node);

   tmp = (void *) item;
}
    break;

  case 63:
#line 279 "config-parser.y"
    {
   struct ChannelConf *item = tmp;

   MyFree(item->name);
   item->name = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 64:
#line 287 "config-parser.y"
    {
   struct ChannelConf *item = tmp;

   MyFree(item->key);
   item->key = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 65:
#line 295 "config-parser.y"
    {
   struct ChannelConf *item = tmp;

   MyFree(item->invite);
   item->invite = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 66:
#line 305 "config-parser.y"
    {
   node_t *node;
   struct UserConf *item;

   item = MyMalloc(sizeof *item);

   item->masks = list_create();
   item->scanners = list_create();

   node = node_create(item);
   list_add(UserItemList, node);

   tmp = (void *) item; 
}
    break;

  case 73:
#line 329 "config-parser.y"
    {
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) DupString((yyvsp[(3) - (4)].string)));

   list_add(item->masks, node);
}
    break;

  case 74:
#line 339 "config-parser.y"
    {
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) DupString((yyvsp[(3) - (4)].string)));

   list_add(item->scanners, node);
}
    break;

  case 75:
#line 351 "config-parser.y"
    {
   node_t *node;
   struct ScannerConf *item, *olditem;

   item = MyMalloc(sizeof *item);

   /* Setup ScannerConf defaults */
   item->name = DupString("undefined");

	if(LIST_SIZE(ScannerItemList) > 0)
	{
	   olditem = ScannerItemList->tail->data;

		item->vhost = DupString(olditem->vhost);
		item->fd = olditem->fd;
		item->target_ip = DupString(olditem->target_ip);
		item->target_port = olditem->target_port;
		item->timeout = olditem->timeout;
		item->max_read = olditem->max_read;

		item->target_string = olditem->target_string;
		item->target_string_created = 0;
	}
	else
	{
	   item->vhost = DupString("0.0.0.0");
      item->fd = 512;
      item->target_ip = DupString("127.0.0.1");
      item->target_port = 6667;
      item->timeout = 30;
      item->max_read = 4096;
		
		item->target_string = list_create();
		item->target_string_created = 1;
	}
	
   item->protocols = list_create();

   node = node_create(item);

   list_add(ScannerItemList, node);
   tmp = (void *) item;
}
    break;

  case 89:
#line 411 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->name);
   item->name = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 90:
#line 418 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->vhost);
   item->vhost = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 91:
#line 425 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->target_ip);
   item->target_ip = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 92:
#line 432 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;

   node_t *node;
   node = node_create((yyvsp[(3) - (4)].string));

	if(item->target_string_created == 0)
	{
	   item->target_string = list_create();
		item->target_string_created = 1;
	}

   list_add(item->target_string, node);
}
    break;

  case 93:
#line 448 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->fd = (yyvsp[(3) - (4)].number);
}
    break;

  case 94:
#line 454 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->target_port = (yyvsp[(3) - (4)].number);
}
    break;

  case 95:
#line 460 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->timeout = (yyvsp[(3) - (4)].number);
}
    break;

  case 96:
#line 466 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->max_read = (yyvsp[(3) - (4)].number);
}
    break;

  case 97:
#line 472 "config-parser.y"
    {
   struct ProtocolConf *item;
   struct ScannerConf  *item2;

   node_t *node;
 
   item = MyMalloc(sizeof *item);
   item->type = (yyvsp[(3) - (6)].number);
   item->port = (yyvsp[(5) - (6)].number);

   item2 = (struct ScannerConf *) tmp;

   node = node_create(item);
   list_add(item2->protocols, node);
}
    break;

  case 107:
#line 503 "config-parser.y"
    {
   MyFree(OpmItem->dnsbl_from);
   OpmItem->dnsbl_from = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 108:
#line 509 "config-parser.y"
    {
   MyFree(OpmItem->dnsbl_to);
   OpmItem->dnsbl_to = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 109:
#line 515 "config-parser.y"
    {
   MyFree(OpmItem->sendmail);
   OpmItem->sendmail = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 110:
#line 523 "config-parser.y"
    {
   node_t *node;
   struct BlacklistConf *item;

   item = MyMalloc(sizeof *item);

   item->name = DupString("");
   item->kline = DupString("");
   item->ban_unknown = 0;
   item->type = A_BITMASK;
   item->reply = list_create();

   node = node_create(item);
   list_add(OpmItem->blacklists, node);

   tmp = (void *) item;
}
    break;

  case 121:
#line 553 "config-parser.y"
    {
   struct BlacklistConf *item = tmp;

   MyFree(item->name);
   item->name = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 122:
#line 560 "config-parser.y"
    {
   struct BlacklistConf *item = tmp;

   MyFree(item->kline);
   item->kline = DupString((yyvsp[(3) - (4)].string));
}
    break;

  case 123:
#line 567 "config-parser.y"
    {
   struct BlacklistConf *item = tmp;
   
   if(strcmp("A record bitmask", (yyvsp[(3) - (4)].string)) == 0)
      item->type = A_BITMASK;
   else if(strcmp("A record reply", (yyvsp[(3) - (4)].string)) == 0)
      item->type = A_REPLY;
   else
      yyerror("Unknown blacklist type defined");
}
    break;

  case 124:
#line 578 "config-parser.y"
    {
   struct BlacklistConf *item = tmp;

   item->ban_unknown = (yyvsp[(3) - (4)].number);
}
    break;

  case 129:
#line 591 "config-parser.y"
    {
   struct BlacklistReplyConf *item;
   struct BlacklistConf *blacklist = tmp;
   node_t *node;

   item = MyMalloc(sizeof *item);

   item->number = (yyvsp[(1) - (4)].number);
   item->type = DupString((yyvsp[(3) - (4)].string));

   node = node_create(item);
   list_add(blacklist->reply, node);
}
    break;

  case 136:
#line 618 "config-parser.y"
    {
   node_t *node;
   node = node_create(DupString((yyvsp[(3) - (4)].string)));

   list_add(ExemptItem->masks, node);
}
    break;


/* Line 1267 of yacc.c.  */
#line 2178 "config-parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 625 "config-parser.y"



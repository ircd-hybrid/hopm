/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 25 "config-parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include "malloc.h"
#include "config.h"

int yylex(void);

int yydebug=0;
void *tmp;        /* Variable to temporarily hold nodes before insertion to list */


#line 79 "config-parser.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 87 "config-parser.y" /* yacc.c:355  */

        int number;
        char *string;

#line 244 "config-parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 259 "config-parser.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   311

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  151
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  329

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,    63,
       2,    64,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,    62,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   103,   106,   107,   108,   109,   110,   111,
     113,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     124,   124,   125,   126,   127,   128,   133,   135,   136,   138,
     139,   140,   141,   142,   143,   145,   150,   155,   161,   166,
     174,   176,   177,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     197,   203,   209,   215,   221,   227,   233,   239,   247,   252,
     257,   263,   269,   275,   281,   291,   291,   308,   309,   311,
     312,   313,   315,   323,   331,   342,   342,   358,   359,   361,
     362,   363,   365,   375,   388,   388,   433,   434,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   447,   454,
     461,   468,   484,   490,   496,   502,   508,   527,   529,   530,
     532,   533,   534,   535,   536,   538,   544,   550,   559,   559,
     578,   579,   581,   582,   583,   584,   585,   586,   588,   595,
     602,   613,   619,   621,   622,   624,   642,   644,   645,   647,
     648,   650
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AWAY", "BAN_UNKNOWN", "BLACKLIST",
  "BYTES", "KBYTES", "MBYTES", "CHANNEL", "CONNREGEX", "DNS_FDLIMIT",
  "DNSBL_FROM", "DNSBL_TO", "EXEMPT", "FD", "INVITE", "IRC", "KLINE",
  "KEY", "MASK", "MAX_READ", "MODE", "NAME", "NEGCACHE",
  "NEGCACHE_REBUILD", "NICK", "NICKSERV", "OPER", "OPM", "OPTIONS",
  "PASSWORD", "PERFORM", "PIDFILE", "PORT", "PROTOCOL", "READTIMEOUT",
  "REALNAME", "REPLY", "SCANLOG", "SCANNER", "SECONDS", "MINUTES", "HOURS",
  "DAYS", "WEEKS", "MONTHS", "YEARS", "SENDMAIL", "SERVER", "TARGET_IP",
  "TARGET_PORT", "TARGET_STRING", "TIMEOUT", "TYPE", "USERNAME", "USER",
  "VHOST", "NUMBER", "STRING", "PROTOCOLTYPE", "'{'", "'}'", "';'", "'='",
  "':'", "$accept", "config", "config_items", "timespec_", "timespec",
  "sizespec_", "sizespec", "options_entry", "options_items",
  "options_item", "options_negcache", "options_negcache_rebuild",
  "options_pidfile", "options_dns_fdlimit", "options_scanlog", "irc_entry",
  "irc_items", "irc_item", "irc_away", "irc_kline", "irc_mode", "irc_nick",
  "irc_nickserv", "irc_oper", "irc_password", "irc_perform", "irc_port",
  "irc_readtimeout", "irc_realname", "irc_server", "irc_username",
  "irc_vhost", "irc_connregex", "channel_entry", "$@1", "channel_items",
  "channel_item", "channel_name", "channel_key", "channel_invite",
  "user_entry", "$@2", "user_items", "user_item", "user_mask",
  "user_scanner", "scanner_entry", "$@3", "scanner_items", "scanner_item",
  "scanner_name", "scanner_vhost", "scanner_target_ip",
  "scanner_target_string", "scanner_fd", "scanner_target_port",
  "scanner_timeout", "scanner_max_read", "scanner_protocol", "opm_entry",
  "opm_items", "opm_item", "opm_dnsbl_from", "opm_dnsbl_to",
  "opm_sendmail", "opm_blacklist_entry", "$@4", "blacklist_items",
  "blacklist_item", "blacklist_name", "blacklist_kline", "blacklist_type",
  "blacklist_ban_unknown", "blacklist_reply", "blacklist_reply_items",
  "blacklist_reply_item", "exempt_entry", "exempt_items", "exempt_item",
  "exempt_mask", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   123,   125,    59,    61,    58
};
# endif

#define YYPACT_NINF -125

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-125)))

#define YYTABLE_NINF -129

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -125,   127,  -125,   -53,   -49,   -47,   -38,  -125,  -125,  -125,
    -125,   -27,  -125,     7,  -125,  -125,    34,    83,    77,   136,
     -23,   -21,  -125,   -14,     1,  -125,  -125,  -125,   -13,    -3,
       2,     8,     9,    13,    24,    30,    42,    44,    48,    57,
      64,    65,    67,     0,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,    74,  -125,    70,    71,    75,    12,  -125,  -125,  -125,
    -125,  -125,    93,  -125,    78,    82,    84,    86,    91,    19,
    -125,  -125,  -125,  -125,  -125,  -125,    47,   101,    17,    96,
    -125,   106,   109,   111,   112,   113,   114,   115,   131,   132,
      87,   108,   133,   137,   138,   139,   140,  -125,   134,   141,
     142,   143,   144,  -125,   145,   146,   108,   108,   149,   150,
     147,  -125,  -125,   130,   148,    45,  -125,  -125,  -125,  -125,
     151,   152,   153,   154,   155,   156,   157,   158,   159,    18,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
     161,  -125,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   135,   172,   173,   174,   175,   176,  -125,   107,
     177,   178,   179,  -125,    95,   180,   181,   182,   183,   184,
    -125,   189,   190,   187,  -125,   193,   194,   195,   196,   198,
     197,   199,   108,   200,   201,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,   108,   108,   108,
     108,   108,   108,   108,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,   202,   203,   204,    81,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,   205,   206,   207,   192,   208,    41,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
     210,   211,  -125,   212,    -2,   213,   214,   215,   216,   218,
     219,   220,   221,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,   226,   227,   228,   225,  -125,   231,   232,   233,   235,
     236,   234,  -125,  -125,  -125,  -125,   194,   194,   194,  -125,
    -125,  -125,  -125,   238,  -125,  -125,  -125,  -125,  -125,   237,
     239,   240,  -125,   241,   242,   243,   230,   -51,  -125,   244,
    -125,  -125,  -125,  -125,   245,  -125,  -125,  -125,  -125,  -125,
    -125,   250,   247,  -125,  -125,  -125,   248,  -125,  -125
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    85,     1,     0,     0,     0,     0,     3,     5,     4,
       7,     0,     8,     0,     6,     9,     0,     0,     0,     0,
       0,     0,   150,     0,     0,   148,   149,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,    45,    48,    46,    47,
      49,    50,    57,    51,    52,    53,    54,    55,    56,    44,
      58,     0,   124,     0,     0,     0,     0,   119,   120,   121,
     122,   123,     0,    34,     0,     0,     0,     0,     0,     0,
      28,    29,    30,    31,    32,    33,     0,     0,     0,     0,
     147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,    27,    91,     0,     0,     0,    88,    89,    90,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,    98,    99,   101,   103,   100,   102,   105,   106,   104,
       0,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,    40,     0,
       0,     0,     0,   117,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,   151,    60,    74,    61,
      62,    63,    64,    65,    66,    67,    68,    10,    10,    10,
      10,    10,    10,    10,    12,    11,    69,    70,    71,    72,
      73,     0,     0,     0,     0,    78,    79,    80,    81,   125,
     126,   127,   137,     0,     0,     0,     0,     0,     0,   131,
     132,   134,   133,   135,   136,    38,    35,    36,    37,    39,
       0,     0,    86,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    13,    14,    15,    16,    17,    18,
      19,     0,     0,     0,     0,    77,     0,     0,     0,     0,
       0,     0,   130,    92,    93,   112,    20,    20,    20,    22,
      21,   115,   108,     0,   110,   113,   111,   114,   109,     0,
       0,     0,    76,     0,     0,     0,     0,     0,   144,     0,
     129,    23,    24,    25,     0,    84,    83,    82,   141,   139,
     138,     0,     0,   143,   140,   116,     0,   142,   145
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,   -24,  -101,  -124,    25,  -125,  -125,   120,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,   217,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,   -19,  -125,  -125,  -125,
    -125,  -125,  -125,    88,  -125,  -125,  -125,  -125,  -125,   122,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,   224,  -125,  -125,  -125,  -125,  -125,  -125,    27,  -125,
    -125,  -125,  -125,  -125,  -125,   -93,  -125,  -125,   254,  -125
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,   214,   215,   289,   290,     8,    79,    80,
      81,    82,    83,    84,    85,     9,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,   224,   225,   226,   227,   228,
      10,    11,   125,   126,   127,   128,    12,    13,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    14,
      66,    67,    68,    69,    70,    71,    72,   238,   239,   240,
     241,   242,   243,   244,   307,   308,    15,    24,    25,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     163,    27,    22,    28,   286,   287,   288,   306,    16,   -75,
      29,   322,    17,    62,    18,   176,   177,  -128,    30,   129,
      73,    23,    31,    19,    63,    64,    32,    33,    34,    20,
      74,    35,    36,   130,    37,    22,    38,    39,    86,   131,
      87,   132,   232,    75,    76,   233,   122,    21,   122,    40,
      88,    91,    77,   133,    23,    41,   254,    42,    78,   234,
      65,    92,   106,    89,   235,   123,    93,   123,   134,   135,
     136,   137,    94,    95,   112,   138,   150,    96,    62,   236,
     194,   120,  -128,   108,    27,   124,    28,   124,    97,    63,
      64,   261,   -75,    29,    98,   237,   232,   221,   114,   233,
     222,    30,   129,   281,   223,    31,    99,   183,   100,    32,
      33,    34,   101,   234,    35,    36,   130,    37,   235,    38,
      39,   102,   131,   221,   132,    65,   222,     2,   103,   104,
     223,   105,    40,   236,   109,   110,   133,    73,    41,   111,
      42,     3,   115,   274,     4,   161,   116,    74,   117,   237,
     118,   134,   135,   136,   137,   119,     5,     6,   138,   151,
      75,    76,   311,   312,   313,   152,   162,   -94,   153,    77,
     154,   155,   156,   157,   158,    78,   207,   208,   209,   210,
     211,   212,   213,   264,   265,   266,   267,   268,   269,   270,
     159,   160,   164,   162,   181,   169,   165,   166,   167,   121,
     170,   171,   172,   168,   175,   275,   174,   173,   178,   179,
     180,   255,   182,   184,   323,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   216,   217,   218,   219,   220,
     229,   230,   231,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   279,   256,   259,   257,   258,   260,   262,
     107,   195,     0,     0,   263,   282,   271,   272,   273,   276,
     277,   278,   280,   283,   284,   285,   291,   292,    90,   294,
     293,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     113,   304,   305,   306,   321,   309,   314,   310,     0,     0,
     315,     0,   316,   317,   318,   319,   320,   324,   325,   326,
     327,   328
};

static const yytype_int16 yycheck[] =
{
     101,     1,     1,     3,     6,     7,     8,    58,    61,     9,
      10,    62,    61,     1,    61,   116,   117,     5,    18,     1,
       1,    20,    22,    61,    12,    13,    26,    27,    28,    56,
      11,    31,    32,    15,    34,     1,    36,    37,    61,    21,
      61,    23,     1,    24,    25,     4,     1,    40,     1,    49,
      64,    64,    33,    35,    20,    55,    58,    57,    39,    18,
      48,    64,    62,    62,    23,    20,    64,    20,    50,    51,
      52,    53,    64,    64,    62,    57,    59,    64,     1,    38,
      62,    62,     5,     9,     1,    40,     3,    40,    64,    12,
      13,   192,     9,    10,    64,    54,     1,    16,     5,     4,
      19,    18,     1,    62,    23,    22,    64,    62,    64,    26,
      27,    28,    64,    18,    31,    32,    15,    34,    23,    36,
      37,    64,    21,    16,    23,    48,    19,     0,    64,    64,
      23,    64,    49,    38,    64,    64,    35,     1,    55,    64,
      57,    14,    64,    62,    17,    58,    64,    11,    64,    54,
      64,    50,    51,    52,    53,    64,    29,    30,    57,    63,
      24,    25,   286,   287,   288,    59,    58,    40,    59,    33,
      59,    59,    59,    59,    59,    39,    41,    42,    43,    44,
      45,    46,    47,   207,   208,   209,   210,   211,   212,   213,
      59,    59,    59,    58,    64,    61,    59,    59,    59,    79,
      59,    59,    59,    63,    58,   224,    61,    63,    59,    59,
      63,   186,    64,   125,   307,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    59,    59,
      63,    58,    58,    61,    59,    58,    60,    59,    59,    59,
      43,   139,    -1,    -1,    63,   238,    64,    64,    64,    64,
      64,    64,    64,    63,    63,    63,    63,    63,    24,    63,
      65,    63,    63,    63,    63,    59,    59,    59,    63,    58,
      66,    59,    59,    58,    64,    59,    58,    63,    -1,    -1,
      63,    -1,    63,    63,    63,    63,    63,    63,    63,    59,
      63,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    67,     0,    14,    17,    29,    30,    68,    73,    81,
     106,   107,   112,   113,   125,   142,    61,    61,    61,    61,
      56,    40,     1,    20,   143,   144,   145,     1,     3,    10,
      18,    22,    26,    27,    28,    31,    32,    34,    36,    37,
      49,    55,    57,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,     1,    12,    13,    48,   126,   127,   128,   129,
     130,   131,   132,     1,    11,    24,    25,    33,    39,    74,
      75,    76,    77,    78,    79,    80,    61,    61,    64,    62,
     144,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    62,    83,     9,    64,
      64,    64,    62,   127,     5,    64,    64,    64,    64,    64,
      62,    75,     1,    20,    40,   108,   109,   110,   111,     1,
      15,    21,    23,    35,    50,    51,    52,    53,    57,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      59,    63,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    58,    58,    70,    59,    59,    59,    59,    63,    61,
      59,    59,    59,    63,    61,    58,    70,    70,    59,    59,
      63,    64,    64,    62,   109,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    62,   115,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    41,    42,    43,
      44,    45,    46,    47,    69,    70,    63,    63,    63,    63,
      63,    16,    19,    23,   101,   102,   103,   104,   105,    63,
      63,    63,     1,     4,    18,    23,    38,    54,   133,   134,
     135,   136,   137,   138,   139,    63,    63,    63,    63,    63,
      59,    59,    63,    58,    58,    72,    59,    60,    59,    58,
      59,    70,    59,    63,    69,    69,    69,    69,    69,    69,
      69,    64,    64,    64,    62,   102,    64,    64,    64,    61,
      64,    62,   134,    63,    63,    63,     6,     7,     8,    71,
      72,    63,    63,    65,    63,    63,    63,    63,    63,    59,
      59,    59,    63,    58,    59,    59,    58,   140,   141,    59,
      63,    71,    71,    71,    58,    63,    63,    63,    63,    63,
      63,    64,    62,   141,    63,    63,    59,    63,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    68,    68,    68,    68,    68,    68,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    71,    72,    72,    72,    72,    73,    74,    74,    75,
      75,    75,    75,    75,    75,    76,    77,    78,    79,    80,
      81,    82,    82,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,   100,    99,   101,   101,   102,
     102,   102,   103,   104,   105,   107,   106,   108,   108,   109,
     109,   109,   110,   111,   113,   112,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   126,
     127,   127,   127,   127,   127,   128,   129,   130,   132,   131,
     133,   133,   134,   134,   134,   134,   134,   134,   135,   136,
     137,   138,   139,   140,   140,   141,   142,   143,   143,   144,
     144,   145
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       0,     1,     2,     3,     3,     3,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     5,     2,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     5,     2,     1,     4,     5,     2,     1,     1,
       1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 10:
#line 113 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 1581 "config-parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 114 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1587 "config-parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 115 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1593 "config-parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 116 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 1599 "config-parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 117 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 1605 "config-parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 118 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 1611 "config-parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 119 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 1617 "config-parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 120 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 1623 "config-parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 121 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 1629 "config-parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 124 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 1635 "config-parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 125 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1641 "config-parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 126 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1647 "config-parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 127 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 1653 "config-parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 128 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 1659 "config-parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 146 "config-parser.y" /* yacc.c:1646  */
    {
   OptionsItem->negcache = (yyvsp[-1].number);
}
#line 1667 "config-parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 151 "config-parser.y" /* yacc.c:1646  */
    {
   OptionsItem->negcache_rebuild = (yyvsp[-1].number);
}
#line 1675 "config-parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 156 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OptionsItem->pidfile);
   OptionsItem->pidfile = xstrdup((yyvsp[-1].string));
}
#line 1684 "config-parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 162 "config-parser.y" /* yacc.c:1646  */
    {
   OptionsItem->dns_fdlimit = (yyvsp[-1].number);
}
#line 1692 "config-parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 167 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OptionsItem->scanlog);
   OptionsItem->scanlog = xstrdup((yyvsp[-1].string));
}
#line 1701 "config-parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 198 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->away);
   IRCItem->away = xstrdup((yyvsp[-1].string));
}
#line 1710 "config-parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 204 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->kline);
   IRCItem->kline = xstrdup((yyvsp[-1].string));
}
#line 1719 "config-parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 210 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->mode);
   IRCItem->mode = xstrdup((yyvsp[-1].string));
}
#line 1728 "config-parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 216 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->nick);
   IRCItem->nick = xstrdup((yyvsp[-1].string));
}
#line 1737 "config-parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 222 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->nickserv);
   IRCItem->nickserv = xstrdup((yyvsp[-1].string));
}
#line 1746 "config-parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 228 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->oper);
   IRCItem->oper = xstrdup((yyvsp[-1].string));
}
#line 1755 "config-parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 234 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->password);
   IRCItem->password = xstrdup((yyvsp[-1].string));
}
#line 1764 "config-parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 240 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   node = node_create(xstrdup((yyvsp[-1].string)));

   list_add(IRCItem->performs, node);
}
#line 1775 "config-parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 248 "config-parser.y" /* yacc.c:1646  */
    {
   IRCItem->port = (yyvsp[-1].number);
}
#line 1783 "config-parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 253 "config-parser.y" /* yacc.c:1646  */
    {
   IRCItem->readtimeout = (yyvsp[-1].number);
}
#line 1791 "config-parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 258 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->realname);
   IRCItem->realname = xstrdup((yyvsp[-1].string));
}
#line 1800 "config-parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 264 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->server);
   IRCItem->server = xstrdup((yyvsp[-1].string));
}
#line 1809 "config-parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 270 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->username);
   IRCItem->username = xstrdup((yyvsp[-1].string));
}
#line 1818 "config-parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 276 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->vhost);
   IRCItem->vhost = xstrdup((yyvsp[-1].string));
}
#line 1827 "config-parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 282 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->connregex);
   IRCItem->connregex = xstrdup((yyvsp[-1].string));
}
#line 1836 "config-parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 291 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   struct ChannelConf *item;

   item = xcalloc(sizeof *item);

   item->name = xstrdup("");
   item->key = xstrdup("");
   item->invite = xstrdup("");

   node = node_create(item);
   list_add(IRCItem->channels, node);

   tmp = item;
}
#line 1856 "config-parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 316 "config-parser.y" /* yacc.c:1646  */
    {
   struct ChannelConf *item = tmp;

   MyFree(item->name);
   item->name = xstrdup((yyvsp[-1].string));
}
#line 1867 "config-parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 324 "config-parser.y" /* yacc.c:1646  */
    {
   struct ChannelConf *item = tmp;

   MyFree(item->key);
   item->key = xstrdup((yyvsp[-1].string));
}
#line 1878 "config-parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 332 "config-parser.y" /* yacc.c:1646  */
    {
   struct ChannelConf *item = tmp;

   MyFree(item->invite);
   item->invite = xstrdup((yyvsp[-1].string));
}
#line 1889 "config-parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 342 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   struct UserConf *item;

   item = xcalloc(sizeof *item);

   item->masks = list_create();
   item->scanners = list_create();

   node = node_create(item);
   list_add(UserItemList, node);

   tmp = item; 
}
#line 1908 "config-parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 366 "config-parser.y" /* yacc.c:1646  */
    {
   struct UserConf *item = tmp;
   node_t *node;

   node = node_create(xstrdup((yyvsp[-1].string)));

   list_add(item->masks, node);
}
#line 1921 "config-parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 376 "config-parser.y" /* yacc.c:1646  */
    {
   struct UserConf *item = tmp;
   node_t *node;

   node = node_create(xstrdup((yyvsp[-1].string)));

   list_add(item->scanners, node);
}
#line 1934 "config-parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 388 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   struct ScannerConf *item, *olditem;

   item = xcalloc(sizeof *item);

   /* Setup ScannerConf defaults */
   item->name = xstrdup("undefined");

	if(LIST_SIZE(ScannerItemList) > 0)
	{
	   olditem = ScannerItemList->tail->data;

		item->vhost = xstrdup(olditem->vhost);
		item->fd = olditem->fd;
		item->target_ip = xstrdup(olditem->target_ip);
		item->target_port = olditem->target_port;
		item->timeout = olditem->timeout;
		item->max_read = olditem->max_read;

		item->target_string = olditem->target_string;
		item->target_string_created = 0;
	}
	else
	{
	   item->vhost = xstrdup("0.0.0.0");
      item->fd = 512;
      item->target_ip = xstrdup("127.0.0.1");
      item->target_port = 6667;
      item->timeout = 30;
      item->max_read = 4096;
		
		item->target_string = list_create();
		item->target_string_created = 1;
	}
	
   item->protocols = list_create();

   node = node_create(item);

   list_add(ScannerItemList, node);
   tmp = item;
}
#line 1982 "config-parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 448 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = tmp;
   MyFree(item->name);
   item->name = xstrdup((yyvsp[-1].string));
}
#line 1992 "config-parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 455 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = tmp;
   MyFree(item->vhost);
   item->vhost = xstrdup((yyvsp[-1].string));
}
#line 2002 "config-parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 462 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = tmp;
   MyFree(item->target_ip);
   item->target_ip = xstrdup((yyvsp[-1].string));
}
#line 2012 "config-parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 469 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = tmp;

   node_t *node;
   node = node_create((yyvsp[-1].string));

	if(item->target_string_created == 0)
	{
	   item->target_string = list_create();
		item->target_string_created = 1;
	}

   list_add(item->target_string, node);
}
#line 2031 "config-parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 485 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = tmp;
   item->fd = (yyvsp[-1].number);
}
#line 2040 "config-parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 491 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = tmp;
   item->target_port = (yyvsp[-1].number);
}
#line 2049 "config-parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 497 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = tmp;
   item->timeout = (yyvsp[-1].number);
}
#line 2058 "config-parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 503 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = tmp;
   item->max_read = (yyvsp[-1].number);
}
#line 2067 "config-parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 509 "config-parser.y" /* yacc.c:1646  */
    {
   struct ProtocolConf *item;
   struct ScannerConf  *item2;

   node_t *node;
 
   item = xcalloc(sizeof *item);
   item->type = (yyvsp[-3].number);
   item->port = (yyvsp[-1].number);

   item2 = tmp;

   node = node_create(item);
   list_add(item2->protocols, node);
}
#line 2087 "config-parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 539 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OpmItem->dnsbl_from);
   OpmItem->dnsbl_from = xstrdup((yyvsp[-1].string));
}
#line 2096 "config-parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 545 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OpmItem->dnsbl_to);
   OpmItem->dnsbl_to = xstrdup((yyvsp[-1].string));
}
#line 2105 "config-parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 551 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OpmItem->sendmail);
   OpmItem->sendmail = xstrdup((yyvsp[-1].string));
}
#line 2114 "config-parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 559 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   struct BlacklistConf *item;

   item = xcalloc(sizeof *item);

   item->name = xstrdup("");
   item->kline = xstrdup("");
   item->ban_unknown = 0;
   item->type = A_BITMASK;
   item->reply = list_create();

   node = node_create(item);
   list_add(OpmItem->blacklists, node);

   tmp = item;
}
#line 2136 "config-parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 588 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;

   MyFree(item->name);
   item->name = xstrdup((yyvsp[-1].string));
}
#line 2147 "config-parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 595 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;

   MyFree(item->kline);
   item->kline = xstrdup((yyvsp[-1].string));
}
#line 2158 "config-parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 602 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;
   
   if(strcmp("A record bitmask", (yyvsp[-1].string)) == 0)
      item->type = A_BITMASK;
   else if(strcmp("A record reply", (yyvsp[-1].string)) == 0)
      item->type = A_REPLY;
   else
      yyerror("Unknown blacklist type defined");
}
#line 2173 "config-parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 613 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;

   item->ban_unknown = (yyvsp[-1].number);
}
#line 2183 "config-parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 625 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistReplyConf *item;
   struct BlacklistConf *blacklist = tmp;
   node_t *node;

   item = xcalloc(sizeof *item);

   item->number = (yyvsp[-3].number);
   item->type = xstrdup((yyvsp[-1].string));

   node = node_create(item);
   list_add(blacklist->reply, node);
}
#line 2201 "config-parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 651 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   node = node_create(xstrdup((yyvsp[-1].string)));

   list_add(ExemptItem->masks, node);
}
#line 2212 "config-parser.c" /* yacc.c:1646  */
    break;


#line 2216 "config-parser.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
  return yyresult;
}
#line 658 "config-parser.y" /* yacc.c:1906  */


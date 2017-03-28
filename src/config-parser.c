/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 21 "config-parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>

#include "memory.h"
#include "config.h"

int yylex(void);

static void *tmp;  /* Variable to temporarily hold nodes before insertion to list */


#line 80 "config-parser.c" /* yacc.c:339  */

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
    ADDRESS_FAMILY = 258,
    AWAY = 259,
    BAN_UNKNOWN = 260,
    BLACKLIST = 261,
    BYTES = 262,
    KBYTES = 263,
    MBYTES = 264,
    CHANNEL = 265,
    COMMAND_INTERVAL = 266,
    COMMAND_QUEUE_SIZE = 267,
    COMMAND_TIMEOUT = 268,
    CONNREGEX = 269,
    DNS_FDLIMIT = 270,
    DNS_TIMEOUT = 271,
    DNSBL_FROM = 272,
    DNSBL_TO = 273,
    EXEMPT = 274,
    FD = 275,
    INVITE = 276,
    IRC = 277,
    KLINE = 278,
    KEY = 279,
    MASK = 280,
    MAX_READ = 281,
    MODE = 282,
    NAME = 283,
    NEGCACHE = 284,
    NEGCACHE_REBUILD = 285,
    NICK = 286,
    NICKSERV = 287,
    NOTICE = 288,
    OPER = 289,
    OPM = 290,
    OPTIONS = 291,
    PASSWORD = 292,
    PERFORM = 293,
    PIDFILE = 294,
    PORT = 295,
    PROTOCOL = 296,
    READTIMEOUT = 297,
    REALNAME = 298,
    RECONNECTINTERVAL = 299,
    REPLY = 300,
    SCANLOG = 301,
    SCANNER = 302,
    SECONDS = 303,
    MINUTES = 304,
    HOURS = 305,
    DAYS = 306,
    WEEKS = 307,
    MONTHS = 308,
    YEARS = 309,
    SENDMAIL = 310,
    SERVER = 311,
    TARGET_IP = 312,
    TARGET_PORT = 313,
    TARGET_STRING = 314,
    TIMEOUT = 315,
    TYPE = 316,
    USERNAME = 317,
    USER = 318,
    VHOST = 319,
    NUMBER = 320,
    STRING = 321,
    PROTOCOLTYPE = 322
  };
#endif
/* Tokens.  */
#define ADDRESS_FAMILY 258
#define AWAY 259
#define BAN_UNKNOWN 260
#define BLACKLIST 261
#define BYTES 262
#define KBYTES 263
#define MBYTES 264
#define CHANNEL 265
#define COMMAND_INTERVAL 266
#define COMMAND_QUEUE_SIZE 267
#define COMMAND_TIMEOUT 268
#define CONNREGEX 269
#define DNS_FDLIMIT 270
#define DNS_TIMEOUT 271
#define DNSBL_FROM 272
#define DNSBL_TO 273
#define EXEMPT 274
#define FD 275
#define INVITE 276
#define IRC 277
#define KLINE 278
#define KEY 279
#define MASK 280
#define MAX_READ 281
#define MODE 282
#define NAME 283
#define NEGCACHE 284
#define NEGCACHE_REBUILD 285
#define NICK 286
#define NICKSERV 287
#define NOTICE 288
#define OPER 289
#define OPM 290
#define OPTIONS 291
#define PASSWORD 292
#define PERFORM 293
#define PIDFILE 294
#define PORT 295
#define PROTOCOL 296
#define READTIMEOUT 297
#define REALNAME 298
#define RECONNECTINTERVAL 299
#define REPLY 300
#define SCANLOG 301
#define SCANNER 302
#define SECONDS 303
#define MINUTES 304
#define HOURS 305
#define DAYS 306
#define WEEKS 307
#define MONTHS 308
#define YEARS 309
#define SENDMAIL 310
#define SERVER 311
#define TARGET_IP 312
#define TARGET_PORT 313
#define TARGET_STRING 314
#define TIMEOUT 315
#define TYPE 316
#define USERNAME 317
#define USER 318
#define VHOST 319
#define NUMBER 320
#define STRING 321
#define PROTOCOLTYPE 322

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 91 "config-parser.y" /* yacc.c:355  */

  int number;
  char *string;

#line 259 "config-parser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 276 "config-parser.c" /* yacc.c:358  */

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
#define YYLAST   365

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  364

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

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
       2,     2,     2,     2,     2,     2,     2,     2,    72,    70,
       2,    71,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,    69,     2,     2,     2,     2,
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
      65,    66,    67
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   107,   110,   111,   112,   113,   114,   115,
     117,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     128,   128,   129,   130,   131,   132,   137,   139,   140,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   153,
     158,   163,   169,   174,   179,   185,   190,   195,   202,   204,
     205,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     227,   233,   239,   245,   251,   257,   263,   269,   277,   285,
     290,   295,   300,   306,   312,   318,   324,   333,   333,   349,
     350,   352,   353,   354,   356,   364,   372,   383,   383,   398,
     399,   401,   402,   403,   405,   415,   428,   428,   471,   472,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     485,   493,   501,   509,   525,   532,   539,   546,   553,   571,
     573,   574,   576,   577,   578,   579,   580,   582,   588,   594,
     603,   603,   622,   623,   625,   626,   627,   628,   629,   630,
     631,   633,   641,   653,   661,   673,   680,   682,   683,   685,
     701,   703,   704,   706,   707,   709
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADDRESS_FAMILY", "AWAY", "BAN_UNKNOWN",
  "BLACKLIST", "BYTES", "KBYTES", "MBYTES", "CHANNEL", "COMMAND_INTERVAL",
  "COMMAND_QUEUE_SIZE", "COMMAND_TIMEOUT", "CONNREGEX", "DNS_FDLIMIT",
  "DNS_TIMEOUT", "DNSBL_FROM", "DNSBL_TO", "EXEMPT", "FD", "INVITE", "IRC",
  "KLINE", "KEY", "MASK", "MAX_READ", "MODE", "NAME", "NEGCACHE",
  "NEGCACHE_REBUILD", "NICK", "NICKSERV", "NOTICE", "OPER", "OPM",
  "OPTIONS", "PASSWORD", "PERFORM", "PIDFILE", "PORT", "PROTOCOL",
  "READTIMEOUT", "REALNAME", "RECONNECTINTERVAL", "REPLY", "SCANLOG",
  "SCANNER", "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS", "MONTHS",
  "YEARS", "SENDMAIL", "SERVER", "TARGET_IP", "TARGET_PORT",
  "TARGET_STRING", "TIMEOUT", "TYPE", "USERNAME", "USER", "VHOST",
  "NUMBER", "STRING", "PROTOCOLTYPE", "'{'", "'}'", "';'", "'='", "':'",
  "$accept", "config", "config_items", "timespec_", "timespec",
  "sizespec_", "sizespec", "options_entry", "options_items",
  "options_item", "options_negcache", "options_negcache_rebuild",
  "options_pidfile", "options_dns_fdlimit", "options_dns_timeout",
  "options_scanlog", "options_command_queue_size",
  "options_command_interval", "options_command_timeout", "irc_entry",
  "irc_items", "irc_item", "irc_away", "irc_kline", "irc_mode", "irc_nick",
  "irc_nickserv", "irc_oper", "irc_password", "irc_perform", "irc_notice",
  "irc_port", "irc_readtimeout", "irc_reconnectinterval", "irc_realname",
  "irc_server", "irc_username", "irc_vhost", "irc_connregex",
  "channel_entry", "$@1", "channel_items", "channel_item", "channel_name",
  "channel_key", "channel_invite", "user_entry", "$@2", "user_items",
  "user_item", "user_mask", "user_scanner", "scanner_entry", "$@3",
  "scanner_items", "scanner_item", "scanner_name", "scanner_vhost",
  "scanner_target_ip", "scanner_target_string", "scanner_fd",
  "scanner_target_port", "scanner_timeout", "scanner_max_read",
  "scanner_protocol", "opm_entry", "opm_items", "opm_item",
  "opm_dnsbl_from", "opm_dnsbl_to", "opm_sendmail", "opm_blacklist_entry",
  "$@4", "blacklist_items", "blacklist_item", "blacklist_name",
  "blacklist_address_family", "blacklist_kline", "blacklist_type",
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
     315,   316,   317,   318,   319,   320,   321,   322,   123,   125,
      59,    61,    58
};
# endif

#define YYPACT_NINF -296

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-296)))

#define YYTABLE_NINF -141

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -296,   168,  -296,   -60,   -57,   -55,   -50,  -296,  -296,  -296,
    -296,   -35,  -296,    -6,  -296,  -296,    21,   116,   115,   196,
     -23,   -21,  -296,   -13,     4,  -296,  -296,  -296,   -11,    -1,
       1,    12,    14,    18,    25,    26,    27,    30,    44,    47,
      48,    52,    58,    63,    64,     0,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,    55,  -296,    66,    69,    70,
      73,  -296,  -296,  -296,  -296,  -296,    42,  -296,    74,    80,
      81,    86,    94,    96,    98,   100,   102,    38,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,     5,   135,
       9,    -4,  -296,    40,   108,   109,   111,   113,   117,   119,
     120,   122,   125,     6,   131,   132,   131,   134,   136,   139,
     112,  -296,   133,   144,   147,   148,   146,  -296,   149,   131,
     153,   131,   154,   131,   131,   131,   155,   157,   150,  -296,
    -296,   110,   163,    34,  -296,  -296,  -296,  -296,   165,   166,
     167,   169,   170,   172,   173,   174,   175,    35,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,   177,  -296,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    60,   189,   190,   191,   192,   193,   194,  -296,   103,
     195,   197,   198,  -296,   161,   199,   200,   201,   202,   203,
     204,   205,   206,   207,  -296,   158,   212,   209,  -296,   215,
     216,   217,   218,   220,   219,   221,   131,   222,   223,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,   131,   131,   131,   131,   131,   131,   131,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,   211,   224,   225,
     -12,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,   226,
     227,   228,   229,   171,   230,    77,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,   232,   233,  -296,   234,    79,   235,   236,   237,
     238,   240,   241,   242,   243,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,   248,   249,   250,   247,  -296,   253,   254,
     255,   256,   258,   259,   257,  -296,  -296,  -296,  -296,   216,
     216,   216,  -296,  -296,  -296,  -296,   261,  -296,  -296,  -296,
    -296,  -296,   260,   262,   263,  -296,   264,   265,   266,   267,
     268,   -62,  -296,   270,  -296,  -296,  -296,  -296,   271,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,   272,   273,  -296,  -296,
    -296,   274,  -296,  -296
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    97,     1,     0,     0,     0,     0,     3,     5,     4,
       7,     0,     8,     0,     6,     9,     0,     0,     0,     0,
       0,     0,   164,     0,     0,   162,   163,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,    53,    56,
      54,    55,    57,    58,    66,    67,    59,    60,    61,    62,
      63,    64,    65,    52,    68,     0,   136,     0,     0,     0,
       0,   131,   132,   133,   134,   135,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,     0,     0,
       0,     0,   161,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,     0,     0,     0,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
     103,     0,     0,     0,   100,   101,   102,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   109,   110,
     111,   113,   115,   112,   114,   117,   118,   116,     0,   160,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,   129,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,     0,    99,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
     165,    70,    86,    71,    72,    73,    74,    78,    75,    76,
      77,    79,    10,    10,    10,    10,    10,    10,    10,    12,
      11,    80,    82,    81,    83,    84,    85,     0,     0,     0,
       0,    90,    91,    92,    93,   137,   138,   139,   150,     0,
       0,     0,     0,     0,     0,     0,   143,   144,   145,   147,
     146,   148,   149,    46,    45,    47,    42,    43,    39,    40,
      41,    44,     0,     0,    98,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,   107,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,   142,   104,   105,   124,    20,
      20,    20,    22,    21,   127,   120,     0,   122,   125,   123,
     126,   121,     0,     0,     0,    88,     0,     0,     0,     0,
       0,     0,   158,     0,   141,    23,    24,    25,     0,    96,
      95,    94,   152,   155,   153,   151,     0,     0,   157,   154,
     128,     0,   156,   159
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -296,  -296,  -296,    -5,  -114,  -295,    56,  -296,  -296,   244,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,   245,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,    39,  -296,  -296,  -296,  -296,  -296,  -296,   151,
    -296,  -296,  -296,  -296,  -296,   208,  -296,  -296,  -296,  -296,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,   275,  -296,  -296,
    -296,  -296,  -296,  -296,    59,  -296,  -296,  -296,  -296,  -296,
    -296,  -296,   -49,  -296,  -296,   283,  -296
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,   239,   240,   322,   323,     8,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,     9,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,   250,   251,   252,   253,   254,    10,    11,   143,   144,
     145,   146,    12,    13,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,    14,    70,    71,    72,    73,
      74,    75,    76,   265,   266,   267,   268,   269,   270,   271,
     272,   341,   342,    15,    24,    25,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     182,    27,   184,   340,    28,    22,   140,   357,    16,   247,
     -87,    17,   248,    18,    29,   195,   249,   197,    19,   199,
     200,   201,    22,    30,   345,   346,   347,    31,    20,    23,
     141,    32,    33,    34,    35,   140,   147,    36,    37,    77,
      38,    21,    39,    40,    41,    98,    23,    99,   128,    78,
      79,    80,   142,    81,    82,   148,    42,   306,   100,   141,
     103,   149,    43,   150,    44,   122,   169,    83,    84,   120,
     104,   180,   105,   101,    66,   168,   151,    85,   258,  -140,
     259,   142,   260,   106,    86,   107,   319,   320,   321,   108,
      67,    68,   152,   153,   154,   155,   109,   110,   111,   156,
     261,   112,   293,   207,   218,   262,   170,   138,   232,   233,
     234,   235,   236,   237,   238,   113,    66,    27,   114,   115,
      28,  -140,   263,   116,   247,   181,   -87,   248,    69,   117,
      29,   249,    67,    68,   118,   119,   147,   123,   264,    30,
     124,   125,   126,    31,   286,   129,   314,    32,    33,    34,
      35,   130,   131,    36,    37,   148,    38,   132,    39,    40,
      41,   149,   258,   150,   259,   133,   260,   134,     2,   135,
      69,   136,    42,   137,   171,   172,   151,   173,    43,   174,
      44,   205,   188,   175,   261,   176,   177,     3,   178,   262,
       4,   179,   152,   153,   154,   155,   181,    77,   183,   156,
     185,   189,   186,     5,     6,   187,   263,    78,    79,    80,
     190,    81,    82,   191,   192,  -106,   193,   194,   196,   198,
     204,   202,   264,   203,   282,    83,    84,   296,   297,   298,
     299,   300,   301,   302,   206,    85,   209,   210,   211,   312,
     212,   213,    86,   214,   215,   216,   217,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   241,
     242,   243,   244,   245,   246,   255,   287,   256,   257,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   283,   284,
     285,   286,   303,   288,   291,   289,   290,   292,   294,   307,
     121,     0,   358,   295,   208,   304,   305,   308,   309,   310,
     311,   313,   316,   317,   318,   324,   325,   102,   327,   326,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
       0,   338,   339,   340,   315,   343,   348,   344,     0,     0,
     349,   139,   350,   351,   352,   353,   354,   355,   361,   356,
     359,   360,     0,   362,   363,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219
};

static const yytype_int16 yycheck[] =
{
     114,     1,   116,    65,     4,     1,     1,    69,    68,    21,
      10,    68,    24,    68,    14,   129,    28,   131,    68,   133,
     134,   135,     1,    23,   319,   320,   321,    27,    63,    25,
      25,    31,    32,    33,    34,     1,     1,    37,    38,     1,
      40,    47,    42,    43,    44,    68,    25,    68,     6,    11,
      12,    13,    47,    15,    16,    20,    56,    69,    71,    25,
      71,    26,    62,    28,    64,    10,    70,    29,    30,    69,
      71,    65,    71,    69,     1,    66,    41,    39,     1,     6,
       3,    47,     5,    71,    46,    71,     7,     8,     9,    71,
      17,    18,    57,    58,    59,    60,    71,    71,    71,    64,
      23,    71,   216,    69,    69,    28,    66,    69,    48,    49,
      50,    51,    52,    53,    54,    71,     1,     1,    71,    71,
       4,     6,    45,    71,    21,    65,    10,    24,    55,    71,
      14,    28,    17,    18,    71,    71,     1,    71,    61,    23,
      71,    71,    69,    27,    65,    71,    69,    31,    32,    33,
      34,    71,    71,    37,    38,    20,    40,    71,    42,    43,
      44,    26,     1,    28,     3,    71,     5,    71,     0,    71,
      55,    71,    56,    71,    66,    66,    41,    66,    62,    66,
      64,    71,    70,    66,    23,    66,    66,    19,    66,    28,
      22,    66,    57,    58,    59,    60,    65,     1,    66,    64,
      66,    68,    66,    35,    36,    66,    45,    11,    12,    13,
      66,    15,    16,    66,    66,    47,    70,    68,    65,    65,
      70,    66,    61,    66,    66,    29,    30,   232,   233,   234,
     235,   236,   237,   238,    71,    39,    71,    71,    71,    68,
      71,    71,    46,    71,    71,    71,    71,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,   210,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    66,    70,
      65,    65,    71,    66,    65,    67,    66,    66,    66,   250,
      45,    -1,   341,    70,   143,    71,    71,    71,    71,    71,
      71,    71,    70,    70,    70,    70,    70,    24,    70,    72,
      70,    70,    70,    70,    66,    66,    66,    70,    65,    65,
      -1,    66,    66,    65,   265,    66,    65,    70,    -1,    -1,
      70,    87,    70,    70,    70,    70,    70,    70,    66,    71,
      70,    70,    -1,    70,    70,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    74,     0,    19,    22,    35,    36,    75,    80,    92,
     119,   120,   125,   126,   138,   156,    68,    68,    68,    68,
      63,    47,     1,    25,   157,   158,   159,     1,     4,    14,
      23,    27,    31,    32,    33,    34,    37,    38,    40,    42,
      43,    44,    56,    62,    64,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     1,    17,    18,    55,
     139,   140,   141,   142,   143,   144,   145,     1,    11,    12,
      13,    15,    16,    29,    30,    39,    46,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    68,    68,
      71,    69,   158,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      69,    94,    10,    71,    71,    71,    69,   140,     6,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    69,    82,
       1,    25,    47,   121,   122,   123,   124,     1,    20,    26,
      28,    41,    57,    58,    59,    60,    64,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    66,    70,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      65,    65,    77,    66,    77,    66,    66,    66,    70,    68,
      66,    66,    66,    70,    68,    77,    65,    77,    65,    77,
      77,    77,    66,    66,    70,    71,    71,    69,   122,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    69,   128,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    48,    49,    50,    51,    52,    53,    54,    76,
      77,    70,    70,    70,    70,    70,    70,    21,    24,    28,
     114,   115,   116,   117,   118,    70,    70,    70,     1,     3,
       5,    23,    28,    45,    61,   146,   147,   148,   149,   150,
     151,   152,   153,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    66,    66,    70,    65,    65,    79,    66,    67,
      66,    65,    66,    77,    66,    70,    76,    76,    76,    76,
      76,    76,    76,    71,    71,    71,    69,   115,    71,    71,
      71,    71,    68,    71,    69,   147,    70,    70,    70,     7,
       8,     9,    78,    79,    70,    70,    72,    70,    70,    70,
      70,    70,    66,    66,    66,    70,    65,    65,    66,    66,
      65,   154,   155,    66,    70,    78,    78,    78,    65,    70,
      70,    70,    70,    70,    70,    70,    71,    69,   155,    70,
      70,    66,    70,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    75,    75,    75,    75,    75,    75,
      76,    76,    77,    77,    77,    77,    77,    77,    77,    77,
      78,    78,    79,    79,    79,    79,    80,    81,    81,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      93,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   113,   112,   114,
     114,   115,   115,   115,   116,   117,   118,   120,   119,   121,
     121,   122,   122,   122,   123,   124,   126,   125,   127,   127,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   139,   140,   140,   140,   140,   140,   141,   142,   143,
     145,   144,   146,   146,   147,   147,   147,   147,   147,   147,
     147,   148,   149,   150,   151,   152,   153,   154,   154,   155,
     156,   157,   157,   158,   158,   159
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       0,     1,     2,     3,     3,     3,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     4,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     6,     5,
       2,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     5,     2,     1,     4,
       5,     2,     1,     1,     1,     4
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
#line 117 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 1632 "config-parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 118 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1638 "config-parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 119 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1644 "config-parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 120 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 1650 "config-parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 121 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 1656 "config-parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 122 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 1662 "config-parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 123 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 1668 "config-parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 124 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 1674 "config-parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 125 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 1680 "config-parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 128 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 1686 "config-parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 129 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1692 "config-parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 130 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1698 "config-parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 131 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 1704 "config-parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 132 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 1710 "config-parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 154 "config-parser.y" /* yacc.c:1646  */
    {
  OptionsItem->negcache = (yyvsp[-1].number);
}
#line 1718 "config-parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 159 "config-parser.y" /* yacc.c:1646  */
    {
  OptionsItem->negcache_rebuild = (yyvsp[-1].number);
}
#line 1726 "config-parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 164 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(OptionsItem->pidfile);
  OptionsItem->pidfile = xstrdup((yyvsp[-1].string));
}
#line 1735 "config-parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 170 "config-parser.y" /* yacc.c:1646  */
    {
  OptionsItem->dns_fdlimit = (yyvsp[-1].number);
}
#line 1743 "config-parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 175 "config-parser.y" /* yacc.c:1646  */
    {
  OptionsItem->dns_timeout = (yyvsp[-1].number);
}
#line 1751 "config-parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 180 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(OptionsItem->scanlog);
  OptionsItem->scanlog = xstrdup((yyvsp[-1].string));
}
#line 1760 "config-parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 186 "config-parser.y" /* yacc.c:1646  */
    {
  OptionsItem->command_queue_size = (yyvsp[-1].number);
}
#line 1768 "config-parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 191 "config-parser.y" /* yacc.c:1646  */
    {
  OptionsItem->command_interval = (yyvsp[-1].number);
}
#line 1776 "config-parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 196 "config-parser.y" /* yacc.c:1646  */
    {
  OptionsItem->command_timeout = (yyvsp[-1].number);
}
#line 1784 "config-parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 228 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->away);
  IRCItem->away = xstrdup((yyvsp[-1].string));
}
#line 1793 "config-parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 234 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->kline);
  IRCItem->kline = xstrdup((yyvsp[-1].string));
}
#line 1802 "config-parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 240 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->mode);
  IRCItem->mode = xstrdup((yyvsp[-1].string));
}
#line 1811 "config-parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 246 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->nick);
  IRCItem->nick = xstrdup((yyvsp[-1].string));
}
#line 1820 "config-parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 252 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->nickserv);
  IRCItem->nickserv = xstrdup((yyvsp[-1].string));
}
#line 1829 "config-parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 258 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->oper);
  IRCItem->oper = xstrdup((yyvsp[-1].string));
}
#line 1838 "config-parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 264 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->password);
  IRCItem->password = xstrdup((yyvsp[-1].string));
}
#line 1847 "config-parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 270 "config-parser.y" /* yacc.c:1646  */
    {
  node_t *node;

  node = node_create(xstrdup((yyvsp[-1].string)));
  list_add(IRCItem->performs, node);
}
#line 1858 "config-parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 278 "config-parser.y" /* yacc.c:1646  */
    {
  node_t *node;

  node = node_create(xstrdup((yyvsp[-1].string)));
  list_add(IRCItem->notices, node);
}
#line 1869 "config-parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 286 "config-parser.y" /* yacc.c:1646  */
    {
  IRCItem->port = (yyvsp[-1].number);
}
#line 1877 "config-parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 291 "config-parser.y" /* yacc.c:1646  */
    {
  IRCItem->readtimeout = (yyvsp[-1].number);
}
#line 1885 "config-parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 296 "config-parser.y" /* yacc.c:1646  */
    {
  IRCItem->reconnectinterval = (yyvsp[-1].number);
}
#line 1893 "config-parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 301 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->realname);
  IRCItem->realname = xstrdup((yyvsp[-1].string));
}
#line 1902 "config-parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 307 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->server);
  IRCItem->server = xstrdup((yyvsp[-1].string));
}
#line 1911 "config-parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 313 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->username);
  IRCItem->username = xstrdup((yyvsp[-1].string));
}
#line 1920 "config-parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 319 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->vhost);
  IRCItem->vhost = xstrdup((yyvsp[-1].string));
}
#line 1929 "config-parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 325 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->connregex);
  IRCItem->connregex = xstrdup((yyvsp[-1].string));
}
#line 1938 "config-parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 333 "config-parser.y" /* yacc.c:1646  */
    {
  node_t *node;
  struct ChannelConf *item;

  item = xcalloc(sizeof(*item));
  item->name = xstrdup("");
  item->key = xstrdup("");
  item->invite = xstrdup("");

  node = node_create(item);

  list_add(IRCItem->channels, node);
  tmp = item;
}
#line 1957 "config-parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 357 "config-parser.y" /* yacc.c:1646  */
    {
  struct ChannelConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 1968 "config-parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 365 "config-parser.y" /* yacc.c:1646  */
    {
  struct ChannelConf *item = tmp;

  xfree(item->key);
  item->key = xstrdup((yyvsp[-1].string));
}
#line 1979 "config-parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 373 "config-parser.y" /* yacc.c:1646  */
    {
  struct ChannelConf *item = tmp;

  xfree(item->invite);
  item->invite = xstrdup((yyvsp[-1].string));
}
#line 1990 "config-parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 383 "config-parser.y" /* yacc.c:1646  */
    {
  node_t *node;
  struct UserConf *item;

  item = xcalloc(sizeof(*item));
  item->masks = list_create();
  item->scanners = list_create();

  node = node_create(item);

  list_add(UserItemList, node);
  tmp = item;
}
#line 2008 "config-parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 406 "config-parser.y" /* yacc.c:1646  */
    {
  struct UserConf *item = tmp;
  node_t *node;

  node = node_create(xstrdup((yyvsp[-1].string)));

  list_add(item->masks, node);
}
#line 2021 "config-parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 416 "config-parser.y" /* yacc.c:1646  */
    {
  struct UserConf *item = tmp;
  node_t *node;

  node = node_create(xstrdup((yyvsp[-1].string)));

  list_add(item->scanners, node);
}
#line 2034 "config-parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 428 "config-parser.y" /* yacc.c:1646  */
    {
  node_t *node;
  struct ScannerConf *item, *olditem;

  item = xcalloc(sizeof(*item));

  /* Setup ScannerConf defaults */
  item->name = xstrdup("undefined");

  if (LIST_SIZE(ScannerItemList) > 0)
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
#line 2080 "config-parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 486 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2091 "config-parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 494 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;

  xfree(item->vhost);
  item->vhost = xstrdup((yyvsp[-1].string));
}
#line 2102 "config-parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 502 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;

  xfree(item->target_ip);
  item->target_ip = xstrdup((yyvsp[-1].string));
}
#line 2113 "config-parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 510 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;
  node_t *node;

  node = node_create(xstrdup((yyvsp[-1].string)));

  if (item->target_string_created == 0)
  {
    item->target_string = list_create();
    item->target_string_created = 1;
  }

  list_add(item->target_string, node);
}
#line 2132 "config-parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 526 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;

  item->fd = (yyvsp[-1].number);
}
#line 2142 "config-parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 533 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;

  item->target_port = (yyvsp[-1].number);
}
#line 2152 "config-parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 540 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;

  item->timeout = (yyvsp[-1].number);
}
#line 2162 "config-parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 547 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;

  item->max_read = (yyvsp[-1].number);
}
#line 2172 "config-parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 554 "config-parser.y" /* yacc.c:1646  */
    {
  struct ProtocolConf *item;
  struct ScannerConf *item2;
  node_t *node;

  item = xcalloc(sizeof(*item));
  item->type = (yyvsp[-3].number);
  item->port = (yyvsp[-1].number);

  item2 = tmp;

  node = node_create(item);
  list_add(item2->protocols, node);
}
#line 2191 "config-parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 583 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(OpmItem->dnsbl_from);
  OpmItem->dnsbl_from = xstrdup((yyvsp[-1].string));
}
#line 2200 "config-parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 589 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(OpmItem->dnsbl_to);
  OpmItem->dnsbl_to = xstrdup((yyvsp[-1].string));
}
#line 2209 "config-parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 595 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(OpmItem->sendmail);
  OpmItem->sendmail = xstrdup((yyvsp[-1].string));
}
#line 2218 "config-parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 603 "config-parser.y" /* yacc.c:1646  */
    {
  node_t *node;
  struct BlacklistConf *item;

  item = xcalloc(sizeof(*item));
  item->name = xstrdup("");
  item->kline = xstrdup("");
  item->ban_unknown = 0;
  item->type = A_BITMASK;
  item->reply = list_create();
  item->address_family = AF_INET;

  node = node_create(item);
  list_add(OpmItem->blacklists, node);

  tmp = item;
}
#line 2240 "config-parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 634 "config-parser.y" /* yacc.c:1646  */
    {
  struct BlacklistConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2251 "config-parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 642 "config-parser.y" /* yacc.c:1646  */
    {
  struct BlacklistConf *blacklist = tmp;
  printf("address_familiy setter\n");
  if ((yyvsp[-1].number) == 6) {
    blacklist->address_family = AF_INET6;
  } else if ((yyvsp[-1].number) == 4) {
    blacklist->address_family = AF_INET;
  } else
    yyerror("Unknown blacklist address_family defined");
}
#line 2266 "config-parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 654 "config-parser.y" /* yacc.c:1646  */
    {
  struct BlacklistConf *item = tmp;

  xfree(item->kline);
  item->kline = xstrdup((yyvsp[-1].string));
}
#line 2277 "config-parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 662 "config-parser.y" /* yacc.c:1646  */
    {
  struct BlacklistConf *item = tmp;

  if (strcmp("A record bitmask", (yyvsp[-1].string)) == 0)
    item->type = A_BITMASK;
  else if (strcmp("A record reply", (yyvsp[-1].string)) == 0)
    item->type = A_REPLY;
  else
    yyerror("Unknown blacklist type defined");
}
#line 2292 "config-parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 674 "config-parser.y" /* yacc.c:1646  */
    {
  struct BlacklistConf *item = tmp;

  item->ban_unknown = (yyvsp[-1].number);
}
#line 2302 "config-parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 686 "config-parser.y" /* yacc.c:1646  */
    {
  struct BlacklistReplyConf *item;
  struct BlacklistConf *blacklist = tmp;
  node_t *node;

  item = xcalloc(sizeof(*item));
  item->number = (yyvsp[-3].number);
  item->type = xstrdup((yyvsp[-1].string));

  node = node_create(item);
  list_add(blacklist->reply, node);
}
#line 2319 "config-parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 710 "config-parser.y" /* yacc.c:1646  */
    {
  node_t *node;
  node = node_create(xstrdup((yyvsp[-1].string)));

  list_add(ExemptItem->masks, node);
}
#line 2330 "config-parser.c" /* yacc.c:1646  */
    break;


#line 2334 "config-parser.c" /* yacc.c:1646  */
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
#line 717 "config-parser.y" /* yacc.c:1906  */


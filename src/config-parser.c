/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 21 "config-parser.y" /* yacc.c:337  */

#include <string.h>

#include "memory.h"
#include "config.h"

int yylex(void);

static void *tmp;  /* Variable to temporarily hold nodes before insertion to list */


#line 82 "config-parser.c" /* yacc.c:337  */
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
    IPV4 = 277,
    IPV6 = 278,
    IRC = 279,
    KLINE = 280,
    KEY = 281,
    MASK = 282,
    MAX_READ = 283,
    MODE = 284,
    NAME = 285,
    NEGCACHE = 286,
    NEGCACHE_REBUILD = 287,
    NICK = 288,
    NICKSERV = 289,
    NOTICE = 290,
    OPER = 291,
    OPM = 292,
    OPTIONS = 293,
    PASSWORD = 294,
    PERFORM = 295,
    PIDFILE = 296,
    PORT = 297,
    PROTOCOL = 298,
    READTIMEOUT = 299,
    REALNAME = 300,
    RECONNECTINTERVAL = 301,
    REPLY = 302,
    SCANLOG = 303,
    SCANNER = 304,
    SECONDS = 305,
    MINUTES = 306,
    HOURS = 307,
    DAYS = 308,
    WEEKS = 309,
    MONTHS = 310,
    YEARS = 311,
    SENDMAIL = 312,
    SERVER = 313,
    TARGET_IP = 314,
    TARGET_PORT = 315,
    TARGET_STRING = 316,
    TIMEOUT = 317,
    TLS = 318,
    TYPE = 319,
    USERNAME = 320,
    USER = 321,
    VHOST = 322,
    NUMBER = 323,
    STRING = 324,
    PROTOCOLTYPE = 325
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
#define IPV4 277
#define IPV6 278
#define IRC 279
#define KLINE 280
#define KEY 281
#define MASK 282
#define MAX_READ 283
#define MODE 284
#define NAME 285
#define NEGCACHE 286
#define NEGCACHE_REBUILD 287
#define NICK 288
#define NICKSERV 289
#define NOTICE 290
#define OPER 291
#define OPM 292
#define OPTIONS 293
#define PASSWORD 294
#define PERFORM 295
#define PIDFILE 296
#define PORT 297
#define PROTOCOL 298
#define READTIMEOUT 299
#define REALNAME 300
#define RECONNECTINTERVAL 301
#define REPLY 302
#define SCANLOG 303
#define SCANNER 304
#define SECONDS 305
#define MINUTES 306
#define HOURS 307
#define DAYS 308
#define WEEKS 309
#define MONTHS 310
#define YEARS 311
#define SENDMAIL 312
#define SERVER 313
#define TARGET_IP 314
#define TARGET_PORT 315
#define TARGET_STRING 316
#define TIMEOUT 317
#define TLS 318
#define TYPE 319
#define USERNAME 320
#define USER 321
#define VHOST 322
#define NUMBER 323
#define STRING 324
#define PROTOCOLTYPE 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 92 "config-parser.y" /* yacc.c:352  */

  int number;
  char *string;

#line 270 "config-parser.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYLAST   355

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  172
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  375

#define YYUNDEFTOK  2
#define YYMAXUTOK   325

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    76,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    75,    73,
       2,    74,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,     2,    72,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   108,   111,   112,   113,   114,   115,   116,
     118,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     129,   129,   130,   131,   132,   133,   138,   140,   141,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   154,
     159,   164,   170,   175,   180,   186,   191,   196,   203,   205,
     206,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   229,   235,   241,   247,   253,   259,   265,   271,   276,
     281,   286,   291,   296,   301,   307,   313,   319,   325,   334,
     334,   347,   348,   350,   351,   352,   354,   362,   370,   381,
     381,   391,   392,   394,   395,   396,   398,   405,   415,   415,
     450,   451,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   464,   472,   480,   488,   501,   508,   515,   522,
     529,   545,   547,   548,   550,   551,   552,   553,   554,   556,
     562,   568,   577,   577,   593,   594,   596,   597,   598,   599,
     600,   601,   602,   604,   613,   612,   620,   620,   621,   626,
     633,   641,   653,   660,   662,   663,   665,   679,   681,   682,
     684,   685,   687
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
  "DNS_TIMEOUT", "DNSBL_FROM", "DNSBL_TO", "EXEMPT", "FD", "INVITE",
  "IPV4", "IPV6", "IRC", "KLINE", "KEY", "MASK", "MAX_READ", "MODE",
  "NAME", "NEGCACHE", "NEGCACHE_REBUILD", "NICK", "NICKSERV", "NOTICE",
  "OPER", "OPM", "OPTIONS", "PASSWORD", "PERFORM", "PIDFILE", "PORT",
  "PROTOCOL", "READTIMEOUT", "REALNAME", "RECONNECTINTERVAL", "REPLY",
  "SCANLOG", "SCANNER", "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS",
  "MONTHS", "YEARS", "SENDMAIL", "SERVER", "TARGET_IP", "TARGET_PORT",
  "TARGET_STRING", "TIMEOUT", "TLS", "TYPE", "USERNAME", "USER", "VHOST",
  "NUMBER", "STRING", "PROTOCOLTYPE", "'{'", "'}'", "';'", "'='", "':'",
  "','", "$accept", "config", "config_items", "timespec_", "timespec",
  "sizespec_", "sizespec", "options_entry", "options_items",
  "options_item", "options_negcache", "options_negcache_rebuild",
  "options_pidfile", "options_dns_fdlimit", "options_dns_timeout",
  "options_scanlog", "options_command_queue_size",
  "options_command_interval", "options_command_timeout", "irc_entry",
  "irc_items", "irc_item", "irc_away", "irc_kline", "irc_mode", "irc_nick",
  "irc_nickserv", "irc_oper", "irc_password", "irc_perform", "irc_notice",
  "irc_port", "irc_tls", "irc_readtimeout", "irc_reconnectinterval",
  "irc_realname", "irc_server", "irc_username", "irc_vhost",
  "irc_connregex", "channel_entry", "$@1", "channel_items", "channel_item",
  "channel_name", "channel_key", "channel_invite", "user_entry", "$@2",
  "user_items", "user_item", "user_mask", "user_scanner", "scanner_entry",
  "$@3", "scanner_items", "scanner_item", "scanner_name", "scanner_vhost",
  "scanner_target_ip", "scanner_target_string", "scanner_fd",
  "scanner_target_port", "scanner_timeout", "scanner_max_read",
  "scanner_protocol", "opm_entry", "opm_items", "opm_item",
  "opm_dnsbl_from", "opm_dnsbl_to", "opm_sendmail", "opm_blacklist_entry",
  "$@4", "blacklist_items", "blacklist_item", "blacklist_name",
  "blacklist_address_family", "$@5", "blacklist_address_family_items",
  "blacklist_address_family_item", "blacklist_kline", "blacklist_type",
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   123,   125,    59,    61,    58,    44
};
# endif

#define YYPACT_NINF -244

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-244)))

#define YYTABLE_NINF -143

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -244,   157,  -244,   -56,   -52,   -45,   -44,  -244,  -244,  -244,
    -244,   -36,  -244,    -6,  -244,  -244,    10,   104,   109,   176,
     -30,   -20,  -244,   -18,     4,  -244,  -244,  -244,   -10,    22,
      24,    28,    29,    33,    39,    42,    45,    49,    50,    51,
      57,    58,    62,    67,    81,    87,     0,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,    56,  -244,    89,
      90,    91,    73,  -244,  -244,  -244,  -244,  -244,    78,  -244,
      94,    96,    98,    99,   100,   101,   105,   108,   110,    37,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
      79,    92,   114,    38,  -244,   117,   121,   124,   127,   128,
     129,   130,   131,   132,   134,   136,   137,   147,   137,   149,
     152,   153,   154,    74,  -244,   107,   156,   166,   167,   148,
    -244,   168,   137,   158,   137,   169,   137,   137,   137,   171,
     172,   165,  -244,  -244,   170,   173,     5,  -244,  -244,  -244,
    -244,   174,   175,   177,   178,   179,   180,   181,   182,   183,
      27,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,   185,  -244,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   159,   197,   198,   199,   200,   201,
     202,   203,  -244,    71,   204,   205,   206,  -244,   155,   207,
     208,   209,   210,   211,   212,   213,   214,   215,  -244,   220,
     221,   218,  -244,   224,   225,   226,   227,   229,   228,   230,
     137,   231,   232,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,   137,   137,   137,   137,
     137,   137,   137,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,   233,   234,   235,   -13,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,   236,   237,   238,   223,   239,
      70,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,   241,   242,  -244,
     243,    53,   244,   245,   246,   247,   249,   250,   251,   252,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,   257,   258,
     259,   256,  -244,   260,   262,   263,   264,   267,   268,   265,
    -244,  -244,  -244,  -244,   225,   225,   225,  -244,  -244,  -244,
    -244,   271,  -244,  -244,  -244,  -244,  -244,   269,   270,   272,
    -244,     1,   273,   274,   275,   266,   -65,  -244,   276,  -244,
    -244,  -244,  -244,   277,  -244,  -244,  -244,  -244,  -244,   -64,
    -244,  -244,  -244,  -244,   282,   279,  -244,  -244,  -244,  -244,
       1,   280,  -244,  -244,  -244
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    99,     1,     0,     0,     0,     0,     3,     5,     4,
       7,     0,     8,     0,     6,     9,     0,     0,     0,     0,
       0,     0,   171,     0,     0,   169,   170,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,    53,
      56,    54,    55,    57,    58,    67,    68,    59,    60,    61,
      62,    63,    64,    65,    66,    52,    69,     0,   138,     0,
       0,     0,     0,   133,   134,   135,   136,   137,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
       0,     0,     0,     0,   168,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,     0,     0,     0,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,   105,     0,     0,     0,   102,   103,   104,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   112,   113,   115,   117,   114,   116,   119,   120,
     118,     0,   167,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,   101,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   172,    71,    88,    72,    73,    74,
      75,    79,    76,    77,    78,    80,    10,    10,    10,    10,
      10,    10,    10,    12,    11,    82,    84,    83,    85,    81,
      86,    87,     0,     0,     0,     0,    92,    93,    94,    95,
     139,   140,   141,   152,   154,     0,     0,     0,     0,     0,
       0,   145,   146,   147,   149,   148,   150,   151,    46,    45,
      47,    42,    43,    39,    40,    41,    44,     0,     0,   100,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
     109,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
     144,   106,   107,   126,    20,    20,    20,    22,    21,   129,
     122,     0,   124,   127,   125,   128,   123,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,   165,     0,   143,
      23,    24,    25,     0,    98,    97,    96,   158,   159,     0,
     157,   162,   160,   153,     0,     0,   164,   161,   130,   155,
       0,     0,   163,   156,   166
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -244,  -244,  -244,    -8,  -116,  -243,    31,  -244,  -244,   161,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,   255,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,
    -244,  -244,  -244,   -12,  -244,  -244,  -244,  -244,  -244,  -244,
     160,  -244,  -244,  -244,  -244,  -244,    82,  -244,  -244,  -244,
    -244,  -244,  -244,  -244,  -244,  -244,  -244,  -244,   283,  -244,
    -244,  -244,  -244,  -244,  -244,   -24,  -244,  -244,  -244,  -244,
     -68,  -244,  -244,  -244,  -244,  -244,   -43,  -244,  -244,   295,
    -244
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,   243,   244,   327,   328,     8,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     9,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,   255,   256,   257,   258,   259,    10,    11,   146,
     147,   148,   149,    12,    13,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,    14,    72,    73,    74,
      75,    76,    77,    78,   270,   271,   272,   273,   313,   359,
     360,   274,   275,   276,   277,   346,   347,    15,    24,    25,
      26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     185,    27,   187,   345,    28,    22,   143,   365,   252,   369,
     -89,    22,   370,   253,    29,    16,   199,   254,   201,    17,
     203,   204,   205,   357,   358,    30,    18,    19,   150,    31,
      20,    23,   144,    32,    33,    34,    35,    23,    79,    36,
      37,   100,    38,    21,    39,    40,    41,   151,    80,    81,
      82,   101,    83,    84,   145,   152,   102,   153,    42,   311,
     324,   325,   326,    43,   105,    44,   125,    45,    85,    86,
     154,   263,   123,   264,    68,   265,   103,   211,    87,  -142,
     143,   350,   351,   352,   131,    88,   155,   156,   157,   158,
      69,    70,   252,   150,   159,   266,   106,   253,   107,   222,
     267,   254,   108,   109,   298,    27,   144,   110,    28,   141,
      68,   172,   151,   111,   -89,  -142,   112,   268,    29,   113,
     152,   291,   153,   114,   115,   116,    69,    70,   145,    30,
      71,   117,   118,    31,   269,   154,   119,    32,    33,    34,
      35,   120,   319,    36,    37,   129,    38,   192,    39,    40,
      41,   155,   156,   157,   158,   121,   263,     2,   264,   159,
     265,   122,    42,   126,   127,   128,    71,    43,   132,    44,
     133,    45,   134,   135,   136,   137,     3,    79,   193,   138,
     266,     4,   139,   171,   140,   267,   173,    80,    81,    82,
     174,    83,    84,   175,     5,     6,   176,   177,   178,   179,
     180,   181,   268,   182,   183,   184,  -108,    85,    86,   236,
     237,   238,   239,   240,   241,   242,   186,    87,   188,   269,
     189,   197,   190,   191,    88,   194,   200,   184,   301,   302,
     303,   304,   305,   306,   307,   195,   196,   202,   208,   198,
     206,   207,   223,   312,   209,   292,   320,   210,   213,   214,
     142,   215,   216,   217,   218,   219,   220,   221,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     245,   246,   247,   248,   249,   250,   251,   260,   261,   262,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   317,   293,   296,   294,   295,   297,
     299,   124,   373,   366,     0,   300,   212,   308,   309,   310,
     314,   315,   316,   318,   321,   322,   323,   329,   330,   104,
     332,   331,   333,   334,   335,   336,   337,   338,   339,   340,
     342,     0,   343,   344,   341,   345,     0,   348,   349,   353,
     364,     0,   354,   355,     0,   356,   361,   362,   363,   367,
     368,   371,   372,   374,     0,   130
};

static const yytype_int16 yycheck[] =
{
     116,     1,   118,    68,     4,     1,     1,    72,    21,    73,
      10,     1,    76,    26,    14,    71,   132,    30,   134,    71,
     136,   137,   138,    22,    23,    25,    71,    71,     1,    29,
      66,    27,    27,    33,    34,    35,    36,    27,     1,    39,
      40,    71,    42,    49,    44,    45,    46,    20,    11,    12,
      13,    71,    15,    16,    49,    28,    74,    30,    58,    72,
       7,     8,     9,    63,    74,    65,    10,    67,    31,    32,
      43,     1,    72,     3,     1,     5,    72,    72,    41,     6,
       1,   324,   325,   326,     6,    48,    59,    60,    61,    62,
      17,    18,    21,     1,    67,    25,    74,    26,    74,    72,
      30,    30,    74,    74,   220,     1,    27,    74,     4,    72,
       1,    73,    20,    74,    10,     6,    74,    47,    14,    74,
      28,    68,    30,    74,    74,    74,    17,    18,    49,    25,
      57,    74,    74,    29,    64,    43,    74,    33,    34,    35,
      36,    74,    72,    39,    40,    72,    42,    73,    44,    45,
      46,    59,    60,    61,    62,    74,     1,     0,     3,    67,
       5,    74,    58,    74,    74,    74,    57,    63,    74,    65,
      74,    67,    74,    74,    74,    74,    19,     1,    71,    74,
      25,    24,    74,    69,    74,    30,    69,    11,    12,    13,
      69,    15,    16,    69,    37,    38,    69,    69,    69,    69,
      69,    69,    47,    69,    68,    68,    49,    31,    32,    50,
      51,    52,    53,    54,    55,    56,    69,    41,    69,    64,
      68,    73,    69,    69,    48,    69,    68,    68,   236,   237,
     238,   239,   240,   241,   242,    69,    69,    68,    73,    71,
      69,    69,   160,   255,    74,   214,   270,    74,    74,    74,
      89,    74,    74,    74,    74,    74,    74,    74,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    69,
      69,    73,    68,    68,    71,    69,    68,    70,    69,    69,
      69,    46,   370,   346,    -1,    73,   146,    74,    74,    74,
      74,    74,    74,    74,    73,    73,    73,    73,    73,    24,
      73,    75,    73,    73,    73,    73,    69,    69,    69,    73,
      68,    -1,    69,    69,    74,    68,    -1,    69,    73,    68,
      74,    -1,    73,    73,    -1,    73,    73,    73,    73,    73,
      73,    69,    73,    73,    -1,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    78,     0,    19,    24,    37,    38,    79,    84,    96,
     124,   125,   130,   131,   143,   164,    71,    71,    71,    71,
      66,    49,     1,    27,   165,   166,   167,     1,     4,    14,
      25,    29,    33,    34,    35,    36,    39,    40,    42,    44,
      45,    46,    58,    63,    65,    67,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,     1,    17,
      18,    57,   144,   145,   146,   147,   148,   149,   150,     1,
      11,    12,    13,    15,    16,    31,    32,    41,    48,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      71,    71,    74,    72,   166,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    72,    98,    10,    74,    74,    74,    72,
     145,     6,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    72,    86,     1,    27,    49,   126,   127,   128,   129,
       1,    20,    28,    30,    43,    59,    60,    61,    62,    67,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,    69,    73,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    68,    68,    81,    69,    81,    69,    68,
      69,    69,    73,    71,    69,    69,    69,    73,    71,    81,
      68,    81,    68,    81,    81,    81,    69,    69,    73,    74,
      74,    72,   127,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    72,   133,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    50,    51,    52,    53,
      54,    55,    56,    80,    81,    73,    73,    73,    73,    73,
      73,    73,    21,    26,    30,   119,   120,   121,   122,   123,
      73,    73,    73,     1,     3,     5,    25,    30,    47,    64,
     151,   152,   153,   154,   158,   159,   160,   161,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    69,    69,    73,
      68,    68,    83,    69,    70,    69,    68,    69,    81,    69,
      73,    80,    80,    80,    80,    80,    80,    80,    74,    74,
      74,    72,   120,   155,    74,    74,    74,    71,    74,    72,
     152,    73,    73,    73,     7,     8,     9,    82,    83,    73,
      73,    75,    73,    73,    73,    73,    73,    69,    69,    69,
      73,    74,    68,    69,    69,    68,   162,   163,    69,    73,
      82,    82,    82,    68,    73,    73,    73,    22,    23,   156,
     157,    73,    73,    73,    74,    72,   163,    73,    73,    73,
      76,    69,    73,   157,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    78,    79,    79,    79,    79,    79,    79,
      80,    80,    81,    81,    81,    81,    81,    81,    81,    81,
      82,    82,    83,    83,    83,    83,    84,    85,    85,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      97,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   118,
     117,   119,   119,   120,   120,   120,   121,   122,   123,   125,
     124,   126,   126,   127,   127,   127,   128,   129,   131,   130,
     132,   132,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   144,   145,   145,   145,   145,   145,   146,
     147,   148,   150,   149,   151,   151,   152,   152,   152,   152,
     152,   152,   152,   153,   155,   154,   156,   156,   157,   157,
     158,   159,   160,   161,   162,   162,   163,   164,   165,   165,
     166,   166,   167
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
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     4,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       6,     5,     2,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     0,     5,     3,     1,     1,     1,
       4,     4,     4,     5,     2,     1,     4,     5,     2,     1,
       1,     1,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
        case 10:
#line 118 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = 0; }
#line 1648 "config-parser.c" /* yacc.c:1652  */
    break;

  case 12:
#line 119 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1654 "config-parser.c" /* yacc.c:1652  */
    break;

  case 13:
#line 120 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1660 "config-parser.c" /* yacc.c:1652  */
    break;

  case 14:
#line 121 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 1666 "config-parser.c" /* yacc.c:1652  */
    break;

  case 15:
#line 122 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 1672 "config-parser.c" /* yacc.c:1652  */
    break;

  case 16:
#line 123 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 1678 "config-parser.c" /* yacc.c:1652  */
    break;

  case 17:
#line 124 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 1684 "config-parser.c" /* yacc.c:1652  */
    break;

  case 18:
#line 125 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 1690 "config-parser.c" /* yacc.c:1652  */
    break;

  case 19:
#line 126 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 1696 "config-parser.c" /* yacc.c:1652  */
    break;

  case 20:
#line 129 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = 0; }
#line 1702 "config-parser.c" /* yacc.c:1652  */
    break;

  case 22:
#line 130 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1708 "config-parser.c" /* yacc.c:1652  */
    break;

  case 23:
#line 131 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1714 "config-parser.c" /* yacc.c:1652  */
    break;

  case 24:
#line 132 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 1720 "config-parser.c" /* yacc.c:1652  */
    break;

  case 25:
#line 133 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 1726 "config-parser.c" /* yacc.c:1652  */
    break;

  case 39:
#line 155 "config-parser.y" /* yacc.c:1652  */
    {
  OptionsItem.negcache = (yyvsp[-1].number);
}
#line 1734 "config-parser.c" /* yacc.c:1652  */
    break;

  case 40:
#line 160 "config-parser.y" /* yacc.c:1652  */
    {
  OptionsItem.negcache_rebuild = (yyvsp[-1].number);
}
#line 1742 "config-parser.c" /* yacc.c:1652  */
    break;

  case 41:
#line 165 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(OptionsItem.pidfile);
  OptionsItem.pidfile = xstrdup((yyvsp[-1].string));
}
#line 1751 "config-parser.c" /* yacc.c:1652  */
    break;

  case 42:
#line 171 "config-parser.y" /* yacc.c:1652  */
    {
  OptionsItem.dns_fdlimit = (yyvsp[-1].number);
}
#line 1759 "config-parser.c" /* yacc.c:1652  */
    break;

  case 43:
#line 176 "config-parser.y" /* yacc.c:1652  */
    {
  OptionsItem.dns_timeout = (yyvsp[-1].number);
}
#line 1767 "config-parser.c" /* yacc.c:1652  */
    break;

  case 44:
#line 181 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(OptionsItem.scanlog);
  OptionsItem.scanlog = xstrdup((yyvsp[-1].string));
}
#line 1776 "config-parser.c" /* yacc.c:1652  */
    break;

  case 45:
#line 187 "config-parser.y" /* yacc.c:1652  */
    {
  OptionsItem.command_queue_size = (yyvsp[-1].number);
}
#line 1784 "config-parser.c" /* yacc.c:1652  */
    break;

  case 46:
#line 192 "config-parser.y" /* yacc.c:1652  */
    {
  OptionsItem.command_interval = (yyvsp[-1].number);
}
#line 1792 "config-parser.c" /* yacc.c:1652  */
    break;

  case 47:
#line 197 "config-parser.y" /* yacc.c:1652  */
    {
  OptionsItem.command_timeout = (yyvsp[-1].number);
}
#line 1800 "config-parser.c" /* yacc.c:1652  */
    break;

  case 71:
#line 230 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.away);
  IRCItem.away = xstrdup((yyvsp[-1].string));
}
#line 1809 "config-parser.c" /* yacc.c:1652  */
    break;

  case 72:
#line 236 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.kline);
  IRCItem.kline = xstrdup((yyvsp[-1].string));
}
#line 1818 "config-parser.c" /* yacc.c:1652  */
    break;

  case 73:
#line 242 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.mode);
  IRCItem.mode = xstrdup((yyvsp[-1].string));
}
#line 1827 "config-parser.c" /* yacc.c:1652  */
    break;

  case 74:
#line 248 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.nick);
  IRCItem.nick = xstrdup((yyvsp[-1].string));
}
#line 1836 "config-parser.c" /* yacc.c:1652  */
    break;

  case 75:
#line 254 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.nickserv);
  IRCItem.nickserv = xstrdup((yyvsp[-1].string));
}
#line 1845 "config-parser.c" /* yacc.c:1652  */
    break;

  case 76:
#line 260 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.oper);
  IRCItem.oper = xstrdup((yyvsp[-1].string));
}
#line 1854 "config-parser.c" /* yacc.c:1652  */
    break;

  case 77:
#line 266 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.password);
  IRCItem.password = xstrdup((yyvsp[-1].string));
}
#line 1863 "config-parser.c" /* yacc.c:1652  */
    break;

  case 78:
#line 272 "config-parser.y" /* yacc.c:1652  */
    {
  list_add(xstrdup((yyvsp[-1].string)), node_create(), &IRCItem.performs);
}
#line 1871 "config-parser.c" /* yacc.c:1652  */
    break;

  case 79:
#line 277 "config-parser.y" /* yacc.c:1652  */
    {
  list_add(xstrdup((yyvsp[-1].string)), node_create(), &IRCItem.notices);
}
#line 1879 "config-parser.c" /* yacc.c:1652  */
    break;

  case 80:
#line 282 "config-parser.y" /* yacc.c:1652  */
    {
  IRCItem.port = (yyvsp[-1].number);
}
#line 1887 "config-parser.c" /* yacc.c:1652  */
    break;

  case 81:
#line 287 "config-parser.y" /* yacc.c:1652  */
    {
  IRCItem.tls = (yyvsp[-1].number);
}
#line 1895 "config-parser.c" /* yacc.c:1652  */
    break;

  case 82:
#line 292 "config-parser.y" /* yacc.c:1652  */
    {
  IRCItem.readtimeout = (yyvsp[-1].number);
}
#line 1903 "config-parser.c" /* yacc.c:1652  */
    break;

  case 83:
#line 297 "config-parser.y" /* yacc.c:1652  */
    {
  IRCItem.reconnectinterval = (yyvsp[-1].number);
}
#line 1911 "config-parser.c" /* yacc.c:1652  */
    break;

  case 84:
#line 302 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.realname);
  IRCItem.realname = xstrdup((yyvsp[-1].string));
}
#line 1920 "config-parser.c" /* yacc.c:1652  */
    break;

  case 85:
#line 308 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.server);
  IRCItem.server = xstrdup((yyvsp[-1].string));
}
#line 1929 "config-parser.c" /* yacc.c:1652  */
    break;

  case 86:
#line 314 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.username);
  IRCItem.username = xstrdup((yyvsp[-1].string));
}
#line 1938 "config-parser.c" /* yacc.c:1652  */
    break;

  case 87:
#line 320 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.vhost);
  IRCItem.vhost = xstrdup((yyvsp[-1].string));
}
#line 1947 "config-parser.c" /* yacc.c:1652  */
    break;

  case 88:
#line 326 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.connregex);
  IRCItem.connregex = xstrdup((yyvsp[-1].string));
}
#line 1956 "config-parser.c" /* yacc.c:1652  */
    break;

  case 89:
#line 334 "config-parser.y" /* yacc.c:1652  */
    {
  struct ChannelConf *item;

  item = xcalloc(sizeof(*item));
  item->name = xstrdup("");
  item->key = xstrdup("");
  item->invite = xstrdup("");

  list_add(item, &item->node, &IRCItem.channels);
  tmp = item;
}
#line 1972 "config-parser.c" /* yacc.c:1652  */
    break;

  case 96:
#line 355 "config-parser.y" /* yacc.c:1652  */
    {
  struct ChannelConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 1983 "config-parser.c" /* yacc.c:1652  */
    break;

  case 97:
#line 363 "config-parser.y" /* yacc.c:1652  */
    {
  struct ChannelConf *item = tmp;

  xfree(item->key);
  item->key = xstrdup((yyvsp[-1].string));
}
#line 1994 "config-parser.c" /* yacc.c:1652  */
    break;

  case 98:
#line 371 "config-parser.y" /* yacc.c:1652  */
    {
  struct ChannelConf *item = tmp;

  xfree(item->invite);
  item->invite = xstrdup((yyvsp[-1].string));
}
#line 2005 "config-parser.c" /* yacc.c:1652  */
    break;

  case 99:
#line 381 "config-parser.y" /* yacc.c:1652  */
    {
  struct UserConf *item;

  item = xcalloc(sizeof(*item));

  list_add(item, &item->node, &UserItemList);
  tmp = item;
}
#line 2018 "config-parser.c" /* yacc.c:1652  */
    break;

  case 106:
#line 399 "config-parser.y" /* yacc.c:1652  */
    {
  struct UserConf *item = tmp;

  list_add(xstrdup((yyvsp[-1].string)), node_create(), &item->masks);
}
#line 2028 "config-parser.c" /* yacc.c:1652  */
    break;

  case 107:
#line 406 "config-parser.y" /* yacc.c:1652  */
    {
  struct UserConf *item = tmp;

  list_add(xstrdup((yyvsp[-1].string)), node_create(), &item->scanners);
}
#line 2038 "config-parser.c" /* yacc.c:1652  */
    break;

  case 108:
#line 415 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item, *olditem;

  item = xcalloc(sizeof(*item));

  /* Setup ScannerConf defaults */
  item->name = xstrdup("undefined");

  if (LIST_SIZE(&ScannerItemList))
  {
    olditem = ScannerItemList.tail->data;

    item->vhost = xstrdup(olditem->vhost);
    item->fd = olditem->fd;
    item->target_ip = xstrdup(olditem->target_ip);
    item->target_port = olditem->target_port;
    item->timeout = olditem->timeout;
    item->max_read = olditem->max_read;
    memcpy(&item->target_string, &olditem->target_string, sizeof(item->target_string));
  }
  else
  {
    item->vhost = xstrdup("0.0.0.0");
    item->fd = 512;
    item->target_ip = xstrdup("127.0.0.1");
    item->target_port = 6667;
    item->timeout = 30;
    item->max_read = 4096;
  }

  list_add(item, &item->node, &ScannerItemList);
  tmp = item;
}
#line 2076 "config-parser.c" /* yacc.c:1652  */
    break;

  case 122:
#line 465 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2087 "config-parser.c" /* yacc.c:1652  */
    break;

  case 123:
#line 473 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  xfree(item->vhost);
  item->vhost = xstrdup((yyvsp[-1].string));
}
#line 2098 "config-parser.c" /* yacc.c:1652  */
    break;

  case 124:
#line 481 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  xfree(item->target_ip);
  item->target_ip = xstrdup((yyvsp[-1].string));
}
#line 2109 "config-parser.c" /* yacc.c:1652  */
    break;

  case 125:
#line 489 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  if (item->target_string_created == 0)
  {
    memset(&item->target_string, 0, sizeof(item->target_string));
    item->target_string_created = 1;
  }

  list_add(xstrdup((yyvsp[-1].string)), node_create(), &item->target_string);
}
#line 2125 "config-parser.c" /* yacc.c:1652  */
    break;

  case 126:
#line 502 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  item->fd = (yyvsp[-1].number);
}
#line 2135 "config-parser.c" /* yacc.c:1652  */
    break;

  case 127:
#line 509 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  item->target_port = (yyvsp[-1].number);
}
#line 2145 "config-parser.c" /* yacc.c:1652  */
    break;

  case 128:
#line 516 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  item->timeout = (yyvsp[-1].number);
}
#line 2155 "config-parser.c" /* yacc.c:1652  */
    break;

  case 129:
#line 523 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  item->max_read = (yyvsp[-1].number);
}
#line 2165 "config-parser.c" /* yacc.c:1652  */
    break;

  case 130:
#line 530 "config-parser.y" /* yacc.c:1652  */
    {
  struct ProtocolConf *item;
  struct ScannerConf *item2;

  item = xcalloc(sizeof(*item));
  item->type = (yyvsp[-3].number);
  item->port = (yyvsp[-1].number);

  item2 = tmp;

  list_add(item, node_create(), &item2->protocols);
}
#line 2182 "config-parser.c" /* yacc.c:1652  */
    break;

  case 139:
#line 557 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(OpmItem.dnsbl_from);
  OpmItem.dnsbl_from = xstrdup((yyvsp[-1].string));
}
#line 2191 "config-parser.c" /* yacc.c:1652  */
    break;

  case 140:
#line 563 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(OpmItem.dnsbl_to);
  OpmItem.dnsbl_to = xstrdup((yyvsp[-1].string));
}
#line 2200 "config-parser.c" /* yacc.c:1652  */
    break;

  case 141:
#line 569 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(OpmItem.sendmail);
  OpmItem.sendmail = xstrdup((yyvsp[-1].string));
}
#line 2209 "config-parser.c" /* yacc.c:1652  */
    break;

  case 142:
#line 577 "config-parser.y" /* yacc.c:1652  */
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
#line 2228 "config-parser.c" /* yacc.c:1652  */
    break;

  case 153:
#line 605 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2239 "config-parser.c" /* yacc.c:1652  */
    break;

  case 154:
#line 613 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistConf *item = tmp;

  item->ipv4 = 0;
  item->ipv6 = 0;
}
#line 2250 "config-parser.c" /* yacc.c:1652  */
    break;

  case 158:
#line 622 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistConf *item = tmp;

  item->ipv4 = 1;
}
#line 2260 "config-parser.c" /* yacc.c:1652  */
    break;

  case 159:
#line 627 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistConf *item = tmp;

  item->ipv6 = 1;
}
#line 2270 "config-parser.c" /* yacc.c:1652  */
    break;

  case 160:
#line 634 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistConf *item = tmp;

  xfree(item->kline);
  item->kline = xstrdup((yyvsp[-1].string));
}
#line 2281 "config-parser.c" /* yacc.c:1652  */
    break;

  case 161:
#line 642 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistConf *item = tmp;

  if (strcmp("A record bitmask", (yyvsp[-1].string)) == 0)
    item->type = A_BITMASK;
  else if (strcmp("A record reply", (yyvsp[-1].string)) == 0)
    item->type = A_REPLY;
  else
    yyerror("Unknown blacklist type defined");
}
#line 2296 "config-parser.c" /* yacc.c:1652  */
    break;

  case 162:
#line 654 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistConf *item = tmp;

  item->ban_unknown = (yyvsp[-1].number);
}
#line 2306 "config-parser.c" /* yacc.c:1652  */
    break;

  case 166:
#line 666 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistReplyConf *item;
  struct BlacklistConf *blacklist = tmp;

  item = xcalloc(sizeof(*item));
  item->number = (yyvsp[-3].number);
  item->type = xstrdup((yyvsp[-1].string));

  list_add(item, node_create(), &blacklist->reply);
}
#line 2321 "config-parser.c" /* yacc.c:1652  */
    break;

  case 172:
#line 688 "config-parser.y" /* yacc.c:1652  */
    {
  list_add(xstrdup((yyvsp[-1].string)), node_create(), &ExemptItem.masks);
}
#line 2329 "config-parser.c" /* yacc.c:1652  */
    break;


#line 2333 "config-parser.c" /* yacc.c:1652  */
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 692 "config-parser.y" /* yacc.c:1918  */


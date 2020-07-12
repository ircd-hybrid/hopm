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
    RSA_PRIVATE_KEY_FILE = 299,
    READTIMEOUT = 300,
    REALNAME = 301,
    RECONNECTINTERVAL = 302,
    REPLY = 303,
    SCANLOG = 304,
    SCANNER = 305,
    SECONDS = 306,
    MINUTES = 307,
    HOURS = 308,
    DAYS = 309,
    WEEKS = 310,
    MONTHS = 311,
    YEARS = 312,
    SENDMAIL = 313,
    SERVER = 314,
    TARGET_IP = 315,
    TARGET_PORT = 316,
    TARGET_STRING = 317,
    TIMEOUT = 318,
    TLS = 319,
    TLS_CERTIFICATE_FILE = 320,
    TLS_HOSTNAME_VERIFICATION = 321,
    TYPE = 322,
    USERNAME = 323,
    USER = 324,
    VHOST = 325,
    NUMBER = 326,
    STRING = 327,
    PROTOCOLTYPE = 328
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
#define RSA_PRIVATE_KEY_FILE 299
#define READTIMEOUT 300
#define REALNAME 301
#define RECONNECTINTERVAL 302
#define REPLY 303
#define SCANLOG 304
#define SCANNER 305
#define SECONDS 306
#define MINUTES 307
#define HOURS 308
#define DAYS 309
#define WEEKS 310
#define MONTHS 311
#define YEARS 312
#define SENDMAIL 313
#define SERVER 314
#define TARGET_IP 315
#define TARGET_PORT 316
#define TARGET_STRING 317
#define TIMEOUT 318
#define TLS 319
#define TLS_CERTIFICATE_FILE 320
#define TLS_HOSTNAME_VERIFICATION 321
#define TYPE 322
#define USERNAME 323
#define USER 324
#define VHOST 325
#define NUMBER 326
#define STRING 327
#define PROTOCOLTYPE 328

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 95 "config-parser.y" /* yacc.c:352  */

  int number;
  char *string;

#line 276 "config-parser.c" /* yacc.c:352  */
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
#define YYLAST   386

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  178
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  390

#define YYUNDEFTOK  2
#define YYMAXUTOK   328

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
       2,     2,     2,     2,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    78,    76,
       2,    77,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,    75,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   110,   110,   111,   114,   115,   116,   117,   118,   119,
     121,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     132,   132,   133,   134,   135,   136,   141,   143,   144,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   157,
     162,   167,   173,   178,   183,   189,   194,   199,   206,   208,
     209,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   235,   241,   247,   253,   259,   265,
     271,   277,   282,   287,   292,   297,   304,   310,   315,   320,
     325,   331,   337,   343,   349,   358,   358,   371,   372,   374,
     375,   376,   378,   386,   394,   405,   405,   415,   416,   418,
     419,   420,   422,   429,   439,   439,   474,   475,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   488,   496,
     504,   512,   525,   532,   539,   546,   553,   569,   571,   572,
     574,   575,   576,   577,   578,   580,   586,   592,   601,   601,
     617,   618,   620,   621,   622,   623,   624,   625,   626,   628,
     637,   636,   644,   644,   645,   650,   657,   665,   677,   684,
     686,   687,   689,   703,   705,   706,   708,   709,   711
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
  "PROTOCOL", "RSA_PRIVATE_KEY_FILE", "READTIMEOUT", "REALNAME",
  "RECONNECTINTERVAL", "REPLY", "SCANLOG", "SCANNER", "SECONDS", "MINUTES",
  "HOURS", "DAYS", "WEEKS", "MONTHS", "YEARS", "SENDMAIL", "SERVER",
  "TARGET_IP", "TARGET_PORT", "TARGET_STRING", "TIMEOUT", "TLS",
  "TLS_CERTIFICATE_FILE", "TLS_HOSTNAME_VERIFICATION", "TYPE", "USERNAME",
  "USER", "VHOST", "NUMBER", "STRING", "PROTOCOLTYPE", "'{'", "'}'", "';'",
  "'='", "':'", "','", "$accept", "config", "config_items", "timespec_",
  "timespec", "sizespec_", "sizespec", "options_entry", "options_items",
  "options_item", "options_negcache", "options_negcache_rebuild",
  "options_pidfile", "options_dns_fdlimit", "options_dns_timeout",
  "options_scanlog", "options_command_queue_size",
  "options_command_interval", "options_command_timeout", "irc_entry",
  "irc_items", "irc_item", "irc_away", "irc_kline", "irc_mode", "irc_nick",
  "irc_nickserv", "irc_oper", "irc_password", "irc_perform", "irc_notice",
  "irc_port", "irc_tls", "irc_rsa_private_key_file",
  "irc_tls_certificate_file", "irc_tls_hostname_verification",
  "irc_readtimeout", "irc_reconnectinterval", "irc_realname", "irc_server",
  "irc_username", "irc_vhost", "irc_connregex", "channel_entry", "$@1",
  "channel_items", "channel_item", "channel_name", "channel_key",
  "channel_invite", "user_entry", "$@2", "user_items", "user_item",
  "user_mask", "user_scanner", "scanner_entry", "$@3", "scanner_items",
  "scanner_item", "scanner_name", "scanner_vhost", "scanner_target_ip",
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
     325,   326,   327,   328,   123,   125,    59,    61,    58,    44
};
# endif

#define YYPACT_NINF -208

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-208)))

#define YYTABLE_NINF -149

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -208,   163,  -208,   -69,   -65,   -59,   -53,  -208,  -208,  -208,
    -208,   -39,  -208,    -7,  -208,  -208,    10,   110,   166,   191,
     -26,   -25,  -208,   -20,     5,  -208,  -208,  -208,   -14,   -10,
      -8,     6,     8,    17,    20,    24,    25,    33,    35,    36,
      39,    42,    46,    48,    52,    53,    60,    61,    65,     0,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,    72,  -208,    70,    74,    88,    78,  -208,
    -208,  -208,  -208,  -208,    81,  -208,    94,    96,   100,   102,
     104,   108,   111,   112,   113,    40,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,    27,    98,    16,    28,
    -208,    45,   133,   136,   138,   139,   140,   142,   153,   154,
     155,   158,   159,   162,   165,   162,   167,   170,   171,   173,
     174,   175,   160,  -208,   156,   176,   177,   178,   169,  -208,
     168,   162,   180,   162,   181,   162,   162,   162,   182,   183,
     184,  -208,  -208,   157,   179,    11,  -208,  -208,  -208,  -208,
     185,   186,   187,   188,   189,   190,   192,   193,   194,    30,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
     196,  -208,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   164,   209,   210,   211,   212,   213,
     214,   215,   216,   217,  -208,   101,   218,   219,   220,  -208,
     161,   221,   222,   223,   224,   225,   226,   227,   228,   229,
    -208,   234,   235,   232,  -208,   238,   239,   240,   195,   241,
     243,   244,   162,   245,   242,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,   162,
     162,   162,   162,   162,   162,   162,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,   246,   247,   248,
     -13,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
     249,   250,   251,   237,   252,    73,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,   254,   255,  -208,   256,    99,   257,   258,   259,
     260,   262,   263,   264,   265,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,   270,   271,   272,   269,  -208,   273,   275,
     276,   277,   280,   281,   278,  -208,  -208,  -208,  -208,   239,
     239,   239,  -208,  -208,  -208,  -208,   284,  -208,  -208,  -208,
    -208,  -208,   282,   283,   285,  -208,     4,   286,   287,   288,
     279,   -68,  -208,   289,  -208,  -208,  -208,  -208,   290,  -208,
    -208,  -208,  -208,  -208,   -60,  -208,  -208,  -208,  -208,   295,
     292,  -208,  -208,  -208,  -208,     4,   293,  -208,  -208,  -208
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   105,     1,     0,     0,     0,     0,     3,     5,     4,
       7,     0,     8,     0,     6,     9,     0,     0,     0,     0,
       0,     0,   177,     0,     0,   175,   176,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,    53,    56,    54,    55,    57,    58,    70,    71,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    52,    72,     0,   144,     0,     0,     0,     0,   139,
     140,   141,   142,   143,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,     0,     0,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,   111,     0,     0,     0,   108,   109,   110,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,   118,   119,   121,   123,   120,   122,   125,   126,   124,
       0,   173,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   116,   178,    74,    94,    75,
      76,    77,    78,    82,    79,    80,    81,    83,    85,    10,
      10,    10,    10,    10,    10,    10,    12,    11,    88,    90,
      89,    91,    84,    86,    87,    92,    93,     0,     0,     0,
       0,    98,    99,   100,   101,   145,   146,   147,   158,   160,
       0,     0,     0,     0,     0,     0,   151,   152,   153,   155,
     154,   156,   157,    46,    45,    47,    42,    43,    39,    40,
      41,    44,     0,     0,   106,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,   115,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,     0,     0,   150,   112,   113,   132,    20,
      20,    20,    22,    21,   135,   128,     0,   130,   133,   131,
     134,   129,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,   171,     0,   149,    23,    24,    25,     0,   104,
     103,   102,   164,   165,     0,   163,   168,   166,   159,     0,
       0,   170,   167,   136,   161,     0,     0,   169,   162,   172
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -208,  -208,  -208,   -56,  -123,  -207,    12,  -208,  -208,   291,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,   266,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,  -208,  -208,   -17,  -208,  -208,  -208,
    -208,  -208,  -208,   103,  -208,  -208,  -208,  -208,  -208,    90,
    -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,   274,  -208,  -208,  -208,  -208,  -208,  -208,   -28,  -208,
    -208,  -208,  -208,  -124,  -208,  -208,  -208,  -208,  -208,   -42,
    -208,  -208,   296,  -208
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,   256,   257,   342,   343,     8,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,     9,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,   270,   271,   272,   273,   274,
      10,    11,   155,   156,   157,   158,    12,    13,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,    14,
      78,    79,    80,    81,    82,    83,    84,   285,   286,   287,
     288,   328,   374,   375,   289,   290,   291,   292,   361,   362,
      15,    24,    25,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     195,    27,   197,   360,    28,    16,    22,   380,   267,    17,
     -95,    22,   152,   268,    29,    18,   384,   269,   211,   385,
     213,    19,   215,   216,   217,    30,   372,   373,   152,    31,
      20,   159,    23,    32,    33,    34,    35,    23,   153,    36,
      37,    85,    38,    21,    39,    40,    41,    42,   106,   107,
     160,    86,    87,    88,   153,    89,    90,   108,   161,    43,
     162,   154,   326,   111,    44,    45,    46,   112,    47,   113,
      48,    91,    92,   163,   278,   132,   279,   154,   280,    74,
     109,    93,   134,   114,  -148,   115,   223,   140,   180,    94,
     164,   165,   166,   167,   116,    75,    76,   117,   281,   159,
     168,   118,   119,   282,   181,   234,   339,   340,   341,   313,
     120,    27,   121,   122,    28,   150,   123,   182,   160,   124,
     -95,   283,   267,   125,    29,   126,   161,   268,   162,   127,
     128,   269,   365,   366,   367,    30,    77,   129,   130,    31,
     284,   163,   131,    32,    33,    34,    35,   135,   334,    36,
      37,   136,    38,   138,    39,    40,    41,    42,   164,   165,
     166,   167,   278,     2,   279,   137,   280,    74,   168,    43,
     306,   141,  -148,   142,    44,    45,    46,   143,    47,   144,
      48,   145,     3,    75,    76,   146,   281,     4,   147,   148,
     149,   282,    85,   316,   317,   318,   319,   320,   321,   322,
       5,     6,    86,    87,    88,   183,    89,    90,   184,   283,
     185,   186,   187,  -114,   188,   249,   250,   251,   252,   253,
     254,   255,    91,    92,    77,   189,   190,   191,   284,   192,
     205,   193,    93,   194,   221,   194,   204,   196,   307,   198,
      94,   199,   210,   200,   201,   209,   202,   203,   206,   207,
     208,   212,   214,   327,   218,   219,   222,   335,   224,   235,
     220,   388,   225,   226,   227,   228,   229,   230,   309,   231,
     232,   233,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   275,   276,   277,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   332,   308,   310,   311,   133,   312,   314,   315,   381,
     110,     0,     0,   323,   324,   325,   329,   330,   331,   333,
     336,   337,   338,   344,   345,     0,   347,   346,   348,   349,
     350,   351,   352,   353,   354,   355,   357,     0,   358,   359,
     356,   360,   139,   363,   364,   368,   379,     0,   369,   370,
       0,   371,   376,   377,   378,   382,   383,   386,   387,   389,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   151
};

static const yytype_int16 yycheck[] =
{
     123,     1,   125,    71,     4,    74,     1,    75,    21,    74,
      10,     1,     1,    26,    14,    74,    76,    30,   141,    79,
     143,    74,   145,   146,   147,    25,    22,    23,     1,    29,
      69,     1,    27,    33,    34,    35,    36,    27,    27,    39,
      40,     1,    42,    50,    44,    45,    46,    47,    74,    74,
      20,    11,    12,    13,    27,    15,    16,    77,    28,    59,
      30,    50,    75,    77,    64,    65,    66,    77,    68,    77,
      70,    31,    32,    43,     1,    75,     3,    50,     5,     1,
      75,    41,    10,    77,     6,    77,    75,     6,    72,    49,
      60,    61,    62,    63,    77,    17,    18,    77,    25,     1,
      70,    77,    77,    30,    76,    75,     7,     8,     9,   232,
      77,     1,    77,    77,     4,    75,    77,    72,    20,    77,
      10,    48,    21,    77,    14,    77,    28,    26,    30,    77,
      77,    30,   339,   340,   341,    25,    58,    77,    77,    29,
      67,    43,    77,    33,    34,    35,    36,    77,    75,    39,
      40,    77,    42,    75,    44,    45,    46,    47,    60,    61,
      62,    63,     1,     0,     3,    77,     5,     1,    70,    59,
      71,    77,     6,    77,    64,    65,    66,    77,    68,    77,
      70,    77,    19,    17,    18,    77,    25,    24,    77,    77,
      77,    30,     1,   249,   250,   251,   252,   253,   254,   255,
      37,    38,    11,    12,    13,    72,    15,    16,    72,    48,
      72,    72,    72,    50,    72,    51,    52,    53,    54,    55,
      56,    57,    31,    32,    58,    72,    72,    72,    67,    71,
      74,    72,    41,    71,    77,    71,    76,    72,   226,    72,
      49,    71,    74,    72,    71,    76,    72,    72,    72,    72,
      72,    71,    71,   270,    72,    72,    77,   285,   155,   169,
      76,   385,    77,    77,    77,    77,    77,    77,    73,    77,
      77,    77,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    72,    72,    76,    71,
      71,    74,    72,    72,    71,    49,    72,    72,    76,   361,
      24,    -1,    -1,    77,    77,    77,    77,    77,    77,    77,
      76,    76,    76,    76,    76,    -1,    76,    78,    76,    76,
      76,    76,    72,    72,    72,    76,    71,    -1,    72,    72,
      77,    71,    78,    72,    76,    71,    77,    -1,    76,    76,
      -1,    76,    76,    76,    76,    76,    76,    72,    76,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    81,     0,    19,    24,    37,    38,    82,    87,    99,
     130,   131,   136,   137,   149,   170,    74,    74,    74,    74,
      69,    50,     1,    27,   171,   172,   173,     1,     4,    14,
      25,    29,    33,    34,    35,    36,    39,    40,    42,    44,
      45,    46,    47,    59,    64,    65,    66,    68,    70,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,     1,    17,    18,    58,   150,   151,
     152,   153,   154,   155,   156,     1,    11,    12,    13,    15,
      16,    31,    32,    41,    49,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    74,    74,    77,    75,
     172,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    75,   101,    10,    77,    77,    77,    75,   151,
       6,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      75,    89,     1,    27,    50,   132,   133,   134,   135,     1,
      20,    28,    30,    43,    60,    61,    62,    63,    70,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
      72,    76,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    71,    72,    71,    84,    72,    84,    72,    71,
      72,    71,    72,    72,    76,    74,    72,    72,    72,    76,
      74,    84,    71,    84,    71,    84,    84,    84,    72,    72,
      76,    77,    77,    75,   133,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    75,   139,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    51,
      52,    53,    54,    55,    56,    57,    83,    84,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    21,    26,    30,
     125,   126,   127,   128,   129,    76,    76,    76,     1,     3,
       5,    25,    30,    48,    67,   157,   158,   159,   160,   164,
     165,   166,   167,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    72,    72,    76,    71,    71,    86,    72,    73,
      72,    71,    72,    84,    72,    76,    83,    83,    83,    83,
      83,    83,    83,    77,    77,    77,    75,   126,   161,    77,
      77,    77,    74,    77,    75,   158,    76,    76,    76,     7,
       8,     9,    85,    86,    76,    76,    78,    76,    76,    76,
      76,    76,    72,    72,    72,    76,    77,    71,    72,    72,
      71,   168,   169,    72,    76,    85,    85,    85,    71,    76,
      76,    76,    22,    23,   162,   163,    76,    76,    76,    77,
      75,   169,    76,    76,    76,    79,    72,    76,   163,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    81,    82,    82,    82,    82,    82,    82,
      83,    83,    84,    84,    84,    84,    84,    84,    84,    84,
      85,    85,    86,    86,    86,    86,    87,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     100,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   124,   123,   125,   125,   126,
     126,   126,   127,   128,   129,   131,   130,   132,   132,   133,
     133,   133,   134,   135,   137,   136,   138,   138,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   150,
     151,   151,   151,   151,   151,   152,   153,   154,   156,   155,
     157,   157,   158,   158,   158,   158,   158,   158,   158,   159,
     161,   160,   162,   162,   163,   163,   164,   165,   166,   167,
     168,   168,   169,   170,   171,   171,   172,   172,   173
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
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     5,     2,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       0,     5,     3,     1,     1,     1,     4,     4,     4,     5,
       2,     1,     4,     5,     2,     1,     1,     1,     4
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
#line 121 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = 0; }
#line 1665 "config-parser.c" /* yacc.c:1652  */
    break;

  case 12:
#line 122 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1671 "config-parser.c" /* yacc.c:1652  */
    break;

  case 13:
#line 123 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1677 "config-parser.c" /* yacc.c:1652  */
    break;

  case 14:
#line 124 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 1683 "config-parser.c" /* yacc.c:1652  */
    break;

  case 15:
#line 125 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 1689 "config-parser.c" /* yacc.c:1652  */
    break;

  case 16:
#line 126 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 1695 "config-parser.c" /* yacc.c:1652  */
    break;

  case 17:
#line 127 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 1701 "config-parser.c" /* yacc.c:1652  */
    break;

  case 18:
#line 128 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 1707 "config-parser.c" /* yacc.c:1652  */
    break;

  case 19:
#line 129 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 1713 "config-parser.c" /* yacc.c:1652  */
    break;

  case 20:
#line 132 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = 0; }
#line 1719 "config-parser.c" /* yacc.c:1652  */
    break;

  case 22:
#line 133 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1725 "config-parser.c" /* yacc.c:1652  */
    break;

  case 23:
#line 134 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1731 "config-parser.c" /* yacc.c:1652  */
    break;

  case 24:
#line 135 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 1737 "config-parser.c" /* yacc.c:1652  */
    break;

  case 25:
#line 136 "config-parser.y" /* yacc.c:1652  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 1743 "config-parser.c" /* yacc.c:1652  */
    break;

  case 39:
#line 158 "config-parser.y" /* yacc.c:1652  */
    {
  OptionsItem.negcache = (yyvsp[-1].number);
}
#line 1751 "config-parser.c" /* yacc.c:1652  */
    break;

  case 40:
#line 163 "config-parser.y" /* yacc.c:1652  */
    {
  OptionsItem.negcache_rebuild = (yyvsp[-1].number);
}
#line 1759 "config-parser.c" /* yacc.c:1652  */
    break;

  case 41:
#line 168 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(OptionsItem.pidfile);
  OptionsItem.pidfile = xstrdup((yyvsp[-1].string));
}
#line 1768 "config-parser.c" /* yacc.c:1652  */
    break;

  case 42:
#line 174 "config-parser.y" /* yacc.c:1652  */
    {
  OptionsItem.dns_fdlimit = (yyvsp[-1].number);
}
#line 1776 "config-parser.c" /* yacc.c:1652  */
    break;

  case 43:
#line 179 "config-parser.y" /* yacc.c:1652  */
    {
  OptionsItem.dns_timeout = (yyvsp[-1].number);
}
#line 1784 "config-parser.c" /* yacc.c:1652  */
    break;

  case 44:
#line 184 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(OptionsItem.scanlog);
  OptionsItem.scanlog = xstrdup((yyvsp[-1].string));
}
#line 1793 "config-parser.c" /* yacc.c:1652  */
    break;

  case 45:
#line 190 "config-parser.y" /* yacc.c:1652  */
    {
  OptionsItem.command_queue_size = (yyvsp[-1].number);
}
#line 1801 "config-parser.c" /* yacc.c:1652  */
    break;

  case 46:
#line 195 "config-parser.y" /* yacc.c:1652  */
    {
  OptionsItem.command_interval = (yyvsp[-1].number);
}
#line 1809 "config-parser.c" /* yacc.c:1652  */
    break;

  case 47:
#line 200 "config-parser.y" /* yacc.c:1652  */
    {
  OptionsItem.command_timeout = (yyvsp[-1].number);
}
#line 1817 "config-parser.c" /* yacc.c:1652  */
    break;

  case 74:
#line 236 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.away);
  IRCItem.away = xstrdup((yyvsp[-1].string));
}
#line 1826 "config-parser.c" /* yacc.c:1652  */
    break;

  case 75:
#line 242 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.kline);
  IRCItem.kline = xstrdup((yyvsp[-1].string));
}
#line 1835 "config-parser.c" /* yacc.c:1652  */
    break;

  case 76:
#line 248 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.mode);
  IRCItem.mode = xstrdup((yyvsp[-1].string));
}
#line 1844 "config-parser.c" /* yacc.c:1652  */
    break;

  case 77:
#line 254 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.nick);
  IRCItem.nick = xstrdup((yyvsp[-1].string));
}
#line 1853 "config-parser.c" /* yacc.c:1652  */
    break;

  case 78:
#line 260 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.nickserv);
  IRCItem.nickserv = xstrdup((yyvsp[-1].string));
}
#line 1862 "config-parser.c" /* yacc.c:1652  */
    break;

  case 79:
#line 266 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.oper);
  IRCItem.oper = xstrdup((yyvsp[-1].string));
}
#line 1871 "config-parser.c" /* yacc.c:1652  */
    break;

  case 80:
#line 272 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.password);
  IRCItem.password = xstrdup((yyvsp[-1].string));
}
#line 1880 "config-parser.c" /* yacc.c:1652  */
    break;

  case 81:
#line 278 "config-parser.y" /* yacc.c:1652  */
    {
  list_add(xstrdup((yyvsp[-1].string)), node_create(), &IRCItem.performs);
}
#line 1888 "config-parser.c" /* yacc.c:1652  */
    break;

  case 82:
#line 283 "config-parser.y" /* yacc.c:1652  */
    {
  list_add(xstrdup((yyvsp[-1].string)), node_create(), &IRCItem.notices);
}
#line 1896 "config-parser.c" /* yacc.c:1652  */
    break;

  case 83:
#line 288 "config-parser.y" /* yacc.c:1652  */
    {
  IRCItem.port = (yyvsp[-1].number);
}
#line 1904 "config-parser.c" /* yacc.c:1652  */
    break;

  case 84:
#line 293 "config-parser.y" /* yacc.c:1652  */
    {
  IRCItem.tls = (yyvsp[-1].number);
}
#line 1912 "config-parser.c" /* yacc.c:1652  */
    break;

  case 85:
#line 298 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.rsa_private_key_file);
  IRCItem.rsa_private_key_file = xstrdup((yyvsp[-1].string));
}
#line 1921 "config-parser.c" /* yacc.c:1652  */
    break;

  case 86:
#line 305 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.tls_certificate_file);
  IRCItem.tls_certificate_file = xstrdup((yyvsp[-1].string));
}
#line 1930 "config-parser.c" /* yacc.c:1652  */
    break;

  case 87:
#line 311 "config-parser.y" /* yacc.c:1652  */
    {
  IRCItem.tls_hostname_verification = (yyvsp[-1].number);
}
#line 1938 "config-parser.c" /* yacc.c:1652  */
    break;

  case 88:
#line 316 "config-parser.y" /* yacc.c:1652  */
    {
  IRCItem.readtimeout = (yyvsp[-1].number);
}
#line 1946 "config-parser.c" /* yacc.c:1652  */
    break;

  case 89:
#line 321 "config-parser.y" /* yacc.c:1652  */
    {
  IRCItem.reconnectinterval = (yyvsp[-1].number);
}
#line 1954 "config-parser.c" /* yacc.c:1652  */
    break;

  case 90:
#line 326 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.realname);
  IRCItem.realname = xstrdup((yyvsp[-1].string));
}
#line 1963 "config-parser.c" /* yacc.c:1652  */
    break;

  case 91:
#line 332 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.server);
  IRCItem.server = xstrdup((yyvsp[-1].string));
}
#line 1972 "config-parser.c" /* yacc.c:1652  */
    break;

  case 92:
#line 338 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.username);
  IRCItem.username = xstrdup((yyvsp[-1].string));
}
#line 1981 "config-parser.c" /* yacc.c:1652  */
    break;

  case 93:
#line 344 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.vhost);
  IRCItem.vhost = xstrdup((yyvsp[-1].string));
}
#line 1990 "config-parser.c" /* yacc.c:1652  */
    break;

  case 94:
#line 350 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(IRCItem.connregex);
  IRCItem.connregex = xstrdup((yyvsp[-1].string));
}
#line 1999 "config-parser.c" /* yacc.c:1652  */
    break;

  case 95:
#line 358 "config-parser.y" /* yacc.c:1652  */
    {
  struct ChannelConf *item;

  item = xcalloc(sizeof(*item));
  item->name = xstrdup("");
  item->key = xstrdup("");
  item->invite = xstrdup("");

  list_add(item, &item->node, &IRCItem.channels);
  tmp = item;
}
#line 2015 "config-parser.c" /* yacc.c:1652  */
    break;

  case 102:
#line 379 "config-parser.y" /* yacc.c:1652  */
    {
  struct ChannelConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2026 "config-parser.c" /* yacc.c:1652  */
    break;

  case 103:
#line 387 "config-parser.y" /* yacc.c:1652  */
    {
  struct ChannelConf *item = tmp;

  xfree(item->key);
  item->key = xstrdup((yyvsp[-1].string));
}
#line 2037 "config-parser.c" /* yacc.c:1652  */
    break;

  case 104:
#line 395 "config-parser.y" /* yacc.c:1652  */
    {
  struct ChannelConf *item = tmp;

  xfree(item->invite);
  item->invite = xstrdup((yyvsp[-1].string));
}
#line 2048 "config-parser.c" /* yacc.c:1652  */
    break;

  case 105:
#line 405 "config-parser.y" /* yacc.c:1652  */
    {
  struct UserConf *item;

  item = xcalloc(sizeof(*item));

  list_add(item, &item->node, &UserItemList);
  tmp = item;
}
#line 2061 "config-parser.c" /* yacc.c:1652  */
    break;

  case 112:
#line 423 "config-parser.y" /* yacc.c:1652  */
    {
  struct UserConf *item = tmp;

  list_add(xstrdup((yyvsp[-1].string)), node_create(), &item->masks);
}
#line 2071 "config-parser.c" /* yacc.c:1652  */
    break;

  case 113:
#line 430 "config-parser.y" /* yacc.c:1652  */
    {
  struct UserConf *item = tmp;

  list_add(xstrdup((yyvsp[-1].string)), node_create(), &item->scanners);
}
#line 2081 "config-parser.c" /* yacc.c:1652  */
    break;

  case 114:
#line 439 "config-parser.y" /* yacc.c:1652  */
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
#line 2119 "config-parser.c" /* yacc.c:1652  */
    break;

  case 128:
#line 489 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2130 "config-parser.c" /* yacc.c:1652  */
    break;

  case 129:
#line 497 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  xfree(item->vhost);
  item->vhost = xstrdup((yyvsp[-1].string));
}
#line 2141 "config-parser.c" /* yacc.c:1652  */
    break;

  case 130:
#line 505 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  xfree(item->target_ip);
  item->target_ip = xstrdup((yyvsp[-1].string));
}
#line 2152 "config-parser.c" /* yacc.c:1652  */
    break;

  case 131:
#line 513 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  if (item->target_string_created == 0)
  {
    memset(&item->target_string, 0, sizeof(item->target_string));
    item->target_string_created = 1;
  }

  list_add(xstrdup((yyvsp[-1].string)), node_create(), &item->target_string);
}
#line 2168 "config-parser.c" /* yacc.c:1652  */
    break;

  case 132:
#line 526 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  item->fd = (yyvsp[-1].number);
}
#line 2178 "config-parser.c" /* yacc.c:1652  */
    break;

  case 133:
#line 533 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  item->target_port = (yyvsp[-1].number);
}
#line 2188 "config-parser.c" /* yacc.c:1652  */
    break;

  case 134:
#line 540 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  item->timeout = (yyvsp[-1].number);
}
#line 2198 "config-parser.c" /* yacc.c:1652  */
    break;

  case 135:
#line 547 "config-parser.y" /* yacc.c:1652  */
    {
  struct ScannerConf *item = tmp;

  item->max_read = (yyvsp[-1].number);
}
#line 2208 "config-parser.c" /* yacc.c:1652  */
    break;

  case 136:
#line 554 "config-parser.y" /* yacc.c:1652  */
    {
  struct ProtocolConf *item;
  struct ScannerConf *item2;

  item = xcalloc(sizeof(*item));
  item->type = (yyvsp[-3].number);
  item->port = (yyvsp[-1].number);

  item2 = tmp;

  list_add(item, node_create(), &item2->protocols);
}
#line 2225 "config-parser.c" /* yacc.c:1652  */
    break;

  case 145:
#line 581 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(OpmItem.dnsbl_from);
  OpmItem.dnsbl_from = xstrdup((yyvsp[-1].string));
}
#line 2234 "config-parser.c" /* yacc.c:1652  */
    break;

  case 146:
#line 587 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(OpmItem.dnsbl_to);
  OpmItem.dnsbl_to = xstrdup((yyvsp[-1].string));
}
#line 2243 "config-parser.c" /* yacc.c:1652  */
    break;

  case 147:
#line 593 "config-parser.y" /* yacc.c:1652  */
    {
  xfree(OpmItem.sendmail);
  OpmItem.sendmail = xstrdup((yyvsp[-1].string));
}
#line 2252 "config-parser.c" /* yacc.c:1652  */
    break;

  case 148:
#line 601 "config-parser.y" /* yacc.c:1652  */
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
#line 2271 "config-parser.c" /* yacc.c:1652  */
    break;

  case 159:
#line 629 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2282 "config-parser.c" /* yacc.c:1652  */
    break;

  case 160:
#line 637 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistConf *item = tmp;

  item->ipv4 = 0;
  item->ipv6 = 0;
}
#line 2293 "config-parser.c" /* yacc.c:1652  */
    break;

  case 164:
#line 646 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistConf *item = tmp;

  item->ipv4 = 1;
}
#line 2303 "config-parser.c" /* yacc.c:1652  */
    break;

  case 165:
#line 651 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistConf *item = tmp;

  item->ipv6 = 1;
}
#line 2313 "config-parser.c" /* yacc.c:1652  */
    break;

  case 166:
#line 658 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistConf *item = tmp;

  xfree(item->kline);
  item->kline = xstrdup((yyvsp[-1].string));
}
#line 2324 "config-parser.c" /* yacc.c:1652  */
    break;

  case 167:
#line 666 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistConf *item = tmp;

  if (strcmp("A record bitmask", (yyvsp[-1].string)) == 0)
    item->type = A_BITMASK;
  else if (strcmp("A record reply", (yyvsp[-1].string)) == 0)
    item->type = A_REPLY;
  else
    yyerror("Unknown blacklist type defined");
}
#line 2339 "config-parser.c" /* yacc.c:1652  */
    break;

  case 168:
#line 678 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistConf *item = tmp;

  item->ban_unknown = (yyvsp[-1].number);
}
#line 2349 "config-parser.c" /* yacc.c:1652  */
    break;

  case 172:
#line 690 "config-parser.y" /* yacc.c:1652  */
    {
  struct BlacklistReplyConf *item;
  struct BlacklistConf *blacklist = tmp;

  item = xcalloc(sizeof(*item));
  item->number = (yyvsp[-3].number);
  item->type = xstrdup((yyvsp[-1].string));

  list_add(item, node_create(), &blacklist->reply);
}
#line 2364 "config-parser.c" /* yacc.c:1652  */
    break;

  case 178:
#line 712 "config-parser.y" /* yacc.c:1652  */
    {
  list_add(xstrdup((yyvsp[-1].string)), node_create(), &ExemptItem.masks);
}
#line 2372 "config-parser.c" /* yacc.c:1652  */
    break;


#line 2376 "config-parser.c" /* yacc.c:1652  */
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
#line 716 "config-parser.y" /* yacc.c:1918  */


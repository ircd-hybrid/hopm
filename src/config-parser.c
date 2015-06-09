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

#include "memory.h"
#include "config.h"

int yylex(void);

static void *tmp;  /* Variable to temporarily hold nodes before insertion to list */


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
    NOTICE = 283,
    OPER = 284,
    OPM = 285,
    OPTIONS = 286,
    PASSWORD = 287,
    PERFORM = 288,
    PIDFILE = 289,
    PORT = 290,
    PROTOCOL = 291,
    READTIMEOUT = 292,
    REALNAME = 293,
    RECONNECTINTERVAL = 294,
    REPLY = 295,
    SCANLOG = 296,
    SCANNER = 297,
    SECONDS = 298,
    MINUTES = 299,
    HOURS = 300,
    DAYS = 301,
    WEEKS = 302,
    MONTHS = 303,
    YEARS = 304,
    SENDMAIL = 305,
    SERVER = 306,
    TARGET_IP = 307,
    TARGET_PORT = 308,
    TARGET_STRING = 309,
    TIMEOUT = 310,
    TYPE = 311,
    USERNAME = 312,
    USER = 313,
    VHOST = 314,
    NUMBER = 315,
    STRING = 316,
    PROTOCOLTYPE = 317
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
#define NOTICE 283
#define OPER 284
#define OPM 285
#define OPTIONS 286
#define PASSWORD 287
#define PERFORM 288
#define PIDFILE 289
#define PORT 290
#define PROTOCOL 291
#define READTIMEOUT 292
#define REALNAME 293
#define RECONNECTINTERVAL 294
#define REPLY 295
#define SCANLOG 296
#define SCANNER 297
#define SECONDS 298
#define MINUTES 299
#define HOURS 300
#define DAYS 301
#define WEEKS 302
#define MONTHS 303
#define YEARS 304
#define SENDMAIL 305
#define SERVER 306
#define TARGET_IP 307
#define TARGET_PORT 308
#define TARGET_STRING 309
#define TIMEOUT 310
#define TYPE 311
#define USERNAME 312
#define USER 313
#define VHOST 314
#define NUMBER 315
#define STRING 316
#define PROTOCOLTYPE 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 85 "config-parser.y" /* yacc.c:355  */

  int number;
  char *string;

#line 248 "config-parser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 265 "config-parser.c" /* yacc.c:358  */

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
#define YYLAST   333

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  339

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

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
       2,     2,     2,     2,     2,     2,     2,     2,    67,    65,
       2,    66,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,    64,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   101,   104,   105,   106,   107,   108,   109,
     111,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     122,   122,   123,   124,   125,   126,   131,   133,   134,   136,
     137,   138,   139,   140,   141,   143,   148,   153,   159,   164,
     172,   174,   175,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   197,   203,   209,   215,   221,   227,   233,   239,
     247,   255,   260,   265,   270,   276,   282,   288,   294,   303,
     303,   319,   320,   322,   323,   324,   326,   334,   342,   353,
     353,   368,   369,   371,   372,   373,   375,   385,   398,   398,
     441,   442,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   455,   463,   471,   479,   495,   502,   509,   516,
     523,   542,   544,   545,   547,   548,   549,   550,   551,   553,
     559,   565,   574,   574,   593,   594,   596,   597,   598,   599,
     600,   601,   603,   611,   619,   631,   638,   640,   641,   643,
     660,   662,   663,   665,   666,   668
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
  "options_pidfile", "options_dns_fdlimit", "options_scanlog", "irc_entry",
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
     315,   316,   317,   123,   125,    59,    61,    58
};
# endif

#define YYPACT_NINF -249

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-249)))

#define YYTABLE_NINF -133

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -249,   137,  -249,   -56,   -50,   -49,   -39,  -249,  -249,  -249,
    -249,   -22,  -249,    -1,  -249,  -249,     5,    90,   147,   165,
      -7,    12,  -249,    -3,     3,  -249,  -249,  -249,     2,    11,
      21,    23,    24,    26,    29,    30,    31,    35,    37,    38,
      45,    47,    48,    49,    58,     0,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,    67,  -249,    60,    64,    65,
      57,  -249,  -249,  -249,  -249,  -249,    80,  -249,    66,    69,
      72,    77,    78,    20,  -249,  -249,  -249,  -249,  -249,  -249,
      10,   119,    25,    81,  -249,    84,    89,    95,    96,   100,
     101,   102,   103,   104,   108,   110,   117,   127,   117,   131,
     132,   133,   115,  -249,   139,   134,   140,   142,   149,  -249,
     141,   136,   117,   117,   144,   154,   151,  -249,  -249,   152,
     153,    46,  -249,  -249,  -249,  -249,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    19,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,   166,  -249,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   138,
     178,   179,   180,   181,   182,   183,  -249,    86,   184,   185,
     186,  -249,   135,   187,   188,   189,   190,   191,  -249,   196,
     197,   194,  -249,   200,   201,   202,   203,   205,   204,   206,
     117,   207,   208,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,   117,   117,   117,   117,
     117,   117,   117,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,   164,   209,   210,   -11,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,   211,   212,   213,   199,   214,    42,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
     216,   217,  -249,   218,    73,   219,   220,   150,   221,   222,
     223,   224,   225,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,   230,   231,   232,   229,  -249,   235,   236,   237,   239,
     240,   238,  -249,  -249,  -249,  -249,   201,   201,   201,  -249,
    -249,  -249,  -249,   242,  -249,  -249,  -249,  -249,  -249,   241,
     243,   244,  -249,   245,   246,   247,   234,   -45,  -249,   248,
    -249,  -249,  -249,  -249,   249,  -249,  -249,  -249,  -249,  -249,
    -249,   254,   251,  -249,  -249,  -249,   252,  -249,  -249
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    89,     1,     0,     0,     0,     0,     3,     5,     4,
       7,     0,     8,     0,     6,     9,     0,     0,     0,     0,
       0,     0,   154,     0,     0,   152,   153,    61,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    45,    48,
      46,    47,    49,    50,    58,    59,    51,    52,    53,    54,
      55,    56,    57,    44,    60,     0,   128,     0,     0,     0,
       0,   123,   124,   125,   126,   127,     0,    34,     0,     0,
       0,     0,     0,     0,    28,    29,    30,    31,    32,    33,
       0,     0,     0,     0,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,   122,
       0,     0,     0,     0,     0,     0,     0,    27,    95,     0,
       0,     0,    92,    93,    94,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,   103,   105,
     107,   104,   106,   109,   110,   108,     0,   150,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,    40,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   155,    62,    78,    63,    64,    65,
      66,    70,    67,    68,    69,    71,    10,    10,    10,    10,
      10,    10,    10,    12,    11,    72,    74,    73,    75,    76,
      77,     0,     0,     0,     0,    82,    83,    84,    85,   129,
     130,   131,   141,     0,     0,     0,     0,     0,     0,   135,
     136,   138,   137,   139,   140,    38,    35,    36,    37,    39,
       0,     0,    90,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,    99,    13,    14,    15,    16,    17,    18,
      19,     0,     0,     0,     0,    81,     0,     0,     0,     0,
       0,     0,   134,    96,    97,   116,    20,    20,    20,    22,
      21,   119,   112,     0,   114,   117,   115,   118,   113,     0,
       0,     0,    80,     0,     0,     0,     0,     0,   148,     0,
     133,    23,    24,    25,     0,    88,    87,    86,   145,   143,
     142,     0,     0,   147,   144,   120,     0,   146,   149
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -249,  -249,  -249,    -9,  -106,  -248,     6,  -249,  -249,   250,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,   226,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,   -14,  -249,
    -249,  -249,  -249,  -249,  -249,   143,  -249,  -249,  -249,  -249,
    -249,   124,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,   253,  -249,  -249,  -249,  -249,  -249,  -249,
      22,  -249,  -249,  -249,  -249,  -249,  -249,   -21,  -249,  -249,
     280,  -249
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,   223,   224,   299,   300,     8,    83,    84,
      85,    86,    87,    88,    89,     9,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,   234,   235,   236,
     237,   238,    10,    11,   131,   132,   133,   134,    12,    13,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    14,    70,    71,    72,    73,    74,    75,    76,   248,
     249,   250,   251,   252,   253,   254,   317,   318,    15,    24,
      25,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     170,    27,   172,    28,    22,   231,    22,    16,   232,   -79,
      29,   128,   233,    17,    18,   316,   184,   185,    30,   332,
     135,    77,    31,    23,    19,    23,    32,    33,    34,    35,
     129,    78,    36,    37,   136,    38,    20,    39,    40,    41,
     137,    21,   138,   242,    79,    80,   243,   128,   321,   322,
     323,    42,   130,   284,    81,   139,    90,    43,    66,    44,
     244,    82,  -132,    92,   112,   245,   129,    93,    95,    67,
      68,   140,   141,   142,   143,    91,   114,    96,   144,   296,
     297,   298,   246,   202,   126,   120,   156,    97,   130,    98,
      99,    27,   100,    28,   271,   101,   102,   103,   247,   -79,
      29,   104,   231,   105,   106,   232,   291,    69,    30,   233,
     191,   107,    31,   108,   109,   110,    32,    33,    34,    35,
     135,   118,    36,    37,   111,    38,   115,    39,    40,    41,
     116,   117,   121,   264,   136,   122,   242,     2,   123,   243,
     137,    42,   138,   124,   125,   158,   157,    43,    66,    44,
     159,     3,  -132,   244,     4,   139,   160,   161,   245,    67,
      68,   162,   163,   164,   165,   166,    77,     5,     6,   167,
     168,   140,   141,   142,   143,   246,    78,   169,   144,   -98,
     176,   216,   217,   218,   219,   220,   221,   222,   171,    79,
      80,   247,   173,   174,   175,   178,   183,    69,   169,    81,
     265,   179,   177,   180,   182,   186,    82,   274,   275,   276,
     277,   278,   279,   280,   181,   187,   188,   303,   189,   190,
     285,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     281,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   225,   226,   227,   228,   229,   230,   239,
     240,   241,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   289,   266,   269,   267,   268,   270,   272,   203,
     292,   113,     0,   273,   192,   282,   283,   286,   287,   288,
     290,   293,   294,   295,   301,   302,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   333,   314,   315,   316,
     331,   319,   324,   320,    94,     0,   325,     0,   326,   327,
     328,   329,   330,   334,   335,   336,   337,   338,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   127
};

static const yytype_int16 yycheck[] =
{
     106,     1,   108,     3,     1,    16,     1,    63,    19,     9,
      10,     1,    23,    63,    63,    60,   122,   123,    18,    64,
       1,     1,    22,    20,    63,    20,    26,    27,    28,    29,
      20,    11,    32,    33,    15,    35,    58,    37,    38,    39,
      21,    42,    23,     1,    24,    25,     4,     1,   296,   297,
     298,    51,    42,    64,    34,    36,    63,    57,     1,    59,
      18,    41,     5,    66,    64,    23,    20,    64,    66,    12,
      13,    52,    53,    54,    55,    63,     9,    66,    59,     6,
       7,     8,    40,    64,    64,     5,    61,    66,    42,    66,
      66,     1,    66,     3,   200,    66,    66,    66,    56,     9,
      10,    66,    16,    66,    66,    19,    64,    50,    18,    23,
      64,    66,    22,    66,    66,    66,    26,    27,    28,    29,
       1,    64,    32,    33,    66,    35,    66,    37,    38,    39,
      66,    66,    66,    60,    15,    66,     1,     0,    66,     4,
      21,    51,    23,    66,    66,    61,    65,    57,     1,    59,
      61,    14,     5,    18,    17,    36,    61,    61,    23,    12,
      13,    61,    61,    61,    61,    61,     1,    30,    31,    61,
      60,    52,    53,    54,    55,    40,    11,    60,    59,    42,
      65,    43,    44,    45,    46,    47,    48,    49,    61,    24,
      25,    56,    61,    61,    61,    61,    60,    50,    60,    34,
     194,    61,    63,    61,    63,    61,    41,   216,   217,   218,
     219,   220,   221,   222,    65,    61,    65,    67,    66,    66,
     234,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    61,    61,    65,
      60,    60,    63,    61,    60,    62,    61,    61,    61,   145,
     248,    45,    -1,    65,   131,    66,    66,    66,    66,    66,
      66,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    61,    61,    61,    65,    60,   317,    61,    61,    60,
      66,    61,    60,    65,    24,    -1,    65,    -1,    65,    65,
      65,    65,    65,    65,    65,    61,    65,    65,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    69,     0,    14,    17,    30,    31,    70,    75,    83,
     110,   111,   116,   117,   129,   146,    63,    63,    63,    63,
      58,    42,     1,    20,   147,   148,   149,     1,     3,    10,
      18,    22,    26,    27,    28,    29,    32,    33,    35,    37,
      38,    39,    51,    57,    59,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,     1,    12,    13,    50,
     130,   131,   132,   133,   134,   135,   136,     1,    11,    24,
      25,    34,    41,    76,    77,    78,    79,    80,    81,    82,
      63,    63,    66,    64,   148,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    64,    85,     9,    66,    66,    66,    64,   131,
       5,    66,    66,    66,    66,    66,    64,    77,     1,    20,
      42,   112,   113,   114,   115,     1,    15,    21,    23,    36,
      52,    53,    54,    55,    59,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    61,    65,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    60,    60,
      72,    61,    72,    61,    61,    61,    65,    63,    61,    61,
      61,    65,    63,    60,    72,    72,    61,    61,    65,    66,
      66,    64,   113,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    64,   119,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    43,    44,    45,    46,
      47,    48,    49,    71,    72,    65,    65,    65,    65,    65,
      65,    16,    19,    23,   105,   106,   107,   108,   109,    65,
      65,    65,     1,     4,    18,    23,    40,    56,   137,   138,
     139,   140,   141,   142,   143,    65,    65,    65,    65,    65,
      61,    61,    65,    60,    60,    74,    61,    62,    61,    60,
      61,    72,    61,    65,    71,    71,    71,    71,    71,    71,
      71,    66,    66,    66,    64,   106,    66,    66,    66,    63,
      66,    64,   138,    65,    65,    65,     6,     7,     8,    73,
      74,    65,    65,    67,    65,    65,    65,    65,    65,    61,
      61,    61,    65,    60,    61,    61,    60,   144,   145,    61,
      65,    73,    73,    73,    60,    65,    65,    65,    65,    65,
      65,    66,    64,   145,    65,    65,    61,    65,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    69,    70,    70,    70,    70,    70,    70,
      71,    71,    72,    72,    72,    72,    72,    72,    72,    72,
      73,    73,    74,    74,    74,    74,    75,    76,    76,    77,
      77,    77,    77,    77,    77,    78,    79,    80,    81,    82,
      83,    84,    84,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   104,
     103,   105,   105,   106,   106,   106,   107,   108,   109,   111,
     110,   112,   112,   113,   113,   113,   114,   115,   117,   116,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   130,   131,   131,   131,   131,   131,   132,
     133,   134,   136,   135,   137,   137,   138,   138,   138,   138,
     138,   138,   139,   140,   141,   142,   143,   144,   144,   145,
     146,   147,   147,   148,   148,   149
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
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     4,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       6,     5,     2,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     5,     2,     1,     4,
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
#line 111 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 1597 "config-parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 112 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1603 "config-parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 113 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1609 "config-parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 114 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 1615 "config-parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 115 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 1621 "config-parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 116 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 1627 "config-parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 117 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 1633 "config-parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 118 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 1639 "config-parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 119 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 1645 "config-parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 122 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 1651 "config-parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 123 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1657 "config-parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 124 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1663 "config-parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 125 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 1669 "config-parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 126 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 1675 "config-parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 144 "config-parser.y" /* yacc.c:1646  */
    {
  OptionsItem->negcache = (yyvsp[-1].number);
}
#line 1683 "config-parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 149 "config-parser.y" /* yacc.c:1646  */
    {
  OptionsItem->negcache_rebuild = (yyvsp[-1].number);
}
#line 1691 "config-parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 154 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(OptionsItem->pidfile);
  OptionsItem->pidfile = xstrdup((yyvsp[-1].string));
}
#line 1700 "config-parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 160 "config-parser.y" /* yacc.c:1646  */
    {
  OptionsItem->dns_fdlimit = (yyvsp[-1].number);
}
#line 1708 "config-parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 165 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(OptionsItem->scanlog);
  OptionsItem->scanlog = xstrdup((yyvsp[-1].string));
}
#line 1717 "config-parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 198 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->away);
  IRCItem->away = xstrdup((yyvsp[-1].string));
}
#line 1726 "config-parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 204 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->kline);
  IRCItem->kline = xstrdup((yyvsp[-1].string));
}
#line 1735 "config-parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 210 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->mode);
  IRCItem->mode = xstrdup((yyvsp[-1].string));
}
#line 1744 "config-parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 216 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->nick);
  IRCItem->nick = xstrdup((yyvsp[-1].string));
}
#line 1753 "config-parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 222 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->nickserv);
  IRCItem->nickserv = xstrdup((yyvsp[-1].string));
}
#line 1762 "config-parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 228 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->oper);
  IRCItem->oper = xstrdup((yyvsp[-1].string));
}
#line 1771 "config-parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 234 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->password);
  IRCItem->password = xstrdup((yyvsp[-1].string));
}
#line 1780 "config-parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 240 "config-parser.y" /* yacc.c:1646  */
    {
  node_t *node;

  node = node_create(xstrdup((yyvsp[-1].string)));
  list_add(IRCItem->performs, node);
}
#line 1791 "config-parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 248 "config-parser.y" /* yacc.c:1646  */
    {
  node_t *node;

  node = node_create(xstrdup((yyvsp[-1].string)));
  list_add(IRCItem->notices, node);
}
#line 1802 "config-parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 256 "config-parser.y" /* yacc.c:1646  */
    {
  IRCItem->port = (yyvsp[-1].number);
}
#line 1810 "config-parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 261 "config-parser.y" /* yacc.c:1646  */
    {
  IRCItem->readtimeout = (yyvsp[-1].number);
}
#line 1818 "config-parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 266 "config-parser.y" /* yacc.c:1646  */
    {
  IRCItem->reconnectinterval = (yyvsp[-1].number);
}
#line 1826 "config-parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 271 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->realname);
  IRCItem->realname = xstrdup((yyvsp[-1].string));
}
#line 1835 "config-parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 277 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->server);
  IRCItem->server = xstrdup((yyvsp[-1].string));
}
#line 1844 "config-parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 283 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->username);
  IRCItem->username = xstrdup((yyvsp[-1].string));
}
#line 1853 "config-parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 289 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->vhost);
  IRCItem->vhost = xstrdup((yyvsp[-1].string));
}
#line 1862 "config-parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 295 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(IRCItem->connregex);
  IRCItem->connregex = xstrdup((yyvsp[-1].string));
}
#line 1871 "config-parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 303 "config-parser.y" /* yacc.c:1646  */
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
#line 1890 "config-parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 327 "config-parser.y" /* yacc.c:1646  */
    {
  struct ChannelConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 1901 "config-parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 335 "config-parser.y" /* yacc.c:1646  */
    {
  struct ChannelConf *item = tmp;

  xfree(item->key);
  item->key = xstrdup((yyvsp[-1].string));
}
#line 1912 "config-parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 343 "config-parser.y" /* yacc.c:1646  */
    {
  struct ChannelConf *item = tmp;

  xfree(item->invite);
  item->invite = xstrdup((yyvsp[-1].string));
}
#line 1923 "config-parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 353 "config-parser.y" /* yacc.c:1646  */
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
#line 1941 "config-parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 376 "config-parser.y" /* yacc.c:1646  */
    {
  struct UserConf *item = tmp;
  node_t *node;

  node = node_create(xstrdup((yyvsp[-1].string)));

  list_add(item->masks, node);
}
#line 1954 "config-parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 386 "config-parser.y" /* yacc.c:1646  */
    {
  struct UserConf *item = tmp;
  node_t *node;

  node = node_create(xstrdup((yyvsp[-1].string)));

  list_add(item->scanners, node);
}
#line 1967 "config-parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 398 "config-parser.y" /* yacc.c:1646  */
    {
  node_t *node;
  struct ScannerConf *item, *olditem;

  item = xcalloc(sizeof *item);

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
#line 2013 "config-parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 456 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2024 "config-parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 464 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;

  xfree(item->vhost);
  item->vhost = xstrdup((yyvsp[-1].string));
}
#line 2035 "config-parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 472 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;

  xfree(item->target_ip);
  item->target_ip = xstrdup((yyvsp[-1].string));
}
#line 2046 "config-parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 480 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;
  node_t *node;

  node = node_create((yyvsp[-1].string));

  if (item->target_string_created == 0)
  {
    item->target_string = list_create();
    item->target_string_created = 1;
  }

  list_add(item->target_string, node);
}
#line 2065 "config-parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 496 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;

  item->fd = (yyvsp[-1].number);
}
#line 2075 "config-parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 503 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;

  item->target_port = (yyvsp[-1].number);
}
#line 2085 "config-parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 510 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;

  item->timeout = (yyvsp[-1].number);
}
#line 2095 "config-parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 517 "config-parser.y" /* yacc.c:1646  */
    {
  struct ScannerConf *item = tmp;

  item->max_read = (yyvsp[-1].number);
}
#line 2105 "config-parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 524 "config-parser.y" /* yacc.c:1646  */
    {
  struct ProtocolConf *item;
  struct ScannerConf *item2;

  node_t *node;

  item = xcalloc(sizeof *item);
  item->type = (yyvsp[-3].number);
  item->port = (yyvsp[-1].number);

  item2 = tmp;

  node = node_create(item);
  list_add(item2->protocols, node);
}
#line 2125 "config-parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 554 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(OpmItem->dnsbl_from);
  OpmItem->dnsbl_from = xstrdup((yyvsp[-1].string));
}
#line 2134 "config-parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 560 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(OpmItem->dnsbl_to);
  OpmItem->dnsbl_to = xstrdup((yyvsp[-1].string));
}
#line 2143 "config-parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 566 "config-parser.y" /* yacc.c:1646  */
    {
  xfree(OpmItem->sendmail);
  OpmItem->sendmail = xstrdup((yyvsp[-1].string));
}
#line 2152 "config-parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 574 "config-parser.y" /* yacc.c:1646  */
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
#line 2174 "config-parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 604 "config-parser.y" /* yacc.c:1646  */
    {
  struct BlacklistConf *item = tmp;

  xfree(item->name);
  item->name = xstrdup((yyvsp[-1].string));
}
#line 2185 "config-parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 612 "config-parser.y" /* yacc.c:1646  */
    {
  struct BlacklistConf *item = tmp;

  xfree(item->kline);
  item->kline = xstrdup((yyvsp[-1].string));
}
#line 2196 "config-parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 620 "config-parser.y" /* yacc.c:1646  */
    {
  struct BlacklistConf *item = tmp;

  if (strcmp("A record bitmask", (yyvsp[-1].string)) == 0)
    item->type = A_BITMASK;
  else if (strcmp("A record reply", (yyvsp[-1].string)) == 0)
    item->type = A_REPLY;
  else
    yyerror("Unknown blacklist type defined");
}
#line 2211 "config-parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 632 "config-parser.y" /* yacc.c:1646  */
    {
  struct BlacklistConf *item = tmp;

  item->ban_unknown = (yyvsp[-1].number);
}
#line 2221 "config-parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 644 "config-parser.y" /* yacc.c:1646  */
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
#line 2239 "config-parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 669 "config-parser.y" /* yacc.c:1646  */
    {
  node_t *node;
  node = node_create(xstrdup((yyvsp[-1].string)));

  list_add(ExemptItem->masks, node);
}
#line 2250 "config-parser.c" /* yacc.c:1646  */
    break;


#line 2254 "config-parser.c" /* yacc.c:1646  */
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
#line 676 "config-parser.y" /* yacc.c:1906  */


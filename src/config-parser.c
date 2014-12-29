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
    READTIMEOUT = 290,
    REALNAME = 291,
    REPLY = 292,
    SCANLOG = 293,
    SCANNER = 294,
    SECONDS = 295,
    MINUTES = 296,
    HOURS = 297,
    DAYS = 298,
    WEEKS = 299,
    MONTHS = 300,
    YEARS = 301,
    SENDMAIL = 302,
    SERVER = 303,
    TARGET_IP = 304,
    TARGET_PORT = 305,
    TARGET_STRING = 306,
    TIMEOUT = 307,
    TYPE = 308,
    USERNAME = 309,
    USER = 310,
    VHOST = 311,
    NUMBER = 312,
    STRING = 313,
    PROTOCOLTYPE = 314
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
#define READTIMEOUT 290
#define REALNAME 291
#define REPLY 292
#define SCANLOG 293
#define SCANNER 294
#define SECONDS 295
#define MINUTES 296
#define HOURS 297
#define DAYS 298
#define WEEKS 299
#define MONTHS 300
#define YEARS 301
#define SENDMAIL 302
#define SERVER 303
#define TARGET_IP 304
#define TARGET_PORT 305
#define TARGET_STRING 306
#define TIMEOUT 307
#define TYPE 308
#define USERNAME 309
#define USER 310
#define VHOST 311
#define NUMBER 312
#define STRING 313
#define PROTOCOLTYPE 314

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 86 "config-parser.y" /* yacc.c:355  */

        int number;
        char *string;

#line 242 "config-parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 257 "config-parser.c" /* yacc.c:358  */

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
#define YYLAST   306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  149
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  324

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
       2,     2,     2,     2,     2,     2,     2,     2,    64,    62,
       2,    63,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    61,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   102,   105,   106,   107,   108,   109,   110,
     112,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     123,   123,   124,   125,   126,   127,   132,   134,   135,   137,
     138,   139,   140,   141,   143,   148,   154,   159,   167,   169,
     170,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   190,   196,
     202,   208,   214,   220,   226,   232,   240,   245,   250,   256,
     262,   268,   274,   284,   284,   301,   302,   304,   305,   306,
     308,   316,   324,   335,   335,   351,   352,   354,   355,   356,
     358,   368,   381,   381,   426,   427,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   440,   447,   454,   461,
     477,   483,   489,   495,   501,   520,   522,   523,   525,   526,
     527,   528,   529,   531,   537,   543,   552,   552,   571,   572,
     574,   575,   576,   577,   578,   579,   581,   588,   595,   606,
     612,   614,   615,   617,   635,   637,   638,   640,   641,   643
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
  "KEY", "MASK", "MAX_READ", "MODE", "NAME", "NEGCACHE", "NICK",
  "NICKSERV", "OPER", "OPM", "OPTIONS", "PASSWORD", "PERFORM", "PIDFILE",
  "PORT", "PROTOCOL", "READTIMEOUT", "REALNAME", "REPLY", "SCANLOG",
  "SCANNER", "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS", "MONTHS",
  "YEARS", "SENDMAIL", "SERVER", "TARGET_IP", "TARGET_PORT",
  "TARGET_STRING", "TIMEOUT", "TYPE", "USERNAME", "USER", "VHOST",
  "NUMBER", "STRING", "PROTOCOLTYPE", "'{'", "'}'", "';'", "'='", "':'",
  "$accept", "config", "config_items", "timespec_", "timespec",
  "sizespec_", "sizespec", "options_entry", "options_items",
  "options_item", "options_negcache", "options_pidfile",
  "options_dns_fdlimit", "options_scanlog", "irc_entry", "irc_items",
  "irc_item", "irc_away", "irc_kline", "irc_mode", "irc_nick",
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
     123,   125,    59,    61,    58
};
# endif

#define YYPACT_NINF -149

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-149)))

#define YYTABLE_NINF -127

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -149,   122,  -149,   -53,   -52,   -46,   -44,  -149,  -149,  -149,
    -149,   -50,  -149,   -22,  -149,  -149,    43,    73,   113,   130,
     -41,   -32,  -149,   -34,     3,  -149,  -149,  -149,   -31,   -26,
     -24,   -18,   -17,   -14,   -13,   -11,     4,     9,    14,    21,
      22,    25,    33,     0,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,    57,  -149,    39,    47,    49,    46,  -149,  -149,  -149,
    -149,  -149,   108,  -149,    53,    65,    75,    77,    54,  -149,
    -149,  -149,  -149,  -149,   104,    96,    86,    87,  -149,    95,
      97,    99,   100,   101,   106,   107,   109,   111,   114,   131,
     129,   134,   135,   136,   127,  -149,   137,   138,   140,   141,
     139,  -149,   142,   143,   131,   145,   146,   144,  -149,  -149,
     128,   132,    40,  -149,  -149,  -149,  -149,   148,   149,   150,
     151,   152,   153,   154,   155,   156,    19,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,   158,  -149,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   133,
     169,   170,   171,   172,   173,  -149,   147,   174,   175,   176,
    -149,   119,   177,   178,   179,   180,  -149,   185,   186,   183,
    -149,   189,   190,   191,   192,   194,   193,   195,   131,   196,
     197,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,   131,   131,   131,   131,   131,   131,   131,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,   198,   199,   200,
      71,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,   201,
     202,   203,   188,   204,    20,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,   206,   207,  -149,   208,     5,
     209,   210,   211,   212,   214,   215,   216,   217,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,   222,   223,   224,   221,
    -149,   227,   228,   229,   231,   232,   230,  -149,  -149,  -149,
    -149,   190,   190,   190,  -149,  -149,  -149,  -149,   234,  -149,
    -149,  -149,  -149,  -149,   233,   235,   236,  -149,   237,   238,
     239,   226,   -55,  -149,   240,  -149,  -149,  -149,  -149,   241,
    -149,  -149,  -149,  -149,  -149,  -149,   246,   243,  -149,  -149,
    -149,   244,  -149,  -149
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    83,     1,     0,     0,     0,     0,     3,     5,     4,
       7,     0,     8,     0,     6,     9,     0,     0,     0,     0,
       0,     0,   148,     0,     0,   146,   147,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    41,    43,    46,    44,    45,
      47,    48,    55,    49,    50,    51,    52,    53,    54,    42,
      56,     0,   122,     0,     0,     0,     0,   117,   118,   119,
     120,   121,     0,    33,     0,     0,     0,     0,     0,    28,
      29,    30,    31,    32,     0,     0,     0,     0,   145,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,    27,    89,
       0,     0,     0,    86,    87,    88,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    96,    97,
      99,   101,    98,   100,   103,   104,   102,     0,   144,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,    38,     0,     0,     0,     0,
     115,     0,     0,     0,     0,     0,    26,     0,     0,     0,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,   149,    58,    72,    59,    60,    61,    62,    63,
      64,    65,    66,    10,    10,    10,    10,    10,    10,    10,
      12,    11,    67,    68,    69,    70,    71,     0,     0,     0,
       0,    76,    77,    78,    79,   123,   124,   125,   135,     0,
       0,     0,     0,     0,     0,   129,   130,   132,   131,   133,
     134,    36,    34,    35,    37,     0,     0,    84,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,    93,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,   128,    90,    91,
     110,    20,    20,    20,    22,    21,   113,   106,     0,   108,
     111,   109,   112,   107,     0,     0,     0,    74,     0,     0,
       0,     0,     0,   142,     0,   127,    23,    24,    25,     0,
      82,    81,    80,   139,   137,   136,     0,     0,   141,   138,
     114,     0,   140,   143
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,  -149,   -23,   -99,  -148,    23,  -149,  -149,   182,
    -149,  -149,  -149,  -149,  -149,  -149,   213,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,   -12,  -149,  -149,  -149,  -149,
    -149,  -149,    85,  -149,  -149,  -149,  -149,  -149,    74,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
     219,  -149,  -149,  -149,  -149,  -149,  -149,   -25,  -149,  -149,
    -149,  -149,  -149,  -149,   -47,  -149,  -149,   249,  -149
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,   210,   211,   284,   285,     8,    78,    79,
      80,    81,    82,    83,     9,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,   220,   221,   222,   223,   224,    10,
      11,   122,   123,   124,   125,    12,    13,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,    14,    66,
      67,    68,    69,    70,    71,    72,   234,   235,   236,   237,
     238,   239,   240,   302,   303,    15,    24,    25,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     160,    27,   301,    28,    22,    20,   317,    16,    17,   -73,
      29,   281,   282,   283,    18,   173,    19,    21,    30,    84,
     126,   228,    31,    23,   229,    32,    33,    34,    85,    86,
      35,    36,    89,    37,   127,    38,    39,    90,   230,    91,
     128,   119,   129,   231,    22,    92,    93,    62,    40,    94,
      95,  -126,    96,   130,    41,    73,    42,   232,    63,    64,
     120,   104,   249,    23,    87,    74,   106,    97,   131,   132,
     133,   134,    98,   233,    27,   135,    28,    99,    75,   121,
     190,   276,   -73,    29,   100,   101,    76,   217,   102,   256,
     218,    30,    77,    65,   219,    31,   103,   126,    32,    33,
      34,   179,   107,    35,    36,   119,    37,   110,    38,    39,
     108,   127,   109,   112,    62,   117,   113,   128,  -126,   129,
     228,    40,     2,   229,   120,    63,    64,    41,   114,    42,
     130,    73,   269,   306,   307,   308,     3,   230,   115,     4,
     116,    74,   231,   121,   147,   131,   132,   133,   134,   148,
       5,     6,   135,   149,    75,   150,   232,   151,   152,   153,
      65,   -92,    76,   217,   154,   155,   218,   156,    77,   157,
     219,   158,   233,   203,   204,   205,   206,   207,   208,   209,
     259,   260,   261,   262,   263,   264,   265,   161,   159,   165,
     159,   177,   162,   163,   164,   178,   167,   166,   168,   169,
     172,   170,   171,   174,   175,   250,   176,   180,   270,   277,
     191,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   212,   213,   214,   215,   216,   225,   226,   227,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   274,   251,
     254,   252,   253,   255,   257,   318,   105,     0,     0,   258,
     118,   266,   267,   268,   271,   272,   273,   275,   278,   279,
     280,   286,   287,    88,   289,   288,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   111,   299,   300,   301,   316,
     304,   309,   305,     0,     0,   310,     0,   311,   312,   313,
     314,   315,   319,   320,   321,   322,   323
};

static const yytype_int16 yycheck[] =
{
      99,     1,    57,     3,     1,    55,    61,    60,    60,     9,
      10,     6,     7,     8,    60,   114,    60,    39,    18,    60,
       1,     1,    22,    20,     4,    25,    26,    27,    60,    63,
      30,    31,    63,    33,    15,    35,    36,    63,    18,    63,
      21,     1,    23,    23,     1,    63,    63,     1,    48,    63,
      63,     5,    63,    34,    54,     1,    56,    37,    12,    13,
      20,    61,    57,    20,    61,    11,     9,    63,    49,    50,
      51,    52,    63,    53,     1,    56,     3,    63,    24,    39,
      61,    61,     9,    10,    63,    63,    32,    16,    63,   188,
      19,    18,    38,    47,    23,    22,    63,     1,    25,    26,
      27,    61,    63,    30,    31,     1,    33,    61,    35,    36,
      63,    15,    63,     5,     1,    61,    63,    21,     5,    23,
       1,    48,     0,     4,    20,    12,    13,    54,    63,    56,
      34,     1,    61,   281,   282,   283,    14,    18,    63,    17,
      63,    11,    23,    39,    58,    49,    50,    51,    52,    62,
      28,    29,    56,    58,    24,    58,    37,    58,    58,    58,
      47,    39,    32,    16,    58,    58,    19,    58,    38,    58,
      23,    57,    53,    40,    41,    42,    43,    44,    45,    46,
     203,   204,   205,   206,   207,   208,   209,    58,    57,    62,
      57,    63,    58,    58,    58,    63,    58,    60,    58,    58,
      57,    62,    60,    58,    58,   182,    62,   122,   220,   234,
     136,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    58,    58,    62,    57,    57,    60,    58,
      57,    59,    58,    58,    58,   302,    43,    -1,    -1,    62,
      78,    63,    63,    63,    63,    63,    63,    63,    62,    62,
      62,    62,    62,    24,    62,    64,    62,    62,    62,    62,
      58,    58,    58,    62,    57,    66,    58,    58,    57,    63,
      58,    57,    62,    -1,    -1,    62,    -1,    62,    62,    62,
      62,    62,    62,    62,    58,    62,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    66,     0,    14,    17,    28,    29,    67,    72,    79,
     104,   105,   110,   111,   123,   140,    60,    60,    60,    60,
      55,    39,     1,    20,   141,   142,   143,     1,     3,    10,
      18,    22,    25,    26,    27,    30,    31,    33,    35,    36,
      48,    54,    56,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     1,    12,    13,    47,   124,   125,   126,   127,
     128,   129,   130,     1,    11,    24,    32,    38,    73,    74,
      75,    76,    77,    78,    60,    60,    63,    61,   142,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    61,    81,     9,    63,    63,    63,
      61,   125,     5,    63,    63,    63,    63,    61,    74,     1,
      20,    39,   106,   107,   108,   109,     1,    15,    21,    23,
      34,    49,    50,    51,    52,    56,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    58,    62,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    57,    57,
      69,    58,    58,    58,    58,    62,    60,    58,    58,    58,
      62,    60,    57,    69,    58,    58,    62,    63,    63,    61,
     107,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      61,   113,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    40,    41,    42,    43,    44,    45,    46,
      68,    69,    62,    62,    62,    62,    62,    16,    19,    23,
      99,   100,   101,   102,   103,    62,    62,    62,     1,     4,
      18,    23,    37,    53,   131,   132,   133,   134,   135,   136,
     137,    62,    62,    62,    62,    58,    58,    62,    57,    57,
      71,    58,    59,    58,    57,    58,    69,    58,    62,    68,
      68,    68,    68,    68,    68,    68,    63,    63,    63,    61,
     100,    63,    63,    63,    60,    63,    61,   132,    62,    62,
      62,     6,     7,     8,    70,    71,    62,    62,    64,    62,
      62,    62,    62,    62,    58,    58,    58,    62,    57,    58,
      58,    57,   138,   139,    58,    62,    70,    70,    70,    57,
      62,    62,    62,    62,    62,    62,    63,    61,   139,    62,
      62,    58,    62,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    67,    67,    67,    67,    67,    67,
      68,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    70,    71,    71,    71,    71,    72,    73,    73,    74,
      74,    74,    74,    74,    75,    76,    77,    78,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    98,    97,    99,    99,   100,   100,   100,
     101,   102,   103,   105,   104,   106,   106,   107,   107,   107,
     108,   109,   111,   110,   112,   112,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   124,   125,   125,
     125,   125,   125,   126,   127,   128,   130,   129,   131,   131,
     132,   132,   132,   132,   132,   132,   133,   134,   135,   136,
     137,   138,   138,   139,   140,   141,   141,   142,   142,   143
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       0,     1,     2,     3,     3,     3,     5,     2,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       4,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     6,     5,     2,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       5,     2,     1,     4,     5,     2,     1,     1,     1,     4
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
#line 112 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 1574 "config-parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 113 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1580 "config-parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 114 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1586 "config-parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 115 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 1592 "config-parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 116 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 1598 "config-parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 117 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 1604 "config-parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 118 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 1610 "config-parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 119 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 1616 "config-parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 120 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 1622 "config-parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 123 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 1628 "config-parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 124 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1634 "config-parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 125 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1640 "config-parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 126 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 1646 "config-parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 127 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 1652 "config-parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 144 "config-parser.y" /* yacc.c:1646  */
    {
   OptionsItem->negcache = (yyvsp[-1].number);
}
#line 1660 "config-parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 149 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OptionsItem->pidfile);
   OptionsItem->pidfile = xstrdup((yyvsp[-1].string));
}
#line 1669 "config-parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 155 "config-parser.y" /* yacc.c:1646  */
    {
   OptionsItem->dns_fdlimit = (yyvsp[-1].number);
}
#line 1677 "config-parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 160 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OptionsItem->scanlog);
   OptionsItem->scanlog = xstrdup((yyvsp[-1].string));
}
#line 1686 "config-parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 191 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->away);
   IRCItem->away = xstrdup((yyvsp[-1].string));
}
#line 1695 "config-parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 197 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->kline);
   IRCItem->kline = xstrdup((yyvsp[-1].string));
}
#line 1704 "config-parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 203 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->mode);
   IRCItem->mode = xstrdup((yyvsp[-1].string));
}
#line 1713 "config-parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 209 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->nick);
   IRCItem->nick = xstrdup((yyvsp[-1].string));
}
#line 1722 "config-parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 215 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->nickserv);
   IRCItem->nickserv = xstrdup((yyvsp[-1].string));
}
#line 1731 "config-parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 221 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->oper);
   IRCItem->oper = xstrdup((yyvsp[-1].string));
}
#line 1740 "config-parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 227 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->password);
   IRCItem->password = xstrdup((yyvsp[-1].string));
}
#line 1749 "config-parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 233 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   node = node_create(xstrdup((yyvsp[-1].string)));

   list_add(IRCItem->performs, node);
}
#line 1760 "config-parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 241 "config-parser.y" /* yacc.c:1646  */
    {
   IRCItem->port = (yyvsp[-1].number);
}
#line 1768 "config-parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 246 "config-parser.y" /* yacc.c:1646  */
    {
   IRCItem->readtimeout = (yyvsp[-1].number);
}
#line 1776 "config-parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 251 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->realname);
   IRCItem->realname = xstrdup((yyvsp[-1].string));
}
#line 1785 "config-parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 257 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->server);
   IRCItem->server = xstrdup((yyvsp[-1].string));
}
#line 1794 "config-parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 263 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->username);
   IRCItem->username = xstrdup((yyvsp[-1].string));
}
#line 1803 "config-parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 269 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->vhost);
   IRCItem->vhost = xstrdup((yyvsp[-1].string));
}
#line 1812 "config-parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 275 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->connregex);
   IRCItem->connregex = xstrdup((yyvsp[-1].string));
}
#line 1821 "config-parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 284 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   struct ChannelConf *item;

   item = MyMalloc(sizeof *item);

   item->name = xstrdup("");
   item->key = xstrdup("");
   item->invite = xstrdup("");

   node = node_create(item);
   list_add(IRCItem->channels, node);

   tmp = (void *) item;
}
#line 1841 "config-parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 309 "config-parser.y" /* yacc.c:1646  */
    {
   struct ChannelConf *item = tmp;

   MyFree(item->name);
   item->name = xstrdup((yyvsp[-1].string));
}
#line 1852 "config-parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 317 "config-parser.y" /* yacc.c:1646  */
    {
   struct ChannelConf *item = tmp;

   MyFree(item->key);
   item->key = xstrdup((yyvsp[-1].string));
}
#line 1863 "config-parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 325 "config-parser.y" /* yacc.c:1646  */
    {
   struct ChannelConf *item = tmp;

   MyFree(item->invite);
   item->invite = xstrdup((yyvsp[-1].string));
}
#line 1874 "config-parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 335 "config-parser.y" /* yacc.c:1646  */
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
#line 1893 "config-parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 359 "config-parser.y" /* yacc.c:1646  */
    {
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) xstrdup((yyvsp[-1].string)));

   list_add(item->masks, node);
}
#line 1906 "config-parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 369 "config-parser.y" /* yacc.c:1646  */
    {
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) xstrdup((yyvsp[-1].string)));

   list_add(item->scanners, node);
}
#line 1919 "config-parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 381 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   struct ScannerConf *item, *olditem;

   item = MyMalloc(sizeof *item);

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
   tmp = (void *) item;
}
#line 1967 "config-parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 441 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->name);
   item->name = xstrdup((yyvsp[-1].string));
}
#line 1977 "config-parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 448 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->vhost);
   item->vhost = xstrdup((yyvsp[-1].string));
}
#line 1987 "config-parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 455 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->target_ip);
   item->target_ip = xstrdup((yyvsp[-1].string));
}
#line 1997 "config-parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 462 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;

   node_t *node;
   node = node_create((yyvsp[-1].string));

	if(item->target_string_created == 0)
	{
	   item->target_string = list_create();
		item->target_string_created = 1;
	}

   list_add(item->target_string, node);
}
#line 2016 "config-parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 478 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->fd = (yyvsp[-1].number);
}
#line 2025 "config-parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 484 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->target_port = (yyvsp[-1].number);
}
#line 2034 "config-parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 490 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->timeout = (yyvsp[-1].number);
}
#line 2043 "config-parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 496 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->max_read = (yyvsp[-1].number);
}
#line 2052 "config-parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 502 "config-parser.y" /* yacc.c:1646  */
    {
   struct ProtocolConf *item;
   struct ScannerConf  *item2;

   node_t *node;
 
   item = MyMalloc(sizeof *item);
   item->type = (yyvsp[-3].number);
   item->port = (yyvsp[-1].number);

   item2 = (struct ScannerConf *) tmp;

   node = node_create(item);
   list_add(item2->protocols, node);
}
#line 2072 "config-parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 532 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OpmItem->dnsbl_from);
   OpmItem->dnsbl_from = xstrdup((yyvsp[-1].string));
}
#line 2081 "config-parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 538 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OpmItem->dnsbl_to);
   OpmItem->dnsbl_to = xstrdup((yyvsp[-1].string));
}
#line 2090 "config-parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 544 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OpmItem->sendmail);
   OpmItem->sendmail = xstrdup((yyvsp[-1].string));
}
#line 2099 "config-parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 552 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   struct BlacklistConf *item;

   item = MyMalloc(sizeof *item);

   item->name = xstrdup("");
   item->kline = xstrdup("");
   item->ban_unknown = 0;
   item->type = A_BITMASK;
   item->reply = list_create();

   node = node_create(item);
   list_add(OpmItem->blacklists, node);

   tmp = (void *) item;
}
#line 2121 "config-parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 581 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;

   MyFree(item->name);
   item->name = xstrdup((yyvsp[-1].string));
}
#line 2132 "config-parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 588 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;

   MyFree(item->kline);
   item->kline = xstrdup((yyvsp[-1].string));
}
#line 2143 "config-parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 595 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;
   
   if(strcmp("A record bitmask", (yyvsp[-1].string)) == 0)
      item->type = A_BITMASK;
   else if(strcmp("A record reply", (yyvsp[-1].string)) == 0)
      item->type = A_REPLY;
   else
      yyerror("Unknown blacklist type defined");
}
#line 2158 "config-parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 606 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;

   item->ban_unknown = (yyvsp[-1].number);
}
#line 2168 "config-parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 618 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistReplyConf *item;
   struct BlacklistConf *blacklist = tmp;
   node_t *node;

   item = MyMalloc(sizeof *item);

   item->number = (yyvsp[-3].number);
   item->type = xstrdup((yyvsp[-1].string));

   node = node_create(item);
   list_add(blacklist->reply, node);
}
#line 2186 "config-parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 644 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   node = node_create(xstrdup((yyvsp[-1].string)));

   list_add(ExemptItem->masks, node);
}
#line 2197 "config-parser.c" /* yacc.c:1646  */
    break;


#line 2201 "config-parser.c" /* yacc.c:1646  */
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
#line 651 "config-parser.y" /* yacc.c:1906  */


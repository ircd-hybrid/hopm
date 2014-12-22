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
#line 83 "config-parser.y" /* yacc.c:355  */

        int number;
        char *string;

#line 220 "config-parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 235 "config-parser.c" /* yacc.c:358  */

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
#define YYLAST   279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,    95,    98,    99,   100,   101,   102,   103,
     108,   110,   111,   113,   114,   115,   116,   117,   119,   124,
     130,   135,   143,   145,   146,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   165,   171,   177,   183,   189,   195,   201,   207,   215,
     220,   226,   232,   238,   244,   254,   254,   271,   272,   274,
     275,   276,   278,   286,   294,   305,   305,   321,   322,   324,
     325,   326,   328,   338,   351,   351,   396,   397,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   410,   417,
     424,   431,   447,   453,   459,   465,   471,   490,   492,   493,
     495,   496,   497,   498,   499,   501,   507,   513,   522,   522,
     541,   542,   544,   545,   546,   547,   548,   549,   551,   558,
     565,   576,   582,   584,   585,   587,   605,   607,   608,   610,
     611,   613
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AWAY", "BAN_UNKNOWN", "BLACKLIST",
  "CHANNEL", "CONNREGEX", "DNS_FDLIMIT", "DNSBL_FROM", "DNSBL_TO",
  "EXEMPT", "FD", "INVITE", "IRC", "KLINE", "KEY", "MASK", "MAX_READ",
  "MODE", "NAME", "NEGCACHE", "NICK", "NICKSERV", "OPER", "OPM", "OPTIONS",
  "PASSWORD", "PERFORM", "PIDFILE", "PORT", "PROTOCOL", "REALNAME",
  "REPLY", "SCANLOG", "SCANNER", "SENDMAIL", "SERVER", "TARGET_IP",
  "TARGET_PORT", "TARGET_STRING", "TIMEOUT", "TYPE", "USERNAME", "USER",
  "VHOST", "NUMBER", "STRING", "PROTOCOLTYPE", "'{'", "'}'", "';'", "'='",
  "':'", "$accept", "config", "config_items", "options_entry",
  "options_items", "options_item", "options_negcache", "options_pidfile",
  "options_dns_fdlimit", "options_scanlog", "irc_entry", "irc_items",
  "irc_item", "irc_away", "irc_kline", "irc_mode", "irc_nick",
  "irc_nickserv", "irc_oper", "irc_password", "irc_perform", "irc_port",
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   123,
     125,    59,    61,    58
};
# endif

#define YYPACT_NINF -93

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-93)))

#define YYTABLE_NINF -109

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -93,   124,   -93,   -39,   -33,   -32,   -16,   -93,   -93,   -93,
     -93,    -9,   -93,    26,   -93,   -93,    11,    78,   138,    70,
      14,    16,   -93,    17,     8,   -93,   -93,   -93,    18,    20,
      24,    30,    31,    35,    37,    43,    55,    60,    61,    64,
      66,    67,    -1,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,    62,
     -93,    68,    73,    74,    10,   -93,   -93,   -93,   -93,   -93,
      85,   -93,    75,    82,    88,    89,    46,   -93,   -93,   -93,
     -93,   -93,    39,    91,    19,    47,   -93,    90,    95,    97,
      98,   104,   105,   106,   107,   109,   111,   114,   115,   116,
     117,   118,   -93,   119,   120,   123,   125,   122,   -93,   126,
     112,   130,   131,   132,   129,   -93,   -93,   108,   133,    38,
     -93,   -93,   -93,   -93,   134,   135,   136,   137,   139,   140,
     141,   142,   143,    12,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   145,   -93,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     -93,    21,   160,   161,   162,   -93,   113,   163,   164,   165,
     166,   -93,   171,   172,   169,   -93,   144,   175,   176,   174,
     177,   179,   180,   182,   183,   178,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   181,   184,   185,   -12,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   186,   187,   188,   128,   189,    44,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     191,   192,   -93,   193,   194,   195,   173,   196,   197,   198,
     199,   200,   -93,   205,   206,   207,   204,   -93,   210,   211,
     212,   214,   215,   213,   -93,   -93,   -93,   -93,   -93,   -93,
     217,   -93,   -93,   -93,   -93,   -93,   216,   218,   219,   -93,
     220,   221,   222,   209,   -43,   -93,   223,   -93,   224,   -93,
     -93,   -93,   -93,   -93,   -93,   229,   226,   -93,   -93,   -93,
     227,   -93,   -93
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    65,     1,     0,     0,     0,     0,     3,     5,     4,
       7,     0,     8,     0,     6,     9,     0,     0,     0,     0,
       0,     0,   130,     0,     0,   128,   129,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,    25,    27,    30,    28,    29,    31,
      32,    38,    33,    34,    35,    36,    37,    26,    39,     0,
     104,     0,     0,     0,     0,    99,   100,   101,   102,   103,
       0,    17,     0,     0,     0,     0,     0,    12,    13,    14,
      15,    16,     0,     0,     0,     0,   127,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,    98,     0,
       0,     0,     0,     0,     0,    11,    71,     0,     0,     0,
      68,    69,    70,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    78,    79,    81,    83,    80,
      82,    85,    86,    84,     0,   126,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,    97,     0,     0,     0,     0,
       0,    10,     0,     0,     0,    67,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,   131,    41,    54,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,     0,     0,    58,    59,    60,    61,
     105,   106,   107,   117,     0,     0,     0,     0,     0,     0,
     111,   112,   114,   113,   115,   116,    20,    18,    19,    21,
       0,     0,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,     0,     0,    57,     0,     0,
       0,     0,     0,     0,   110,    72,    73,    92,    95,    88,
       0,    90,    93,    91,    94,    89,     0,     0,     0,    56,
       0,     0,     0,     0,     0,   124,     0,   109,     0,    64,
      63,    62,   121,   119,   118,     0,     0,   123,   120,    96,
       0,   122,   125
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -93,   -93,   -93,   -93,   -93,   190,   -93,   -93,   -93,   -93,
     -93,   -93,   237,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -40,   -93,   -93,   -93,   -93,   -93,   -93,    52,   -93,   -93,
     -93,   -93,   -93,    33,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,   167,   -93,   -93,   -93,   -93,
     -93,   -93,   -38,   -93,   -93,   -93,   -93,   -93,   -93,   -92,
     -93,   -93,   208,   -93
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   202,    28,   273,   203,   -55,    29,   286,   204,    22,
      16,    60,    22,   123,    30,  -108,    17,    18,    31,    61,
      62,    32,    33,    34,   124,    23,    35,    36,    23,    37,
     125,    38,   126,    19,   202,    20,    39,   203,   246,   116,
     116,   204,    40,   127,    41,   213,    63,    71,   214,   101,
     128,   129,   130,   131,    72,   117,   117,   132,    85,   215,
     107,    21,   185,    82,   216,    83,   144,    73,   103,    84,
      87,    71,    88,   118,   118,    74,    89,   217,    72,    27,
      75,    28,    90,    91,   -55,    29,   218,    92,   174,    93,
     109,    73,   123,    30,   253,    94,   114,    31,   145,    74,
      32,    33,    34,   124,    75,    35,    36,    95,    37,   125,
      38,   126,    96,    97,   213,    39,    98,   214,    99,   100,
     104,    40,   127,    41,     2,   105,   106,   110,   215,   128,
     129,   130,   131,   216,   111,     3,   132,   146,     4,    60,
     112,   113,   147,  -108,   148,   149,   217,    61,    62,     5,
       6,   150,   151,   152,   153,   218,   154,   155,   167,   -74,
     172,   156,   157,   158,   159,   247,   186,   162,   161,   160,
     163,   175,   164,   165,    63,   166,   168,   251,   169,   170,
     171,   254,   287,     0,     0,   173,   176,   177,   178,   179,
     233,   180,   181,   182,   183,   184,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   210,   211,   212,   226,   227,   228,   229,   230,   231,
     232,   234,   236,   235,   237,   238,   260,   239,   240,   242,
     241,   108,    86,   243,     0,     0,   244,   245,   248,   249,
     250,   252,   255,   256,   257,   258,   259,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,     0,   271,   272,
     273,   285,   276,   278,   277,     0,   115,   279,     0,   280,
     281,   282,   283,   284,   288,   289,   290,   291,   292,   102
};

static const yytype_int16 yycheck[] =
{
       1,    13,     3,    46,    16,     6,     7,    50,    20,     1,
      49,     1,     1,     1,    15,     5,    49,    49,    19,     9,
      10,    22,    23,    24,    12,    17,    27,    28,    17,    30,
      18,    32,    20,    49,    13,    44,    37,    16,    50,     1,
       1,    20,    43,    31,    45,     1,    36,     1,     4,    50,
      38,    39,    40,    41,     8,    17,    17,    45,    50,    15,
      50,    35,    50,    49,    20,    49,    47,    21,     6,    52,
      52,     1,    52,    35,    35,    29,    52,    33,     8,     1,
      34,     3,    52,    52,     6,     7,    42,    52,    50,    52,
       5,    21,     1,    15,    50,    52,    50,    19,    51,    29,
      22,    23,    24,    12,    34,    27,    28,    52,    30,    18,
      32,    20,    52,    52,     1,    37,    52,     4,    52,    52,
      52,    43,    31,    45,     0,    52,    52,    52,    15,    38,
      39,    40,    41,    20,    52,    11,    45,    47,    14,     1,
      52,    52,    47,     5,    47,    47,    33,     9,    10,    25,
      26,    47,    47,    47,    47,    42,    47,    46,    46,    35,
      52,    47,    47,    47,    47,   205,   133,    47,    49,    51,
      47,   119,    47,    51,    36,    49,    46,    49,    47,    47,
      51,   219,   274,    -1,    -1,    52,    52,    52,    52,    52,
      46,    52,    52,    52,    52,    52,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    47,    47,
      51,    46,    48,    47,    47,    46,    53,    47,    46,    51,
      47,    64,    24,    52,    -1,    -1,    52,    52,    52,    52,
      52,    52,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    47,    47,    47,    51,    46,    -1,    47,    47,
      46,    52,    47,    46,    51,    -1,    76,    51,    -1,    51,
      51,    51,    51,    51,    51,    51,    47,    51,    51,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,     0,    11,    14,    25,    26,    56,    57,    64,
      88,    89,    94,    95,   107,   124,    49,    49,    49,    49,
      44,    35,     1,    17,   125,   126,   127,     1,     3,     7,
      15,    19,    22,    23,    24,    27,    28,    30,    32,    37,
      43,    45,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
       1,     9,    10,    36,   108,   109,   110,   111,   112,   113,
     114,     1,     8,    21,    29,    34,    58,    59,    60,    61,
      62,    63,    49,    49,    52,    50,   126,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    50,    66,     6,    52,    52,    52,    50,   109,     5,
      52,    52,    52,    52,    50,    59,     1,    17,    35,    90,
      91,    92,    93,     1,    12,    18,    20,    31,    38,    39,
      40,    41,    45,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    47,    51,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    46,    47,    47,    47,    47,
      51,    49,    47,    47,    47,    51,    49,    46,    46,    47,
      47,    51,    52,    52,    50,    91,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    50,    97,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    13,    16,    20,    83,    84,    85,    86,    87,
      51,    51,    51,     1,     4,    15,    20,    33,    42,   115,
     116,   117,   118,   119,   120,   121,    51,    51,    51,    51,
      47,    47,    51,    46,    46,    47,    48,    47,    46,    47,
      46,    47,    51,    52,    52,    52,    50,    84,    52,    52,
      52,    49,    52,    50,   116,    51,    51,    51,    51,    51,
      53,    51,    51,    51,    51,    51,    47,    47,    47,    51,
      46,    47,    47,    46,   122,   123,    47,    51,    46,    51,
      51,    51,    51,    51,    51,    52,    50,   123,    51,    51,
      47,    51,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    56,    56,    56,    56,
      57,    58,    58,    59,    59,    59,    59,    59,    60,    61,
      62,    63,    64,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    82,    81,    83,    83,    84,
      84,    84,    85,    86,    87,    89,    88,    90,    90,    91,
      91,    91,    92,    93,    95,    94,    96,    96,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   108,
     109,   109,   109,   109,   109,   110,   111,   112,   114,   113,
     115,   115,   116,   116,   116,   116,   116,   116,   117,   118,
     119,   120,   121,   122,   122,   123,   124,   125,   125,   126,
     126,   127
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       5,     2,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     5,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
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
        case 18:
#line 120 "config-parser.y" /* yacc.c:1646  */
    {
   OptionsItem->negcache = (yyvsp[-1].number);
}
#line 1530 "config-parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 125 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OptionsItem->pidfile);
   OptionsItem->pidfile = DupString((yyvsp[-1].string));
}
#line 1539 "config-parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 131 "config-parser.y" /* yacc.c:1646  */
    {
   OptionsItem->dns_fdlimit = (yyvsp[-1].number);
}
#line 1547 "config-parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 136 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OptionsItem->scanlog);
   OptionsItem->scanlog = DupString((yyvsp[-1].string));
}
#line 1556 "config-parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 166 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->away);
   IRCItem->away = DupString((yyvsp[-1].string));
}
#line 1565 "config-parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 172 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->kline);
   IRCItem->kline = DupString((yyvsp[-1].string));
}
#line 1574 "config-parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 178 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->mode);
   IRCItem->mode = DupString((yyvsp[-1].string));
}
#line 1583 "config-parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 184 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->nick);
   IRCItem->nick = DupString((yyvsp[-1].string));
}
#line 1592 "config-parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 190 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->nickserv);
   IRCItem->nickserv = DupString((yyvsp[-1].string));
}
#line 1601 "config-parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 196 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->oper);
   IRCItem->oper = DupString((yyvsp[-1].string));
}
#line 1610 "config-parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 202 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->password);
   IRCItem->password = DupString((yyvsp[-1].string));
}
#line 1619 "config-parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 208 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   node = node_create(DupString((yyvsp[-1].string)));

   list_add(IRCItem->performs, node);
}
#line 1630 "config-parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 216 "config-parser.y" /* yacc.c:1646  */
    {
   IRCItem->port = (yyvsp[-1].number);
}
#line 1638 "config-parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 221 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->realname);
   IRCItem->realname = DupString((yyvsp[-1].string));
}
#line 1647 "config-parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 227 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->server);
   IRCItem->server = DupString((yyvsp[-1].string));
}
#line 1656 "config-parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 233 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->username);
   IRCItem->username = DupString((yyvsp[-1].string));
}
#line 1665 "config-parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 239 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->vhost);
   IRCItem->vhost = DupString((yyvsp[-1].string));
}
#line 1674 "config-parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 245 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->connregex);
   IRCItem->connregex = DupString((yyvsp[-1].string));
}
#line 1683 "config-parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 254 "config-parser.y" /* yacc.c:1646  */
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
#line 1703 "config-parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 279 "config-parser.y" /* yacc.c:1646  */
    {
   struct ChannelConf *item = tmp;

   MyFree(item->name);
   item->name = DupString((yyvsp[-1].string));
}
#line 1714 "config-parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 287 "config-parser.y" /* yacc.c:1646  */
    {
   struct ChannelConf *item = tmp;

   MyFree(item->key);
   item->key = DupString((yyvsp[-1].string));
}
#line 1725 "config-parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 295 "config-parser.y" /* yacc.c:1646  */
    {
   struct ChannelConf *item = tmp;

   MyFree(item->invite);
   item->invite = DupString((yyvsp[-1].string));
}
#line 1736 "config-parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 305 "config-parser.y" /* yacc.c:1646  */
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
#line 1755 "config-parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 329 "config-parser.y" /* yacc.c:1646  */
    {
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) DupString((yyvsp[-1].string)));

   list_add(item->masks, node);
}
#line 1768 "config-parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 339 "config-parser.y" /* yacc.c:1646  */
    {
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) DupString((yyvsp[-1].string)));

   list_add(item->scanners, node);
}
#line 1781 "config-parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 351 "config-parser.y" /* yacc.c:1646  */
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
#line 1829 "config-parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 411 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->name);
   item->name = DupString((yyvsp[-1].string));
}
#line 1839 "config-parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 418 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->vhost);
   item->vhost = DupString((yyvsp[-1].string));
}
#line 1849 "config-parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 425 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->target_ip);
   item->target_ip = DupString((yyvsp[-1].string));
}
#line 1859 "config-parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 432 "config-parser.y" /* yacc.c:1646  */
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
#line 1878 "config-parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 448 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->fd = (yyvsp[-1].number);
}
#line 1887 "config-parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 454 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->target_port = (yyvsp[-1].number);
}
#line 1896 "config-parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 460 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->timeout = (yyvsp[-1].number);
}
#line 1905 "config-parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 466 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->max_read = (yyvsp[-1].number);
}
#line 1914 "config-parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 472 "config-parser.y" /* yacc.c:1646  */
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
#line 1934 "config-parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 502 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OpmItem->dnsbl_from);
   OpmItem->dnsbl_from = DupString((yyvsp[-1].string));
}
#line 1943 "config-parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 508 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OpmItem->dnsbl_to);
   OpmItem->dnsbl_to = DupString((yyvsp[-1].string));
}
#line 1952 "config-parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 514 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OpmItem->sendmail);
   OpmItem->sendmail = DupString((yyvsp[-1].string));
}
#line 1961 "config-parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 522 "config-parser.y" /* yacc.c:1646  */
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
#line 1983 "config-parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 551 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;

   MyFree(item->name);
   item->name = DupString((yyvsp[-1].string));
}
#line 1994 "config-parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 558 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;

   MyFree(item->kline);
   item->kline = DupString((yyvsp[-1].string));
}
#line 2005 "config-parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 565 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;
   
   if(strcmp("A record bitmask", (yyvsp[-1].string)) == 0)
      item->type = A_BITMASK;
   else if(strcmp("A record reply", (yyvsp[-1].string)) == 0)
      item->type = A_REPLY;
   else
      yyerror("Unknown blacklist type defined");
}
#line 2020 "config-parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 576 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;

   item->ban_unknown = (yyvsp[-1].number);
}
#line 2030 "config-parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 588 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistReplyConf *item;
   struct BlacklistConf *blacklist = tmp;
   node_t *node;

   item = MyMalloc(sizeof *item);

   item->number = (yyvsp[-3].number);
   item->type = DupString((yyvsp[-1].string));

   node = node_create(item);
   list_add(blacklist->reply, node);
}
#line 2048 "config-parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 614 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   node = node_create(DupString((yyvsp[-1].string)));

   list_add(ExemptItem->masks, node);
}
#line 2059 "config-parser.c" /* yacc.c:1646  */
    break;


#line 2063 "config-parser.c" /* yacc.c:1646  */
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
#line 621 "config-parser.y" /* yacc.c:1906  */


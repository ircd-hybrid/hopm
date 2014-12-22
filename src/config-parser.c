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
    REALNAME = 290,
    REPLY = 291,
    SCANLOG = 292,
    SCANNER = 293,
    SECONDS = 294,
    MINUTES = 295,
    HOURS = 296,
    DAYS = 297,
    WEEKS = 298,
    MONTHS = 299,
    YEARS = 300,
    SENDMAIL = 301,
    SERVER = 302,
    TARGET_IP = 303,
    TARGET_PORT = 304,
    TARGET_STRING = 305,
    TIMEOUT = 306,
    TYPE = 307,
    USERNAME = 308,
    USER = 309,
    VHOST = 310,
    NUMBER = 311,
    STRING = 312,
    PROTOCOLTYPE = 313
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
#define REALNAME 290
#define REPLY 291
#define SCANLOG 292
#define SCANNER 293
#define SECONDS 294
#define MINUTES 295
#define HOURS 296
#define DAYS 297
#define WEEKS 298
#define MONTHS 299
#define YEARS 300
#define SENDMAIL 301
#define SERVER 302
#define TARGET_IP 303
#define TARGET_PORT 304
#define TARGET_STRING 305
#define TIMEOUT 306
#define TYPE 307
#define USERNAME 308
#define USER 309
#define VHOST 310
#define NUMBER 311
#define STRING 312
#define PROTOCOLTYPE 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 85 "config-parser.y" /* yacc.c:355  */

        int number;
        char *string;

#line 240 "config-parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONFIG_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 255 "config-parser.c" /* yacc.c:358  */

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
#define YYLAST   301

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  319

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

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
       2,     2,     2,     2,     2,     2,     2,     2,    63,    61,
       2,    62,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,    60,     2,     2,     2,     2,
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
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   101,   104,   105,   106,   107,   108,   109,
     111,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     122,   122,   123,   124,   125,   126,   131,   133,   134,   136,
     137,   138,   139,   140,   142,   147,   153,   158,   166,   168,
     169,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   188,   194,   200,
     206,   212,   218,   224,   230,   238,   243,   249,   255,   261,
     267,   277,   277,   294,   295,   297,   298,   299,   301,   309,
     317,   328,   328,   344,   345,   347,   348,   349,   351,   361,
     374,   374,   419,   420,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   433,   440,   447,   454,   470,   476,
     482,   488,   494,   513,   515,   516,   518,   519,   520,   521,
     522,   524,   530,   536,   545,   545,   564,   565,   567,   568,
     569,   570,   571,   572,   574,   581,   588,   599,   605,   607,
     608,   610,   628,   630,   631,   633,   634,   636
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
  "PORT", "PROTOCOL", "REALNAME", "REPLY", "SCANLOG", "SCANNER", "SECONDS",
  "MINUTES", "HOURS", "DAYS", "WEEKS", "MONTHS", "YEARS", "SENDMAIL",
  "SERVER", "TARGET_IP", "TARGET_PORT", "TARGET_STRING", "TIMEOUT", "TYPE",
  "USERNAME", "USER", "VHOST", "NUMBER", "STRING", "PROTOCOLTYPE", "'{'",
  "'}'", "';'", "'='", "':'", "$accept", "config", "config_items",
  "timespec_", "timespec", "sizespec_", "sizespec", "options_entry",
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   123,
     125,    59,    61,    58
};
# endif

#define YYPACT_NINF -157

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-157)))

#define YYTABLE_NINF -125

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -157,   126,  -157,   -52,   -48,   -40,   -36,  -157,  -157,  -157,
    -157,   -49,  -157,    -9,  -157,  -157,    39,    80,    83,   136,
     -22,   -18,  -157,   -17,    19,  -157,  -157,  -157,   -16,   -10,
      -4,     4,    12,    23,    24,    30,    32,    37,    42,    56,
      62,    66,     0,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,    59,
    -157,    68,    69,    72,     3,  -157,  -157,  -157,  -157,  -157,
     133,  -157,    77,    79,    82,    84,    33,  -157,  -157,  -157,
    -157,  -157,    16,   102,    44,    81,  -157,    88,    92,    99,
     101,   104,   105,   106,   108,   109,   103,   110,   112,   113,
     114,   111,  -157,   129,   132,   137,   138,   131,  -157,   134,
     140,   141,   142,   143,   144,  -157,  -157,   128,   139,    31,
    -157,  -157,  -157,  -157,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    27,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,   155,  -157,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
    -157,    93,   170,   171,   172,  -157,    96,   173,   135,   174,
     175,   176,  -157,   181,   182,   179,  -157,   185,   186,   187,
     188,   190,   189,   191,   141,   192,   193,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,   194,   195,   196,    48,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,   197,   198,   199,   184,   200,
      20,  -157,  -157,  -157,  -157,  -157,  -157,  -157,   141,   141,
     141,   141,   141,   141,   141,  -157,  -157,  -157,  -157,  -157,
     202,   203,  -157,   204,     6,   205,   206,   207,   208,   210,
     211,   212,   213,  -157,   218,   219,   220,   217,  -157,   223,
     224,   225,   227,   228,   226,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,   186,   186,   186,  -157,
    -157,  -157,  -157,   230,  -157,  -157,  -157,  -157,  -157,   229,
     231,   232,  -157,   233,   234,   235,   222,   -54,  -157,   236,
    -157,  -157,  -157,  -157,   237,  -157,  -157,  -157,  -157,  -157,
    -157,   242,   239,  -157,  -157,  -157,   240,  -157,  -157
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    81,     1,     0,     0,     0,     0,     3,     5,     4,
       7,     0,     8,     0,     6,     9,     0,     0,     0,     0,
       0,     0,   146,     0,     0,   144,   145,    56,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,    43,    46,    44,    45,    47,
      48,    54,    49,    50,    51,    52,    53,    42,    55,     0,
     120,     0,     0,     0,     0,   115,   116,   117,   118,   119,
       0,    33,     0,     0,     0,     0,     0,    28,    29,    30,
      31,    32,     0,     0,     0,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,     0,     0,     0,   114,     0,
       0,     0,     0,     0,     0,    27,    87,     0,     0,     0,
      84,    85,    86,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,    94,    95,    97,    99,    96,
      98,   101,   102,   100,     0,   142,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,   113,     0,     0,    10,     0,
       0,     0,    26,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,   147,    57,
      70,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,     0,     0,     0,     0,    74,    75,    76,
      77,   121,   122,   123,   133,     0,     0,     0,     0,     0,
       0,   127,   128,   130,   129,   131,   132,    36,    10,    10,
      10,    10,    10,    10,    10,    12,    11,    34,    35,    37,
       0,     0,    82,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,    91,     0,     0,     0,     0,    73,     0,
       0,     0,     0,     0,     0,   126,    13,    14,    15,    16,
      17,    18,    19,    88,    89,   108,    20,    20,    20,    22,
      21,   111,   104,     0,   106,   109,   107,   110,   105,     0,
       0,     0,    72,     0,     0,     0,     0,     0,   140,     0,
     125,    23,    24,    25,     0,    80,    79,    78,   137,   135,
     134,     0,     0,   139,   136,   112,     0,   138,   141
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,  -157,   -47,  -111,  -156,    25,  -157,  -157,   122,
    -157,  -157,  -157,  -157,  -157,  -157,   209,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,  -157,  -157,  -157,    -2,  -157,  -157,  -157,  -157,  -157,
    -157,    87,  -157,  -157,  -157,  -157,  -157,   117,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,   216,
    -157,  -157,  -157,  -157,  -157,  -157,    35,  -157,  -157,  -157,
    -157,  -157,  -157,   -95,  -157,  -157,   244,  -157
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,   235,   236,   279,   280,     8,    76,    77,
      78,    79,    80,    81,     9,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,   206,   207,   208,   209,   210,    10,    11,
     119,   120,   121,   122,    12,    13,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    14,    64,    65,
      66,    67,    68,    69,    70,   220,   221,   222,   223,   224,
     225,   226,   297,   298,    15,    24,    25,    26
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     169,    27,   296,    28,    60,    20,   312,    16,  -124,   -71,
      29,    17,   276,   277,   278,    61,    62,   116,    30,    18,
      22,   214,    31,    19,   215,    32,    33,    34,   123,    21,
      35,    36,   116,    37,    71,    38,   117,    82,   216,    23,
      22,    83,   124,   217,    72,    84,    87,    39,   125,    63,
     126,   117,    88,    40,   118,    41,   218,    73,    89,    23,
     101,   127,   244,   107,   203,    74,    90,   204,   103,   118,
      75,   205,   219,   251,    91,   128,   129,   130,   131,    85,
     264,    27,   132,    28,    60,    92,    93,   186,  -124,   -71,
      29,   175,    94,   114,    95,    61,    62,   214,    30,    96,
     215,   144,    31,   123,    97,    32,    33,    34,   257,   203,
      35,    36,   204,    37,   216,    38,   205,   124,    98,   217,
     301,   302,   303,   125,    99,   126,     2,    39,   100,    63,
     104,   105,   218,    40,   106,    41,   127,    71,   109,   110,
       3,   111,   145,     4,   112,   146,   113,    72,   219,   147,
     128,   129,   130,   131,     5,     6,   148,   132,   149,   155,
      73,   150,   151,   152,   -90,   153,   154,   156,    74,   157,
     158,   159,   160,    75,   228,   229,   230,   231,   232,   233,
     234,   266,   267,   268,   269,   270,   271,   272,   161,   162,
     173,   168,   165,   166,   163,   164,   167,   168,   115,   170,
     171,   174,   313,   245,   258,   172,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   211,   212,   213,   227,   237,   238,   239,   240,   241,
     242,   243,   244,   262,   246,   249,   247,   248,   250,   252,
     187,   102,     0,     0,   253,   265,   254,   255,   256,   259,
     260,   261,   263,   273,   274,   275,   281,   282,    86,   284,
     283,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     108,   294,   295,   296,   311,   299,   304,   300,     0,     0,
     305,     0,   306,   307,   308,   309,   310,   314,   315,   316,
     317,   318
};

static const yytype_int16 yycheck[] =
{
     111,     1,    56,     3,     1,    54,    60,    59,     5,     9,
      10,    59,     6,     7,     8,    12,    13,     1,    18,    59,
       1,     1,    22,    59,     4,    25,    26,    27,     1,    38,
      30,    31,     1,    33,     1,    35,    20,    59,    18,    20,
       1,    59,    15,    23,    11,    62,    62,    47,    21,    46,
      23,    20,    62,    53,    38,    55,    36,    24,    62,    20,
      60,    34,    56,    60,    16,    32,    62,    19,     9,    38,
      37,    23,    52,   184,    62,    48,    49,    50,    51,    60,
      60,     1,    55,     3,     1,    62,    62,    60,     5,     9,
      10,    60,    62,    60,    62,    12,    13,     1,    18,    62,
       4,    57,    22,     1,    62,    25,    26,    27,    60,    16,
      30,    31,    19,    33,    18,    35,    23,    15,    62,    23,
     276,   277,   278,    21,    62,    23,     0,    47,    62,    46,
      62,    62,    36,    53,    62,    55,    34,     1,     5,    62,
      14,    62,    61,    17,    62,    57,    62,    11,    52,    57,
      48,    49,    50,    51,    28,    29,    57,    55,    57,    56,
      24,    57,    57,    57,    38,    57,    57,    57,    32,    57,
      57,    57,    61,    37,    39,    40,    41,    42,    43,    44,
      45,   228,   229,   230,   231,   232,   233,   234,    59,    57,
      62,    56,    61,    59,    57,    57,    56,    56,    76,    57,
      57,    62,   297,   178,   206,    61,   119,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    57,    57,
      61,    56,    56,    59,    57,    56,    58,    57,    57,    57,
     133,    42,    -1,    -1,    61,   220,    62,    62,    62,    62,
      62,    62,    62,    61,    61,    61,    61,    61,    24,    61,
      63,    61,    61,    61,    61,    57,    57,    57,    61,    56,
      64,    57,    57,    56,    62,    57,    56,    61,    -1,    -1,
      61,    -1,    61,    61,    61,    61,    61,    61,    61,    57,
      61,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,     0,    14,    17,    28,    29,    66,    71,    78,
     102,   103,   108,   109,   121,   138,    59,    59,    59,    59,
      54,    38,     1,    20,   139,   140,   141,     1,     3,    10,
      18,    22,    25,    26,    27,    30,    31,    33,    35,    47,
      53,    55,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
       1,    12,    13,    46,   122,   123,   124,   125,   126,   127,
     128,     1,    11,    24,    32,    37,    72,    73,    74,    75,
      76,    77,    59,    59,    62,    60,   140,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    60,    80,     9,    62,    62,    62,    60,   123,     5,
      62,    62,    62,    62,    60,    73,     1,    20,    38,   104,
     105,   106,   107,     1,    15,    21,    23,    34,    48,    49,
      50,    51,    55,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,    57,    61,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    56,    57,    57,    57,    57,
      61,    59,    57,    57,    57,    61,    59,    56,    56,    68,
      57,    57,    61,    62,    62,    60,   105,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    60,   111,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    16,    19,    23,    97,    98,    99,   100,
     101,    61,    61,    61,     1,     4,    18,    23,    36,    52,
     129,   130,   131,   132,   133,   134,   135,    61,    39,    40,
      41,    42,    43,    44,    45,    67,    68,    61,    61,    61,
      57,    57,    61,    56,    56,    70,    57,    58,    57,    56,
      57,    68,    57,    61,    62,    62,    62,    60,    98,    62,
      62,    62,    59,    62,    60,   130,    67,    67,    67,    67,
      67,    67,    67,    61,    61,    61,     6,     7,     8,    69,
      70,    61,    61,    63,    61,    61,    61,    61,    61,    57,
      57,    57,    61,    56,    57,    57,    56,   136,   137,    57,
      61,    69,    69,    69,    56,    61,    61,    61,    61,    61,
      61,    62,    60,   137,    61,    61,    57,    61,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      67,    67,    68,    68,    68,    68,    68,    68,    68,    68,
      69,    69,    70,    70,    70,    70,    71,    72,    72,    73,
      73,    73,    73,    73,    74,    75,    76,    77,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    96,    95,    97,    97,    98,    98,    98,    99,   100,
     101,   103,   102,   104,   104,   105,   105,   105,   106,   107,
     109,   108,   110,   110,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   122,   123,   123,   123,   123,
     123,   124,   125,   126,   128,   127,   129,   129,   130,   130,
     130,   130,   130,   130,   131,   132,   133,   134,   135,   136,
     136,   137,   138,   139,   139,   140,   140,   141
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       0,     1,     2,     3,     3,     3,     5,     2,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     4,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     6,     5,     2,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     5,     2,
       1,     4,     5,     2,     1,     1,     1,     4
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
#line 1567 "config-parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 112 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1573 "config-parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 113 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1579 "config-parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 114 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 1585 "config-parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 115 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 1591 "config-parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 116 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 1597 "config-parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 117 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 1603 "config-parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 118 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 1609 "config-parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 119 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 1615 "config-parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 122 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 1621 "config-parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 123 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 1627 "config-parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 124 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 1633 "config-parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 125 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 1639 "config-parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 126 "config-parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 1645 "config-parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 143 "config-parser.y" /* yacc.c:1646  */
    {
   OptionsItem->negcache = (yyvsp[-1].number);
}
#line 1653 "config-parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 148 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OptionsItem->pidfile);
   OptionsItem->pidfile = DupString((yyvsp[-1].string));
}
#line 1662 "config-parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 154 "config-parser.y" /* yacc.c:1646  */
    {
   OptionsItem->dns_fdlimit = (yyvsp[-1].number);
}
#line 1670 "config-parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 159 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OptionsItem->scanlog);
   OptionsItem->scanlog = DupString((yyvsp[-1].string));
}
#line 1679 "config-parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 189 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->away);
   IRCItem->away = DupString((yyvsp[-1].string));
}
#line 1688 "config-parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 195 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->kline);
   IRCItem->kline = DupString((yyvsp[-1].string));
}
#line 1697 "config-parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 201 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->mode);
   IRCItem->mode = DupString((yyvsp[-1].string));
}
#line 1706 "config-parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 207 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->nick);
   IRCItem->nick = DupString((yyvsp[-1].string));
}
#line 1715 "config-parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 213 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->nickserv);
   IRCItem->nickserv = DupString((yyvsp[-1].string));
}
#line 1724 "config-parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 219 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->oper);
   IRCItem->oper = DupString((yyvsp[-1].string));
}
#line 1733 "config-parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 225 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->password);
   IRCItem->password = DupString((yyvsp[-1].string));
}
#line 1742 "config-parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 231 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   node = node_create(DupString((yyvsp[-1].string)));

   list_add(IRCItem->performs, node);
}
#line 1753 "config-parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 239 "config-parser.y" /* yacc.c:1646  */
    {
   IRCItem->port = (yyvsp[-1].number);
}
#line 1761 "config-parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 244 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->realname);
   IRCItem->realname = DupString((yyvsp[-1].string));
}
#line 1770 "config-parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 250 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->server);
   IRCItem->server = DupString((yyvsp[-1].string));
}
#line 1779 "config-parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 256 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->username);
   IRCItem->username = DupString((yyvsp[-1].string));
}
#line 1788 "config-parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 262 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->vhost);
   IRCItem->vhost = DupString((yyvsp[-1].string));
}
#line 1797 "config-parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 268 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(IRCItem->connregex);
   IRCItem->connregex = DupString((yyvsp[-1].string));
}
#line 1806 "config-parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 277 "config-parser.y" /* yacc.c:1646  */
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
#line 1826 "config-parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 302 "config-parser.y" /* yacc.c:1646  */
    {
   struct ChannelConf *item = tmp;

   MyFree(item->name);
   item->name = DupString((yyvsp[-1].string));
}
#line 1837 "config-parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 310 "config-parser.y" /* yacc.c:1646  */
    {
   struct ChannelConf *item = tmp;

   MyFree(item->key);
   item->key = DupString((yyvsp[-1].string));
}
#line 1848 "config-parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 318 "config-parser.y" /* yacc.c:1646  */
    {
   struct ChannelConf *item = tmp;

   MyFree(item->invite);
   item->invite = DupString((yyvsp[-1].string));
}
#line 1859 "config-parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 328 "config-parser.y" /* yacc.c:1646  */
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
#line 1878 "config-parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 352 "config-parser.y" /* yacc.c:1646  */
    {
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) DupString((yyvsp[-1].string)));

   list_add(item->masks, node);
}
#line 1891 "config-parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 362 "config-parser.y" /* yacc.c:1646  */
    {
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) DupString((yyvsp[-1].string)));

   list_add(item->scanners, node);
}
#line 1904 "config-parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 374 "config-parser.y" /* yacc.c:1646  */
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
#line 1952 "config-parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 434 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->name);
   item->name = DupString((yyvsp[-1].string));
}
#line 1962 "config-parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 441 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->vhost);
   item->vhost = DupString((yyvsp[-1].string));
}
#line 1972 "config-parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 448 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->target_ip);
   item->target_ip = DupString((yyvsp[-1].string));
}
#line 1982 "config-parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 455 "config-parser.y" /* yacc.c:1646  */
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
#line 2001 "config-parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 471 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->fd = (yyvsp[-1].number);
}
#line 2010 "config-parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 477 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->target_port = (yyvsp[-1].number);
}
#line 2019 "config-parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 483 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->timeout = (yyvsp[-1].number);
}
#line 2028 "config-parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 489 "config-parser.y" /* yacc.c:1646  */
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->max_read = (yyvsp[-1].number);
}
#line 2037 "config-parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 495 "config-parser.y" /* yacc.c:1646  */
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
#line 2057 "config-parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 525 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OpmItem->dnsbl_from);
   OpmItem->dnsbl_from = DupString((yyvsp[-1].string));
}
#line 2066 "config-parser.c" /* yacc.c:1646  */
    break;

  case 122:
#line 531 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OpmItem->dnsbl_to);
   OpmItem->dnsbl_to = DupString((yyvsp[-1].string));
}
#line 2075 "config-parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 537 "config-parser.y" /* yacc.c:1646  */
    {
   MyFree(OpmItem->sendmail);
   OpmItem->sendmail = DupString((yyvsp[-1].string));
}
#line 2084 "config-parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 545 "config-parser.y" /* yacc.c:1646  */
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
#line 2106 "config-parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 574 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;

   MyFree(item->name);
   item->name = DupString((yyvsp[-1].string));
}
#line 2117 "config-parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 581 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;

   MyFree(item->kline);
   item->kline = DupString((yyvsp[-1].string));
}
#line 2128 "config-parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 588 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;
   
   if(strcmp("A record bitmask", (yyvsp[-1].string)) == 0)
      item->type = A_BITMASK;
   else if(strcmp("A record reply", (yyvsp[-1].string)) == 0)
      item->type = A_REPLY;
   else
      yyerror("Unknown blacklist type defined");
}
#line 2143 "config-parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 599 "config-parser.y" /* yacc.c:1646  */
    {
   struct BlacklistConf *item = tmp;

   item->ban_unknown = (yyvsp[-1].number);
}
#line 2153 "config-parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 611 "config-parser.y" /* yacc.c:1646  */
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
#line 2171 "config-parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 637 "config-parser.y" /* yacc.c:1646  */
    {
   node_t *node;
   node = node_create(DupString((yyvsp[-1].string)));

   list_add(ExemptItem->masks, node);
}
#line 2182 "config-parser.c" /* yacc.c:1646  */
    break;


#line 2186 "config-parser.c" /* yacc.c:1646  */
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
#line 644 "config-parser.y" /* yacc.c:1906  */



/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntax.y"

 #include "stdio.h"
 #include "string.h"
 int nb_ligne=1;
 int Col=1;
 void yyerror(char *msg);
 char* current_type;



/* Line 189 of yacc.c  */
#line 84 "syntax.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MC_DEB = 258,
     MC_FIN = 259,
     MC_EXC = 260,
     MC_FIX = 261,
     ERR = 262,
     MC_SI = 263,
     MC_SNON = 264,
     MC_TQ = 265,
     MC_OU = 266,
     MC_ALORS = 267,
     ACCO = 268,
     MC_FAIRE = 269,
     MC_LIRE = 270,
     MC_AFFICHE = 271,
     MC_NON = 272,
     INFE = 273,
     SUPE = 274,
     NOTE = 275,
     AFF = 276,
     MC_ET = 277,
     MOINS = 278,
     ACCF = 279,
     MC_NUM = 280,
     MC_REAL = 281,
     IDF = 282,
     MC_TXT = 283,
     STRING = 284,
     COMENT_1 = 285,
     COMENT = 286,
     CST = 287,
     CST_FLOAT = 288
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 13 "syntax.y"

    int entier;
    char* str;
    float floatval;



/* Line 214 of yacc.c  */
#line 161 "syntax.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 173 "syntax.tab.c"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   143

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNRULES -- Number of states.  */
#define YYNSTATES  148

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,    46,    38,    37,    44,     2,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,    41,
      34,    36,    35,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    12,    15,    18,    19,    24,    32,
      41,    49,    58,    60,    62,    64,    66,    73,    77,    82,
      86,    89,    92,    95,    96,    98,   100,   102,   104,   106,
     111,   119,   124,   131,   140,   147,   150,   154,   158,   159,
     162,   166,   170,   173,   177,   181,   182,   185,   189,   193,
     194,   198,   200,   203,   205,   207,   210,   215,   217,   219,
     221,   223,   225,   227,   233,   239
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,     3,    49,     5,    53,     4,    -1,    50,
      49,    -1,    30,    49,    -1,    31,    49,    -1,    -1,    51,
      40,    52,    41,    -1,     6,    51,    40,    27,    36,    32,
      41,    -1,     6,    51,    40,    27,    36,    23,    32,    41,
      -1,     6,    51,    40,    27,    36,    33,    41,    -1,     6,
      51,    40,    27,    36,    23,    33,    41,    -1,    25,    -1,
      26,    -1,    28,    -1,    27,    -1,    27,    42,    32,    43,
      44,    52,    -1,    27,    44,    52,    -1,    27,    42,    32,
      43,    -1,    13,    54,    24,    -1,    55,    54,    -1,    30,
      54,    -1,    31,    54,    -1,    -1,    56,    -1,    57,    -1,
      58,    -1,    68,    -1,    69,    -1,    27,    21,    62,    41,
      -1,    27,    42,    32,    43,    21,    62,    41,    -1,    27,
      21,    29,    41,    -1,     8,    45,    59,    46,    12,    53,
      -1,     8,    45,    59,    46,    12,    53,     9,    53,    -1,
      10,    45,    59,    46,    14,    53,    -1,    61,    60,    -1,
      22,    61,    60,    -1,    11,    61,    60,    -1,    -1,    17,
      61,    -1,    45,    59,    46,    -1,    62,    67,    62,    -1,
      64,    63,    -1,    37,    64,    63,    -1,    23,    64,    63,
      -1,    -1,    66,    65,    -1,    38,    66,    65,    -1,    39,
      66,    65,    -1,    -1,    45,    62,    46,    -1,    32,    -1,
      23,    32,    -1,    27,    -1,    33,    -1,    23,    33,    -1,
      27,    42,    32,    43,    -1,    18,    -1,    35,    -1,    34,
      -1,    19,    -1,    36,    -1,    20,    -1,    15,    45,    27,
      46,    41,    -1,    16,    45,    29,    46,    41,    -1,    16,
      45,    29,    44,    27,    46,    41,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    47,    48,    49,    50,    54,    57,    65,
      74,    82,    93,    94,    95,    99,   108,   116,   123,   133,
     137,   138,   139,   140,   143,   144,   145,   146,   147,   153,
     165,   179,   189,   190,   194,   198,   202,   203,   204,   208,
     209,   210,   214,   218,   219,   220,   224,   228,   229,   237,
     241,   243,   245,   247,   254,   256,   258,   273,   274,   275,
     276,   277,   278,   283,   288,   289
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MC_DEB", "MC_FIN", "MC_EXC", "MC_FIX",
  "ERR", "MC_SI", "MC_SNON", "MC_TQ", "MC_OU", "MC_ALORS", "ACCO",
  "MC_FAIRE", "MC_LIRE", "MC_AFFICHE", "MC_NON", "INFE", "SUPE", "NOTE",
  "AFF", "MC_ET", "MOINS", "ACCF", "MC_NUM", "MC_REAL", "IDF", "MC_TXT",
  "STRING", "COMENT_1", "COMENT", "CST", "CST_FLOAT", "'<'", "'>'", "'='",
  "'+'", "'*'", "'/'", "':'", "';'", "'['", "']'", "','", "'('", "')'",
  "$accept", "S", "DECLARATIONS", "DECLARATION", "TYPE", "LISTEIDF",
  "BLOCINSTR", "INSTR", "INSTRUCTION", "AFFECTATION", "CONDITION",
  "BOUCLE", "CONDITIONLOG", "CONDITIONLOGPRIME", "CONDITIONSIMPLE", "EXP",
  "EXPPRIME", "TERME", "TERMEPRIME", "FACTEURS", "COMPARATEUR", "LECTURE",
  "AFFICHAGE", 0
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
     285,   286,   287,   288,    60,    62,    61,    43,    42,    47,
      58,    59,    91,    93,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    49,    49,    50,    50,    50,
      50,    50,    51,    51,    51,    52,    52,    52,    52,    53,
      54,    54,    54,    54,    55,    55,    55,    55,    55,    56,
      56,    56,    57,    57,    58,    59,    60,    60,    60,    61,
      61,    61,    62,    63,    63,    63,    64,    65,    65,    65,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    67,
      67,    67,    67,    68,    69,    69
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     2,     2,     0,     4,     7,     8,
       7,     8,     1,     1,     1,     1,     6,     3,     4,     3,
       2,     2,     2,     0,     1,     1,     1,     1,     1,     4,
       7,     4,     6,     8,     6,     2,     3,     3,     0,     2,
       3,     3,     2,     3,     3,     0,     2,     3,     3,     0,
       3,     1,     2,     1,     1,     2,     4,     1,     1,     1,
       1,     1,     1,     5,     5,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,     0,     0,    12,    13,    14,     6,     6,     0,
       6,     0,     1,     0,     4,     5,     0,     3,     0,     0,
      23,     0,    15,     0,     0,     0,     0,     0,     0,     0,
      23,    23,     0,    23,    24,    25,    26,    27,    28,     2,
       0,     0,     7,     0,     0,     0,     0,     0,     0,     0,
      21,    22,    19,    20,     0,    17,     0,     0,     0,     0,
       0,    53,    51,    54,     0,     0,    38,     0,    45,    49,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
       8,    10,    39,    52,    55,     0,     0,     0,     0,     0,
       0,    35,    57,    60,    62,    59,    58,    61,     0,     0,
       0,    42,     0,     0,    46,     0,     0,     0,     0,    31,
       0,    29,     0,     0,     9,    11,     0,    40,    50,     0,
      38,    38,    41,    45,    45,    49,    49,     0,    63,     0,
      64,     0,    16,    56,    32,    37,    36,    44,    43,    47,
      48,    34,     0,     0,     0,    65,    30,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     9,    10,    11,    23,    21,    32,    33,    34,
      35,    36,    65,    91,    66,    67,   101,    68,   104,    69,
      98,    37,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -92
static const yytype_int8 yypact[] =
{
       8,    12,    24,   -16,   -92,   -92,   -92,    12,    12,    29,
      12,    17,   -92,    32,   -92,   -92,    14,   -92,    52,    55,
      31,    72,    47,    11,    56,    63,    65,    66,    68,   -13,
      31,    31,    70,    31,   -92,   -92,   -92,   -92,   -92,   -92,
      77,    52,   -92,    48,   -10,   -10,    85,    86,    22,    82,
     -92,   -92,   -92,   -92,    73,   -92,   -18,    76,    78,   -10,
      64,    79,   -92,   -92,   -10,    74,    37,    50,     7,    25,
      80,    81,    49,    83,    33,    84,    75,    87,    88,    89,
     -92,   -92,   -92,   -92,   -92,    90,    91,   -15,   111,   -10,
     -10,   -92,   -92,   -92,   -92,   -92,   -92,   -92,    33,    33,
      33,   -92,    33,    33,   -92,   114,    92,   105,    93,   -92,
      94,   -92,   115,    52,   -92,   -92,    95,   -92,   -92,    14,
      37,    37,   -92,     7,     7,    25,    25,    14,   -92,    96,
     -92,    33,   -92,   -92,   126,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,    98,   100,    14,   -92,   -92,   -92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,    67,   -92,   140,   -40,   -91,    57,   -92,   -92,
     -92,   -92,   -39,   -22,   -57,   -48,   -23,     3,   -21,     4,
     -92,   -92,   -92
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      75,    55,    82,    92,    93,    94,    70,    59,    48,     4,
       5,     1,     6,    60,    78,    79,    87,    61,     3,    95,
      96,    97,    62,    63,    12,    86,   110,    20,   134,    49,
      99,   118,   120,   121,    16,    64,   141,     4,     5,    25,
       6,    26,     7,     8,   100,    60,    27,    28,    89,    61,
     122,    73,    42,   147,    62,    63,    60,    18,    29,    90,
      61,    30,    31,   102,   103,    62,    63,    74,    92,    93,
      94,    56,    19,   132,    14,    15,    39,    17,    74,    22,
      57,    58,    24,   143,    95,    96,    97,    50,    51,    40,
      53,    41,    43,   107,    52,   108,    83,    84,   135,   136,
     137,   138,   123,   124,   139,   140,   125,   126,    44,    54,
      45,    46,    71,    47,    76,    72,    77,    80,   112,    81,
      88,    85,   116,   119,   109,   111,   105,   106,   127,   114,
     115,   113,   129,   128,   130,   144,   131,   117,   133,   145,
     118,   146,   142,    13
};

static const yytype_uint8 yycheck[] =
{
      48,    41,    59,    18,    19,    20,    45,    17,    21,    25,
      26,     3,    28,    23,    32,    33,    64,    27,     6,    34,
      35,    36,    32,    33,     0,    64,    74,    13,   119,    42,
      23,    46,    89,    90,     5,    45,   127,    25,    26,     8,
      28,    10,    30,    31,    37,    23,    15,    16,    11,    27,
      98,    29,    41,   144,    32,    33,    23,    40,    27,    22,
      27,    30,    31,    38,    39,    32,    33,    45,    18,    19,
      20,    23,    40,   113,     7,     8,     4,    10,    45,    27,
      32,    33,    27,   131,    34,    35,    36,    30,    31,    42,
      33,    44,    36,    44,    24,    46,    32,    33,   120,   121,
     123,   124,    99,   100,   125,   126,   102,   103,    45,    32,
      45,    45,    27,    45,    32,    29,    43,    41,    43,    41,
      46,    42,    32,    12,    41,    41,    46,    46,    14,    41,
      41,    44,    27,    41,    41,     9,    21,    46,    43,    41,
      46,    41,    46,     3
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    48,     6,    25,    26,    28,    30,    31,    49,
      50,    51,     0,    51,    49,    49,     5,    49,    40,    40,
      13,    53,    27,    52,    27,     8,    10,    15,    16,    27,
      30,    31,    54,    55,    56,    57,    58,    68,    69,     4,
      42,    44,    41,    36,    45,    45,    45,    45,    21,    42,
      54,    54,    24,    54,    32,    52,    23,    32,    33,    17,
      23,    27,    32,    33,    45,    59,    61,    62,    64,    66,
      59,    27,    29,    29,    45,    62,    32,    43,    32,    33,
      41,    41,    61,    32,    33,    42,    59,    62,    46,    11,
      22,    60,    18,    19,    20,    34,    35,    36,    67,    23,
      37,    63,    38,    39,    65,    46,    46,    44,    46,    41,
      62,    41,    43,    44,    41,    41,    32,    46,    46,    12,
      61,    61,    62,    64,    64,    66,    66,    14,    41,    27,
      41,    21,    52,    43,    53,    60,    60,    63,    63,    65,
      65,    53,    46,    62,     9,    41,    41,    53
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 2:

/* Line 1455 of yacc.c  */
#line 43 "syntax.y"
    { printf ("programme syntaxiquement correcte . \n"); YYACCEPT;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 57 "syntax.y"
    { printf("constante declare : %s de type %s\n", (yyvsp[(4) - (7)].str), current_type);
                if (isDeclared((yyvsp[(4) - (7)].str))){
                 printf("Erreur semantique : Variable '%s' deja declare , a la ligne %d a la colonne %d\n", (yyvsp[(4) - (7)].str),nb_ligne,Col);exit(1);
              };  
                rechercher((yyvsp[(4) - (7)].str),"IDF",current_type,"","FIXE",0,1);
                 Col= Col + strlen((yyvsp[(4) - (7)].str));
              ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 65 "syntax.y"
    { printf("constante declare : %s de type %s\n", (yyvsp[(4) - (8)].str), current_type);
                if (isDeclared((yyvsp[(4) - (8)].str))){
                 printf("Erreur semantique : Variable '%s' deja declare , a la ligne %d a la colonne %d\n", (yyvsp[(4) - (8)].str),nb_ligne,Col);exit(1);
              };  
                rechercher((yyvsp[(4) - (8)].str),"IDF",current_type,"","FIXE",0,1);
                 Col= Col + strlen((yyvsp[(4) - (8)].str));
              ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 74 "syntax.y"
    { printf("constante declare : %s de type %s\n", (yyvsp[(4) - (7)].str), current_type);
                if (isDeclared((yyvsp[(4) - (7)].str))){
                 printf("Erreur semantique : Variable '%s' deja declare , a la ligne %d a la colonne %d\n", (yyvsp[(4) - (7)].str),nb_ligne,Col);exit(1);
              };  
                rechercher((yyvsp[(4) - (7)].str),"IDF",current_type,"","FIXE",0,1);
                 Col= Col + strlen((yyvsp[(4) - (7)].str));
              ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 82 "syntax.y"
    { printf("constante declare : %s de type %s\n", (yyvsp[(4) - (8)].str), current_type);
                if (isDeclared((yyvsp[(4) - (8)].str))){
                 printf("Erreur semantique : Variable '%s' deja declare , a la ligne %d a la colonne %d\n", (yyvsp[(4) - (8)].str),nb_ligne,Col);exit(1);
              };  
                rechercher((yyvsp[(4) - (8)].str),"IDF",current_type,"","FIXE",0,1);
                 Col= Col + strlen((yyvsp[(4) - (8)].str));
              ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 93 "syntax.y"
    { current_type = "int"; (yyval.str) = current_type; ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 94 "syntax.y"
    { current_type = "float"; (yyval.str) = current_type; ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 95 "syntax.y"
    { current_type = "string"; (yyval.str) = current_type; ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 99 "syntax.y"
    { printf("Identifiant declare : %s de type %s\n", (yyvsp[(1) - (1)].str), current_type);
              if (isDeclared((yyvsp[(1) - (1)].str))){
               printf("Erreur semantique : Variable '%s' deja declare, a la ligne %d a la colonne %d\n", (yyvsp[(1) - (1)].str),nb_ligne,Col);exit(1);
              }
                 rechercher((yyvsp[(1) - (1)].str),"IDF",current_type,"","",0,1);
                 Col= Col + strlen((yyvsp[(1) - (1)].str)); 
              ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 108 "syntax.y"
    { printf("Tableau declare : %s[%d] de type %s\n", (yyvsp[(1) - (6)].str), (yyvsp[(3) - (6)].entier), current_type);
                    if (isDeclared((yyvsp[(1) - (6)].str))) {
                 printf("Erreur semantique : Variable '%s' deja declare,  a la ligne %d a la colonne %d\n", (yyvsp[(1) - (6)].str),nb_ligne,Col);exit(1);
              } 
                 rechercher((yyvsp[(1) - (6)].str),"IDF",current_type,"","",(yyvsp[(3) - (6)].entier),1); 
                 Col= Col + strlen((yyvsp[(1) - (6)].str));  ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 116 "syntax.y"
    { printf("Identifiant declare : %s de type %s\n", (yyvsp[(1) - (3)].str), current_type); 
                       if (isDeclared((yyvsp[(1) - (3)].str))) {
                 printf("Erreur semantique : Variable '%s' deja declare , a la ligne %d a la colonne %d\n", (yyvsp[(1) - (3)].str),nb_ligne,Col);exit(1);
              } 
                 rechercher((yyvsp[(1) - (3)].str),"IDF",current_type,"","",0,1); 
                 Col= Col + strlen((yyvsp[(1) - (3)].str));    
                 ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 123 "syntax.y"
    { printf("Tableau declare : %s[%d] de type %s\n", (yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].entier), current_type);
                    if (isDeclared((yyvsp[(1) - (4)].str))) {
                 printf("Erreur semantique : Variable '%s' deja declare , a la ligne %d a la colonne %d\n", (yyvsp[(1) - (4)].str),nb_ligne,Col);exit(1);
              } 
                 rechercher((yyvsp[(1) - (4)].str),"IDF",current_type,"","",(yyvsp[(3) - (4)].entier),1); 
                 Col= Col + strlen((yyvsp[(1) - (4)].str));
        ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 153 "syntax.y"
    {
            if (!isDeclared((yyvsp[(1) - (4)].str))) {
                printf("Erreur semantique: Variable '%s' non declaree, a la ligne %d a la colonne %d\n", (yyvsp[(1) - (4)].str),nb_ligne,Col);
                exit(1);
            }
            if (!isFixe((yyvsp[(1) - (4)].str))){
               printf("Erreur semantique: Modification de la valeur d une constante, a la ligne %d a la colonne %d\n",nb_ligne,Col);exit(1);
            }
          
           
        ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 165 "syntax.y"
    {
            if (!isDeclared((yyvsp[(1) - (7)].str))) {
                printf("Erreur semantique: Variable '%s' non declaree, a la ligne %d a la colonne %d\n", (yyvsp[(1) - (7)].str),nb_ligne,Col);
                exit(1);
            }
            if (!isFixe((yyvsp[(1) - (7)].str))){
               printf("Erreur semantique: Modification de la valeur d une constante, a la ligne %d a la colonne %d\n",nb_ligne,Col);exit(1);
            }
            if( (yyvsp[(3) - (7)].entier) > getTaille((yyvsp[(1) - (7)].str))){
                printf("Erreur semantique : Depassement de la taille d un tableau, a la ligne %d a la colonne %d\n",nb_ligne,Col);exit(1);
            }
            
        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 179 "syntax.y"
    { if (!isDeclared((yyvsp[(1) - (4)].str))) {
                printf("Erreur semantique : Variable '%s' non declaree.a la ligne %d a la colonne %d\n", (yyvsp[(1) - (4)].str),nb_ligne,Col);
                exit(1);
            }
             
        ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 218 "syntax.y"
    {(yyval.entier)=(yyval.entier) + (yyvsp[(2) - (3)].entier) ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 219 "syntax.y"
    {(yyval.entier)= (yyval.entier)- (yyvsp[(2) - (3)].entier);}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 220 "syntax.y"
    {(yyval.entier)= 0;;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 228 "syntax.y"
    {(yyval.entier)= (yyval.entier) * (yyvsp[(2) - (3)].entier);}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 229 "syntax.y"
    {
          if ( (yyvsp[(2) - (3)].entier) ==0  ) { 
              printf("Erreur semantique :Division par 0, a la ligne %d a la colonne %d\n",nb_ligne,Col);
              exit(1); 
          } else {
              (yyval.entier) = (yyval.entier) / (yyvsp[(2) - (3)].entier);
          }
      ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 237 "syntax.y"
    {(yyval.entier)=0;;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 241 "syntax.y"
    {(yyval.entier)=(yyvsp[(2) - (3)].entier);}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 243 "syntax.y"
    {((yyval.entier)=(yyvsp[(1) - (1)].entier));}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 245 "syntax.y"
    {((yyval.entier)=(yyvsp[(2) - (2)].entier));}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 247 "syntax.y"
    {if (!isDeclared((yyvsp[(1) - (1)].str))) {
                printf("Erreur semantique : Variable '%s' non declaree, a la ligne %d a la colonne %d\n", (yyvsp[(1) - (1)].str),nb_ligne,Col);
                exit(1);
            }
             
            
            ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 254 "syntax.y"
    {((yyval.entier)=(int)(yyvsp[(1) - (1)].floatval));}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 256 "syntax.y"
    {((yyval.entier)=(int)(yyvsp[(2) - (2)].floatval));}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 258 "syntax.y"
    {if (!isDeclared((yyvsp[(1) - (4)].str))) {
                printf("Erreur semantique : Variable '%s' non declaree, a la ligne %d a la colonne %d\n", (yyvsp[(1) - (4)].str),nb_ligne,Col);
                exit(1);
            }
            
            if( (yyvsp[(3) - (4)].entier) > getTaille((yyvsp[(1) - (4)].str))){
                printf("Erreur semantique : Depassement de la taille d un tableau, a la ligne %d a la colonne %d\n",nb_ligne,Col);exit(1);
            }
            
            ;}
    break;



/* Line 1455 of yacc.c  */
#line 1780 "syntax.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 296 "syntax.y"


void yyerror(char *msg) {
    printf("Erreur syntaxique %s, a la ligne %d a la colonne %d\n", msg, nb_ligne,Col);
    
}
main ()
{ 
  
  yyparse();
  afficherTS();
  afficherM();
  afficherS();
  libererTS();
  libererM();
  libererS();

    return 0;
}
yywrap (){
  
}


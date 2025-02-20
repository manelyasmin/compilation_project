
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
#line 1 "syntxq.y"

#include <stdio.h>
#include<stdlib.h>
#include <math.h> 
#include "compFonction.h"
#include"quad2.h"
 extern FILE* yyin;
void ins(int n);
 
void ajour(); 
 
extern int temporaryGenerated; 
 
int Tab[100]={0};
 
int i1=0,nb_ligne=1;
char tmp [20],tmp1[20],suavType[20];
 
liste *tab=NULL;
Tpile *sommet=NULL;
tabcons *QQ=NULL;
quad2 *q=NULL;
int qc,i,j,e,Z,Z1,Z2,suav_debut,sauv_bz,suav_fin,suav_br,e1,e2;
float e21;



/* Line 189 of yacc.c  */
#line 101 "syntxq.tab.c"

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
     mc_lang = 258,
     mc_fin = 259,
     mc_dec = 260,
     mc_fdec = 261,
     mc_deb = 262,
     bib_InOut = 263,
     bib_Tab = 264,
     bib_arithm = 265,
     mc_input = 266,
     mc_output = 267,
     mc_tableau = 268,
     mc_simple = 269,
     cst = 270,
     aff = 271,
     p4 = 272,
     mc_while = 273,
     mc_faire = 274,
     mc_fait = 275,
     diff = 276,
     supe = 277,
     infe = 278,
     compr = 279,
     mc_execute = 280,
     mc_if = 281,
     mc_string = 282,
     sstring = 283,
     id = 284,
     mc_float = 285,
     mc_cst = 286,
     mc_entier = 287,
     mc_integer = 288,
     mc_reel = 289
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 30 "syntxq.y"

int num;
char* str;



/* Line 214 of yacc.c  */
#line 178 "syntxq.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 190 "syntxq.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   150

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNRULES -- Number of states.  */
#define YYNSTATES  141

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      25,    26,    46,    44,    19,    45,     2,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    17,
      31,    33,    29,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,     2,     2,     2,     2,     2,
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
      15,    16,    18,    22,    23,    24,    27,    28,    30,    32,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    13,    16,    19,    22,    23,    28,    33,
      39,    40,    42,    44,    46,    48,    50,    52,    57,    63,
      66,    70,    76,    83,    86,    89,    92,    95,    98,    99,
     105,   107,   111,   117,   127,   128,   129,   130,   141,   142,
     143,   144,   148,   152,   156,   158,   162,   166,   170,   172,
     176,   180,   184,   188,   190,   195,   203,   207,   211,   213,
     215,   219,   223,   225,   229,   233,   235,   237,   239,   241,
     246
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,     3,    38,     5,    50,    51,     6,     7,
      57,     4,    -1,     8,    50,    -1,     9,    50,    -1,    10,
      50,    -1,    -1,    52,    18,    55,    51,    -1,    52,    18,
      56,    51,    -1,    52,    18,    15,    54,    51,    -1,    -1,
      39,    -1,    42,    -1,    36,    -1,    41,    -1,    43,    -1,
      37,    -1,    38,    16,    53,    17,    -1,    38,    16,    53,
      19,    54,    -1,    38,    17,    -1,    38,    19,    55,    -1,
      38,    20,    41,    21,    17,    -1,    38,    20,    41,    21,
      19,    56,    -1,    61,    57,    -1,    65,    57,    -1,    58,
      57,    -1,    60,    57,    -1,    72,    57,    -1,    -1,    11,
      25,    37,    26,    17,    -1,    38,    -1,    38,    19,    59,
      -1,    12,    25,    59,    26,    17,    -1,    34,    62,    57,
      63,    35,    25,    69,    26,    64,    -1,    -1,    -1,    -1,
      22,    66,    25,    69,    26,    67,    23,    57,    68,    24,
      -1,    -1,    -1,    -1,    70,    33,    71,    -1,    70,    31,
      71,    -1,    70,    29,    71,    -1,    71,    -1,    70,    33,
      71,    -1,    70,    31,    71,    -1,    70,    29,    71,    -1,
      71,    -1,    71,    27,    76,    -1,    71,    28,    76,    -1,
      71,    30,    76,    -1,    71,    32,    76,    -1,    76,    -1,
      38,    16,    73,    17,    -1,    38,    20,    41,    21,    16,
      73,    17,    -1,    74,    44,    75,    -1,    74,    45,    75,
      -1,    75,    -1,    37,    -1,    74,    44,    75,    -1,    74,
      45,    75,    -1,    75,    -1,    75,    46,    76,    -1,    75,
      47,    76,    -1,    76,    -1,    41,    -1,    43,    -1,    38,
      -1,    38,    20,    41,    21,    -1,    45,    74,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    57,    57,    60,    61,    62,    63,    66,    67,    68,
      69,    71,    72,    73,    77,    78,    79,    82,    87,    95,
      99,   105,   114,   133,   134,   135,   136,   137,   138,   145,
     149,   152,   155,   159,   160,   161,   162,   172,   175,   176,
     177,   189,   191,   193,   195,   197,   199,   201,   203,   206,
     208,   210,   212,   214,   222,   232,   249,   256,   263,   264,
     268,   276,   281,   284,   292,   300,   303,   304,   306,   309,
     316
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_lang", "mc_fin", "mc_dec", "mc_fdec",
  "mc_deb", "bib_InOut", "bib_Tab", "bib_arithm", "mc_input", "mc_output",
  "mc_tableau", "mc_simple", "cst", "aff", "';'", "p4", "','", "'['",
  "']'", "mc_while", "mc_faire", "mc_fait", "'('", "')'", "diff", "supe",
  "'>'", "infe", "'<'", "compr", "'='", "mc_execute", "mc_if", "mc_string",
  "sstring", "id", "mc_float", "mc_cst", "mc_entier", "mc_integer",
  "mc_reel", "'+'", "'-'", "'*'", "'/'", "$accept", "s", "BIB", "VARIABLE",
  "TYPE", "valeur", "ID2", "ID", "ID1", "INSTRUCTION", "IN", "VARIABLEOUT",
  "OUT", "CONDITIONN", "M1", "M2", "M3", "WHILE", "A", "B", "C",
  "CONDITION", "COND", "CON", "INST", "EXP", "E", "T", "F", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,    59,   272,    44,
      91,    93,   273,   274,   275,    40,    41,   276,   277,    62,
     278,    60,   279,    61,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,    43,    45,    42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    50,    51,    51,    51,
      51,    52,    52,    52,    53,    53,    53,    54,    54,    55,
      55,    56,    56,    57,    57,    57,    57,    57,    57,    58,
      59,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    69,    69,    69,    70,    70,    70,    70,    71,
      71,    71,    71,    71,    72,    72,    73,    73,    73,    73,
      74,    74,    74,    75,    75,    75,    76,    76,    76,    76,
      76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     2,     2,     2,     0,     4,     4,     5,
       0,     1,     1,     1,     1,     1,     1,     4,     5,     2,
       3,     5,     6,     2,     2,     2,     2,     2,     0,     5,
       1,     3,     5,     9,     0,     0,     0,    10,     0,     0,
       0,     3,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     3,     3,     1,     4,     7,     3,     3,     1,     1,
       3,     3,     1,     3,     3,     1,     1,     1,     1,     4,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     6,     6,     6,     6,    10,
       3,     4,     5,    13,    11,    12,     0,     0,     0,     0,
      28,     0,     0,    10,    10,     0,     0,    38,    34,     0,
       0,    28,    28,    28,    28,    28,     0,    10,    19,     0,
       0,     7,     8,     0,     0,     0,    28,     0,     0,     2,
      25,    26,    23,    24,    27,     0,     9,     0,    20,     0,
       0,    30,     0,     0,    35,    59,    68,    66,    67,     0,
       0,     0,    62,    65,     0,    16,    14,    15,     0,     0,
       0,     0,     0,     0,     0,    48,    53,     0,     0,    70,
      62,    54,     0,     0,     0,     0,     0,    17,     0,    21,
       0,    29,    31,    32,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,    61,    63,    64,     0,    18,
       0,    22,     0,    47,    46,    45,    49,    50,    51,    52,
       0,    69,     0,    28,     0,    55,    40,    36,     0,    33,
      37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    16,    17,    78,    37,    23,    24,    30,
      31,    62,    32,    33,    46,    87,   139,    34,    45,   122,
     138,    83,    84,    85,    35,    70,    71,    72,    73
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -62
static const yytype_int8 yypact[] =
{
      18,   -10,    46,    49,   -62,    85,    85,    85,    85,    45,
     -62,   -62,   -62,   -62,   -62,   -62,    54,    56,    93,    -3,
      -5,    41,    72,    45,    45,    83,    86,   -62,   -62,    14,
     108,    -5,    -5,    -5,    -5,    -5,    97,    45,   -62,    76,
      74,   -62,   -62,    79,    80,    92,    -5,   -19,    78,   -62,
     -62,   -62,   -62,   -62,   -62,   -27,   -62,    48,   -62,    99,
      95,   103,    98,   -18,   -62,   -62,   105,   -62,   -62,   -18,
     106,    62,    -8,   -62,   107,   -62,   -62,   -62,    66,    82,
     109,    80,   110,   104,    57,    29,   -62,    94,    91,   -62,
      63,   -62,   -18,   -18,   -18,   -18,   115,   -62,    41,   -62,
      96,   -62,   -62,   -62,   -62,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   111,   112,    -6,    -4,   -62,   -62,   -19,   -62,
     117,   -62,   116,    36,    43,    50,   -62,   -62,   -62,   -62,
     -18,   -62,   118,    -5,   114,   -62,   -62,   -62,   119,   -62,
     -62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -62,   -62,    90,    21,   -62,   -62,    40,   102,    42,   -31,
     -62,    64,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,    16,   -62,    -2,   -62,    26,    81,   -61,   -58
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -59
static const yytype_int16 yytable[] =
{
      50,    51,    52,    53,    54,    86,    25,    26,    90,   -58,
      75,   -56,    21,   -57,    76,    64,    77,    27,    65,    66,
      66,     1,    67,    67,    68,    68,    69,    69,     3,    28,
      47,   114,   115,    29,    48,    22,   116,   117,    94,    95,
      94,    95,    94,    95,    41,    42,     4,    86,    86,    86,
     126,   127,   128,   129,     5,   -44,   108,   109,    56,   110,
      18,   111,   -43,   108,   109,    38,   110,    39,   111,   -42,
     108,   109,    86,   110,    19,   111,   -41,   108,   109,    36,
     110,    13,   111,    97,    14,    98,   105,    15,   106,    38,
     107,    39,    40,     6,     7,     8,    10,    11,    12,    99,
      20,   100,   136,   123,   124,   125,    92,    93,    43,    94,
      95,    44,    49,    55,    57,    59,    60,    63,    61,    74,
      79,    80,    81,    91,    82,    88,   101,   103,    96,   112,
     104,   118,   113,   131,   120,   135,   130,    40,   119,   133,
     137,    58,   121,   140,   132,   102,   134,     0,     0,     0,
      89
};

static const yytype_int16 yycheck[] =
{
      31,    32,    33,    34,    35,    63,    11,    12,    69,    17,
      37,    17,    15,    17,    41,    46,    43,    22,    37,    38,
      38,     3,    41,    41,    43,    43,    45,    45,    38,    34,
      16,    92,    93,    38,    20,    38,    94,    95,    46,    47,
      46,    47,    46,    47,    23,    24,     0,   105,   106,   107,
     108,   109,   110,   111,     5,    26,    27,    28,    37,    30,
       6,    32,    26,    27,    28,    17,    30,    19,    32,    26,
      27,    28,   130,    30,    18,    32,    26,    27,    28,    38,
      30,    36,    32,    17,    39,    19,    29,    42,    31,    17,
      33,    19,    20,     8,     9,    10,     6,     7,     8,    17,
       7,    19,   133,   105,   106,   107,    44,    45,    25,    46,
      47,    25,     4,    16,    38,    41,    37,    25,    38,    41,
      21,    26,    19,    17,    26,    20,    17,    17,    21,    35,
      26,    16,    41,    21,    38,    17,    25,    20,    98,    23,
      26,    39,   100,    24,   118,    81,   130,    -1,    -1,    -1,
      69
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    49,    38,     0,     5,     8,     9,    10,    50,
      50,    50,    50,    36,    39,    42,    51,    52,     6,    18,
       7,    15,    38,    55,    56,    11,    12,    22,    34,    38,
      57,    58,    60,    61,    65,    72,    38,    54,    17,    19,
      20,    51,    51,    25,    25,    66,    62,    16,    20,     4,
      57,    57,    57,    57,    57,    16,    51,    38,    55,    41,
      37,    38,    59,    25,    57,    37,    38,    41,    43,    45,
      73,    74,    75,    76,    41,    37,    41,    43,    53,    21,
      26,    19,    26,    69,    70,    71,    76,    63,    20,    74,
      75,    17,    44,    45,    46,    47,    21,    17,    19,    17,
      19,    17,    59,    17,    26,    29,    31,    33,    27,    28,
      30,    32,    35,    41,    75,    75,    76,    76,    16,    54,
      38,    56,    67,    71,    71,    71,    76,    76,    76,    76,
      25,    21,    73,    23,    69,    17,    57,    26,    68,    64,
      24
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
#line 57 "syntxq.y"
    { printf ("programme syntaxiquement juste\n"); YYACCEPT;;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 60 "syntxq.y"
    {Z=1;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 61 "syntxq.y"
    {Z1=1;;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 62 "syntxq.y"
    {Z2=1;;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 71 "syntxq.y"
    {strcpy (suavType,(yyvsp[(1) - (1)].str));e=2;;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 72 "syntxq.y"
    {strcpy(suavType,(yyvsp[(1) - (1)].str));e=1;;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 73 "syntxq.y"
    {strcpy(suavType,(yyvsp[(1) - (1)].str));e=3;;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 77 "syntxq.y"
    {e1=1;;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 78 "syntxq.y"
    {e1=2;;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 79 "syntxq.y"
    {e1=3;;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 82 "syntxq.y"
    {if(recherche1(&tab,(yyvsp[(1) - (4)].str))!=1) {inserer1(&tab,(yyvsp[(1) - (4)].str),"constant",e,1,"idf_cst");insererC(&QQ,(yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].num));}
                        else {printf("ERREUR SEMANTIQUE:double declaration de %s a la ligne %d\n",(yyvsp[(1) - (4)].str),nb_ligne);
						     }
                       if (e!=e1) {printf("ERREUR SEMANTIQUE:type incompatible dans la ligne %d\n",nb_ligne);}
	                   ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 87 "syntxq.y"
    {if(recherche1(&tab,(yyvsp[(1) - (5)].str))!=1) {inserer1(&tab,(yyvsp[(1) - (5)].str),"constant",e,1,"idf_cst");insererC(&QQ,(yyvsp[(1) - (5)].str),(yyvsp[(3) - (5)].num));}
                           else {printf("ERREUR SEMANTIQUE:double declaration de %s a la ligne %d\n",(yyvsp[(1) - (5)].str),nb_ligne);
						       }
                          if (e!=e1) {printf("ERREUR SEMANTIQUE:type incompatible dans la ligne %d\n",nb_ligne);}
	                       ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 95 "syntxq.y"
    {if (recherche1(&tab,(yyvsp[(1) - (2)].str))!=1){inserer1(&tab,(yyvsp[(1) - (2)].str),"simple",e,1,"idf");}
             else printf("ERREUR SEMANTIQUE: double déclation de %s, à la ligne %d et %d\n", (yyvsp[(1) - (2)].str), nb_ligne);;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 99 "syntxq.y"
    {if (recherche1(&tab,(yyvsp[(1) - (3)].str))!=1){ inserer1(&tab,(yyvsp[(1) - (3)].str),"simple",e,1,"idf"); }
                else printf("ERREUR SEMANTIQUE: double déclation de %s, à la ligne %d\n", (yyvsp[(1) - (3)].str), nb_ligne);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 105 "syntxq.y"
    {int i=atoi((yyvsp[(3) - (5)].str));if(recherche1(&tab,(yyvsp[(1) - (5)].str))!=1) {inserer1(&tab,(yyvsp[(1) - (5)].str),"tableau",e,i,"idf");} 
      else printf("ERREUR SEMANTIQUE: double déclation de %s, à la ligne %d\n", (yyvsp[(1) - (5)].str), nb_ligne);
	  if(atoi((yyvsp[(3) - (5)].str))<1) printf("ERREUR SYNATAXIQUE:la taille doit etre supereiur a 1 dans la ligne %d\n",nb_ligne);
	  char c[20] ;sprintf(c,"%d",i);char c1[20] ;sprintf(c1,"%d",1);
	  insere_qudr(&q,"BOUNDS",c1,c," ");insere_qudr(&q,"ADEC",(yyvsp[(1) - (5)].str)," "," "); 
	  if(Z1!=1) {printf("ERREUR SYNATXIQUE :MANQUE DE LA BIB_TAB DANS LA LIGNE %d\n",nb_ligne);}
               	  ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 114 "syntxq.y"
    {int i=atoi((yyvsp[(3) - (6)].str));if(recherche1(&tab,(yyvsp[(1) - (6)].str))!=1) {inserer1(&tab,(yyvsp[(1) - (6)].str),"tableau",e,i,"idf");} 
        else printf("ERREUR SEMANTIQUE: double déclation de %s, à la ligne %d\n", (yyvsp[(1) - (6)].str), nb_ligne);
		if(atoi((yyvsp[(3) - (6)].str))<1) printf("ERREUR SYNATAXIQUE:la taille doit etre supereiur a 1 dans la ligne %d\n",nb_ligne);
		char c[20] ;sprintf(c,"%d",i);char c1[20] ;sprintf(c1,"%d",1);
	    insere_qudr(&q,"BOUNDS",c1,c," "); insere_qudr(&q,"ADEC",(yyvsp[(1) - (6)].str)," "," ");
		if(Z1!=1) {printf("ERREUR SYNATXIQUE :MANQUE DE LA BIB_TAB DANS LA LIGNE %d\n",nb_ligne);}
		;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 145 "syntxq.y"
    {if(Z!=1) printf("ERREUR SEMANTIQUE :MANQUE DE LA BIB INOUT DANS LA LIGNE %d\n",nb_ligne);
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 149 "syntxq.y"
    {if(recherche1(&tab,(yyvsp[(1) - (1)].str))!=1) printf("ERREUR SEMANTIQUE IDF %s n est pas declare dans la ligne %d\n",(yyvsp[(1) - (1)].str),nb_ligne);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 152 "syntxq.y"
    {if(recherche1(&tab,(yyvsp[(1) - (3)].str))!=1) printf("ERREUR SEMANTIQUE IDF %s n est pas declare dans la ligne %d\n",(yyvsp[(1) - (3)].str),nb_ligne);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 155 "syntxq.y"
    {if(Z!=1) printf("ERREUR SEMANITUQE :MANQUE DE LA BIB INOUT DANS LA LIGNE %d\n",nb_ligne);
             ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 160 "syntxq.y"
    {suav_debut=getTailleq();insere_qudr(&q,"BR","","","");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 161 "syntxq.y"
    {suav_br=getTailleq();ajour_quad(&q,suav_debut,2,"");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 162 "syntxq.y"
    { suav_fin=getTailleq();sprintf(tmp,"%d",suav_fin);ajour_quad(&q,suav_debut,1,tmp);
sprintf(tmp,"%d",suav_debut+1);insere_qudr(&q,"BNZ",tmp,"","");
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 175 "syntxq.y"
    {suav_debut=getTailleq();;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 176 "syntxq.y"
    {sauv_bz=getTailleq();sprintf(tmp,"%d",suav_debut);insere_qudr(&q,"BZ","",tmp,"");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 177 "syntxq.y"
    {sprintf(tmp,"%d",suav_debut);insere_qudr(&q,"BR",tmp,"",""); 
suav_fin=getTailleq();sprintf(tmp1,"%d",suav_fin);ajour_quad(&q,sauv_bz,1,tmp1);sauv_bz=getTailleq();;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 189 "syntxq.y"
    {char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; sprintf((yyval.str),"c%d",temporaryGenerated);
             insere_qudr(&q, "=",src1,(yyvsp[(3) - (3)].str),(yyval.str));	 ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 191 "syntxq.y"
    {char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; sprintf((yyval.str),"c%d",temporaryGenerated);
             insere_qudr(&q, "<",src1,(yyvsp[(3) - (3)].str),(yyval.str));	 ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 193 "syntxq.y"
    {char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; sprintf((yyval.str),"c%d",temporaryGenerated);
             insere_qudr(&q,">",src1,(yyvsp[(3) - (3)].str),(yyval.str));	 ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 195 "syntxq.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 197 "syntxq.y"
    {char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; sprintf((yyval.str),"c%d",temporaryGenerated);
             insere_qudr(&q, "=",src1,(yyvsp[(3) - (3)].str),(yyval.str));	 ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 199 "syntxq.y"
    {char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; sprintf((yyval.str),"c%d",temporaryGenerated);
             insere_qudr(&q, "<",src1,(yyvsp[(3) - (3)].str),(yyval.str));	 ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 201 "syntxq.y"
    {char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; sprintf((yyval.str),"c%d",temporaryGenerated);
             insere_qudr(&q, ">",src1,(yyvsp[(3) - (3)].str),(yyval.str));	 ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 203 "syntxq.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 206 "syntxq.y"
    {char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; sprintf((yyval.str),"c%d",temporaryGenerated);
             insere_qudr(&q, "!=",src1,(yyvsp[(3) - (3)].str),(yyval.str));	 ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 208 "syntxq.y"
    {char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; sprintf((yyval.str),"c%d",temporaryGenerated);
             insere_qudr(&q, ">=",src1,(yyvsp[(3) - (3)].str),(yyval.str));	 ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 210 "syntxq.y"
    {char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; sprintf((yyval.str),"c%d",temporaryGenerated);
             insere_qudr(&q, "<=",src1,(yyvsp[(3) - (3)].str),(yyval.str));	 ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 212 "syntxq.y"
    {char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; sprintf((yyval.str),"c%d",temporaryGenerated);
             insere_qudr(&q, "==",src1,(yyvsp[(3) - (3)].str),(yyval.str));	 ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 214 "syntxq.y"
    {;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 222 "syntxq.y"
    { if(Z2!=1) {printf("ERREUR SEMANTIQUE MANQUE DE LA BIB ARITHME DANS LA LIGNE %d\n",nb_ligne);}
        if((rechercheC(&QQ,(yyvsp[(1) - (4)].str))==1)&&((getVAL(&QQ,(yyvsp[(1) - (4)].str)))!=(yyvsp[(3) - (4)].num))) {printf("ERREUR SEMANTIQUE:on peut pas change la valeur d un constant dans la ligne %d\n",nb_ligne);} 
        if(recherche1(&tab,(yyvsp[(1) - (4)].str))!=1) {printf("ERREUR SYNTAXIQUE:L IDF %s N EST PAS ENCORE DECLARE DANS LA LIGNE %d\n",(yyvsp[(1) - (4)].str),nb_ligne);}
        if(compare1(getType(&tab,(yyvsp[(1) - (4)].str)))==-1) {printf("ERREUR SEMANTIQUE:type incompatible dans la ligne %d\n",nb_ligne);}
		
		insere_qudr(&q,":=",(yyvsp[(3) - (4)].str),"",(yyvsp[(1) - (4)].str));ajour();
	                              ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 232 "syntxq.y"
    {if(Z2!=1) {printf("ERREUR SEMANTIQUE MANQUE DE LA BIB ARITHME DANS LA LIGNE %d\n",nb_ligne);} 
        if((rechercheC(&QQ,(yyvsp[(1) - (7)].str))==1)&&((getVAL(&QQ,(yyvsp[(1) - (7)].str)))!=(yyvsp[(3) - (7)].num))) {printf("ERREUR SEMANTIQUE;on ne peut pas change la valeur d un constant dans la ligne %d \n",nb_ligne);} 
        if(recherche1(&tab,(yyvsp[(1) - (7)].str))!=1) {printf("ERREUR SYNTAXIQUE:L IDF %s N EST PAS ENCORE DECLARE DANS LA LIGNE %d\n",(yyvsp[(1) - (7)].str),nb_ligne);}
        if(getTaille(&tab,(yyvsp[(1) - (7)].str))<atoi((yyvsp[(3) - (7)].str))) {printf("ERREUR DEPASSEMENT DE LA TAILLE AUTROISE DANS LA LIGNE %d\n",nb_ligne);}
	    if(compare1(getType(&tab,(yyvsp[(1) - (7)].str)))==-1) {printf("ERREUR SEMANTIQUE:type incompatible dans la ligne %d\n",nb_ligne);}
		char c3[20]=" ";strcat(c3,(yyvsp[(1) - (7)].str));strcat(c3,"[");char c2[20]=" ";sprintf(c2,"%d",atoi((yyvsp[(3) - (7)].str)));strcat(c3,c2);strcat(c3,"]");
         if(j!=3){insere_qudr(&q,":=",(yyvsp[(6) - (7)].str),"",c3);ajour();}
		 if(j==3){insere_qudr(&q,":=",(yyvsp[(6) - (7)].str),"",c3);ajour();}
                                    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 249 "syntxq.y"
    { ins(4);  
        char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; 
        sprintf((yyval.str),"t%d",temporaryGenerated);
        insere_qudr(&q,"+",src1,(yyvsp[(3) - (3)].str),(yyval.str));
		       ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 256 "syntxq.y"
    {ins(5);
	    char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; 
        sprintf((yyval.str),"t%d",temporaryGenerated);
        insere_qudr(&q,"-",src1,(yyvsp[(3) - (3)].str),(yyval.str)); 	
		     ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 263 "syntxq.y"
    {;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 264 "syntxq.y"
    {j=3;ins(3);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 268 "syntxq.y"
    {  ins(4);
 
	int w=getType(&tab,(yyvsp[(1) - (3)].str));int w1=getType(&tab,(yyvsp[(1) - (3)].str));
    char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; 
    sprintf((yyval.str),"t%d",temporaryGenerated);
    insere_qudr(&q,"+",src1,(yyvsp[(3) - (3)].str),(yyval.str));
		  
		  ;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 276 "syntxq.y"
    {ins(5);
    char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; 
    sprintf((yyval.str),"t%d",temporaryGenerated);
    insere_qudr(&q,"-",src1,(yyvsp[(3) - (3)].str),(yyval.str)); 
       	;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 281 "syntxq.y"
    { ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 284 "syntxq.y"
    {   
 ins(6);
    char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; 
    sprintf((yyval.str),"t%d",temporaryGenerated);
	insere_qudr(&q,"*",src1,(yyvsp[(3) - (3)].str),(yyval.str));  
            ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 292 "syntxq.y"
    {ins(7);
    if (strcmp((yyvsp[(3) - (3)].str),"0")==0) {printf("ERREUR SYNTAXIQUE :DIVISION PAR ZERO DANS LA LIGNE %d\n",nb_ligne);}
    else {char* src1= strdup((yyvsp[(1) - (3)].str)); temporaryGenerated++; 
    sprintf((yyval.str),"t%d",temporaryGenerated);
    insere_qudr(&q,"/",src1,(yyvsp[(3) - (3)].str),(yyval.str)); 
	     }
		 ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 300 "syntxq.y"
    {  ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 303 "syntxq.y"
    {e2=atoi((yyvsp[(1) - (1)].str));j=1;ins(1);;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 304 "syntxq.y"
    {e21=atof((yyvsp[(1) - (1)].num));j=2; ins(2);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 306 "syntxq.y"
    {sommet=empiler(sommet,atoi((yyvsp[(1) - (1)].str)));afficherPile(&sommet);
  if(recherche1(&tab,(yyvsp[(1) - (1)].str))!=1) {printf("ERREUR SEMANTIQUE :idf %s n est pas declare encore dans la ligne %d\n",(yyvsp[(1) - (1)].str),nb_ligne);}
  ins(getVal1(&tab,(yyvsp[(1) - (1)].str)));e2=atoi((yyvsp[(1) - (1)].str));;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 309 "syntxq.y"
    {if(getTaille(&tab,(yyvsp[(1) - (4)].str)) < atoi((yyvsp[(3) - (4)].str)) )
	     {printf("ERREUR SEMANTIQUE:DEPASSEMENT DE LA TAILLE D UN TABLEAU DANS LA LIGNE %d\n",nb_ligne);};
         if(recherche1(&tab,(yyvsp[(1) - (4)].str))!=1) {printf("ERREUR SEMANTIQUE :idf %s n est pas declare encore dans la ligne %d\n",(yyvsp[(1) - (4)].str),nb_ligne);}
	     ins(getType(&tab,(yyvsp[(1) - (4)].str)));
         char c3[20]=" ";strcat(c3,(yyvsp[(1) - (4)].str));strcat(c3,"[");char c2[20]=" ";sprintf(c2,"%d",atoi((yyvsp[(3) - (4)].str)));strcat(c3,c2);strcat(c3,"]");
	      strcpy((yyvsp[(1) - (4)].str),c3);	  ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 316 "syntxq.y"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 1990 "syntxq.tab.c"
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
#line 328 "syntxq.y"

int compare1(int n){
int s=0;
while(s<=100){
if((n==1)&&((Tab[s]==2)||Tab[s]==3)) {return -1;}
if((n==2)&&(Tab[s]==3)) {return -1;}
if((n==3)&&((Tab[s]==2)||(Tab[s]==1) ||(Tab[s]==5) || (Tab[s]==6) || (Tab[s]==7))) {return -1;}
if((n==1)&&((Tab[s]==1)&&(Tab[s+1]==1)&&(Tab[s+2]==7))){return -1;}
s++;
}
return 0;
}
void ajour(){
int s=0;
while(s<=100){
Tab[s]=0;
s++;
}
} 
 
 
void ins(int n){

 
Tab[i1]=n;
i1++;

}
 
 int yyerror (char *msg)
{
   printf("ERREUR SYNTAXIQUE DANS LA LIGNE %d \n",nb_ligne);
   return 1;
}
 
int main(int argc, char *argv[])
{yyin=fopen("exp.txt","r");
  if(! yyparse())
  
  printf("  Aucune Erreur Compilation Reussie\n");
   
 	else
 	printf("\t Attention\t Erreur Syntaxique");
 	
 	fclose(yyin);
 
 
  
//   afficher1(&tab);
  // afficher_qdr(&q);
  return 0;
}
  
 

 


 

yywrap()
{}

 


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
#line 1 "main.y"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
extern yylineno;

char variable[1000][1000];
int store[1000];
char store_str[1000][1000];
float store_float[1000];
int type_of_id[1000];

int last_point = 1, f = 1;
int casedefault = 0, casevar = 0;

/* Function parm section */
char param[100][100];
int cnt_func = 1;

int func_here(char *s)
{
    int i;
    for (i = 1; i < cnt_func; i++)
    {
        if (strcmp(param[i], s) == 0)
            return 1;
    }
    return 0;
}

int assign_func(char *s)
{
    strcpy(param[cnt_func], s);
    cnt_func++;
    return 1;
}

int isdeclared(char *s)
{
    int i;
    for (i = 1; i < last_point; i++)
    {
        if (strcmp(variable[i], s) == 0)
            return 1;
    }
    return 0;
}

int assign(char *s)
{
    if (isdeclared(s) == 1)
        return 0;
    strcpy(variable[last_point], s);
    store[last_point] = 0;
    last_point++;
    return 1;
}

int setval(char *s, int val)
{
    if (isdeclared(s) == 0)
        return 0;
    int ok = 0, i;
    for (i = 1; i < last_point; i++)
    {
        if (strcmp(variable[i], s) == 0)
        {
            ok = i;
            break;
        }
    }
    store[ok] = val;
    return 1;
}

int getval(char *s)
{
    int pos = -1;
    int i;
    for (i = 1; i < last_point; i++)
    {
        if (strcmp(variable[i], s) == 0)
        {
            pos = i;
            break;
        }
    }
    return pos;
}


/* Line 189 of yacc.c  */
#line 166 "main.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
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
     NUMBER = 258,
     VARIABLE = 259,
     INT = 260,
     FLOAT = 261,
     CHARACTER = 262,
     IF = 263,
     EF = 264,
     FOR = 265,
     PF = 266,
     ENDED = 267,
     COLON = 268,
     SWITCH = 269,
     DEFAULT = 270,
     VALUE = 271,
     ASSIGN = 272,
     INC = 273,
     DEC = 274,
     LT = 275,
     GT = 276,
     EQ = 277,
     BSIEQ = 278,
     KOMEQ = 279,
     START = 280,
     UP = 281,
     DOWN = 282,
     CASE = 283,
     WHILE = 284,
     STRING = 285,
     DOUBLE = 286,
     DEF = 287,
     HEADER = 288,
     IMPORT = 289,
     SIN = 290,
     COS = 291,
     TAN = 292,
     LN = 293,
     LOG10 = 294,
     ODDEVEN = 295,
     FACT = 296,
     IFX = 297,
     ELSE = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 94 "main.y"

    char *ch;
    char c;
    int dim;
    int me;
    double floating;



/* Line 214 of yacc.c  */
#line 255 "main.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 267 "main.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   515

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNRULES -- Number of states.  */
#define YYNSTATES  151

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    57,     2,     2,
      51,    52,    46,    44,    53,    45,     2,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,    48,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    10,    19,    23,    25,    26,    28,
      31,    33,    37,    39,    41,    43,    47,    49,    52,    54,
      56,    59,    65,    70,    78,    90,   108,   126,   138,   146,
     148,   149,   156,   163,   165,   167,   171,   175,   179,   183,
     187,   191,   195,   199,   203,   207,   211,   214,   217,   220,
     223,   226,   229
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    25,    49,    62,    50,    -1,    -1,
      32,     4,    51,    61,    52,    49,    62,    50,    -1,    61,
      53,     4,    -1,     4,    -1,    -1,     3,    -1,    62,    66,
      -1,    63,    -1,    64,    65,    12,    -1,     5,    -1,     6,
      -1,    30,    -1,    65,    53,     4,    -1,     4,    -1,    66,
      67,    -1,    67,    -1,    12,    -1,    70,    12,    -1,    16,
      51,     4,    52,    12,    -1,     4,    54,    70,    12,    -1,
       8,    55,    70,    56,    49,    66,    50,    -1,     8,    55,
      70,    56,    49,    66,    50,     9,    49,    66,    50,    -1,
      10,    51,     4,    54,     3,    53,     4,    24,     3,    53,
       4,    26,     3,    52,    49,    66,    50,    -1,    10,    51,
       4,    54,     3,    53,     4,    23,     3,    53,     4,    27,
       3,    52,    49,    66,    50,    -1,    29,    51,     4,    20,
       3,    53,     3,    52,    49,    66,    50,    -1,    14,    55,
      68,    56,    49,    69,    50,    -1,    70,    -1,    -1,    69,
      70,    13,    49,    66,    50,    -1,    69,    15,    13,    49,
      66,    50,    -1,     3,    -1,     4,    -1,    70,    44,    70,
      -1,    70,    45,    70,    -1,    70,    46,    70,    -1,    70,
      47,    70,    -1,    70,    48,    70,    -1,    70,    57,    70,
      -1,    51,    70,    52,    -1,    70,    20,    70,    -1,    70,
      21,    70,    -1,    70,    24,    70,    -1,    70,    23,    70,
      -1,    35,    70,    -1,    36,    70,    -1,    37,    70,    -1,
      39,    70,    -1,    38,    70,    -1,    40,    70,    -1,    41,
      70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   120,   123,   129,   136,   145,   146,   148,
     150,   154,   158,   160,   162,   166,   173,   183,   185,   189,
     191,   197,   210,   223,   228,   241,   251,   261,   270,   274,
     281,   283,   292,   303,   305,   316,   321,   326,   332,   346,
     349,   352,   354,   357,   360,   363,   365,   367,   369,   371,
     373,   375,   381
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VARIABLE", "INT", "FLOAT",
  "CHARACTER", "IF", "EF", "FOR", "PF", "ENDED", "COLON", "SWITCH",
  "DEFAULT", "VALUE", "ASSIGN", "INC", "DEC", "LT", "GT", "EQ", "BSIEQ",
  "KOMEQ", "START", "UP", "DOWN", "CASE", "WHILE", "STRING", "DOUBLE",
  "DEF", "HEADER", "IMPORT", "SIN", "COS", "TAN", "LN", "LOG10", "ODDEVEN",
  "FACT", "IFX", "ELSE", "'+'", "'-'", "'*'", "'/'", "'^'", "'{'", "'}'",
  "'('", "')'", "','", "'='", "'['", "']'", "'%'", "$accept", "program",
  "func", "param", "lines", "declare", "type", "id", "codes", "after",
  "Exp_case", "code", "expression", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    43,    45,    42,    47,    94,   123,
     125,    40,    41,    44,    61,    91,    93,    37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    60,    61,    61,    62,    62,    62,
      62,    63,    64,    64,    64,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    68,
      69,    69,    69,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     8,     3,     1,     0,     1,     2,
       1,     3,     1,     1,     1,     3,     1,     2,     1,     1,
       2,     5,     4,     7,    11,    17,    17,    11,     7,     1,
       0,     6,     6,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     1,     0,     0,     7,     6,
       0,     8,    12,    13,    14,     0,    10,     0,     0,     0,
      33,    34,     0,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     9,    18,     0,
      16,     0,     7,     5,     0,     0,     0,     0,     0,     0,
      34,    46,    47,    48,    50,    49,    51,    52,     0,    17,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    41,    42,    43,    45,    44,    35,    36,    37,    38,
      39,    40,    15,     4,    22,     0,     0,     0,     0,     0,
       0,     0,    30,    21,     0,     0,     0,     0,     0,    23,
       0,     0,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,     0,    32,    31,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      25
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    10,    15,    16,    17,    41,    37,    38,
      77,   107,    39
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -74
static const yytype_int16 yypact[] =
{
     -24,    12,    23,     0,   -25,   -74,   -21,    25,    16,   -74,
     -42,   -74,   -74,   -74,   -74,    46,   -74,    26,   -18,    28,
     -74,   -10,   -22,    -6,   -74,    -8,     6,     8,   374,   374,
     374,   374,   374,   374,   374,   -74,   374,   352,   -74,   384,
     -74,     2,    16,   -74,   374,   374,    57,   374,    65,    66,
     -74,   458,   458,   458,   458,   458,   458,   458,   399,   -74,
     -74,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   -74,    67,   104,   414,   443,    20,    33,   458,    39,
      72,   -74,    19,    19,    19,    19,    31,    31,   -33,   -33,
      41,   458,   -74,   -74,   -74,    50,    97,    52,    90,   100,
     352,    51,   -74,   -74,    53,   122,   101,   335,   106,   108,
     -11,   102,   -74,   429,    61,    70,   118,   119,    74,    75,
      78,   352,    76,    82,   352,   352,   352,   166,   124,   127,
     184,   228,   246,   -74,   110,   120,   -74,   -74,   -74,   144,
     145,    98,   112,   103,   107,   352,   352,   290,   308,   -74,
     -74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -74,   -74,   -74,   -74,   111,   -74,   -74,   -74,   -73,   -37,
     -74,   -74,   -27
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      59,    51,    52,    53,    54,    55,    56,    57,     1,    58,
      18,    19,   116,   117,    71,    69,     4,    74,    75,    11,
      78,    12,    13,     5,    70,     6,     7,   105,     8,     9,
      40,    42,    43,    45,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    44,    46,    14,    47,   127,    20,
      21,   130,   131,   132,    22,    72,    23,    48,    24,    49,
      25,    76,    26,    65,    66,    67,    68,    69,    59,    79,
      80,    92,   147,   148,    96,    27,    70,    67,    68,    69,
     113,    28,    29,    30,    31,    32,    33,    34,    70,    97,
      59,    98,    99,    59,    59,    59,    35,    36,    70,   100,
     101,   102,   103,   104,   106,   110,   108,    20,    21,   114,
      59,    59,    22,   120,    23,   118,    24,   115,    25,   121,
      26,   122,   123,   124,   125,    20,    21,   126,   134,   128,
      22,   135,    23,    27,    24,   129,    25,   139,    26,    28,
      29,    30,    31,    32,    33,    34,   140,   141,   142,     0,
     143,    27,   145,    73,    93,    36,   146,    28,    29,    30,
      31,    32,    33,    34,   144,     0,     0,     0,     0,    20,
      21,     0,   109,    36,    22,     0,    23,     0,    24,     0,
      25,     0,    26,     0,     0,     0,     0,    20,    21,     0,
       0,     0,    22,     0,    23,    27,    24,     0,    25,     0,
      26,    28,    29,    30,    31,    32,    33,    34,     0,     0,
       0,     0,     0,    27,     0,     0,   133,    36,     0,    28,
      29,    30,    31,    32,    33,    34,     0,     0,     0,     0,
       0,    20,    21,     0,   136,    36,    22,     0,    23,     0,
      24,     0,    25,     0,    26,     0,     0,     0,     0,    20,
      21,     0,     0,     0,    22,     0,    23,    27,    24,     0,
      25,     0,    26,    28,    29,    30,    31,    32,    33,    34,
       0,     0,     0,     0,     0,    27,     0,     0,   137,    36,
       0,    28,    29,    30,    31,    32,    33,    34,     0,     0,
       0,     0,     0,    20,    21,     0,   138,    36,    22,     0,
      23,     0,    24,     0,    25,     0,    26,     0,     0,     0,
       0,    20,    21,     0,     0,     0,    22,     0,    23,    27,
      24,     0,    25,     0,    26,    28,    29,    30,    31,    32,
      33,    34,     0,     0,     0,     0,     0,    27,    20,    50,
     149,    36,     0,    28,    29,    30,    31,    32,    33,    34,
     111,     0,     0,     0,     0,    20,    21,     0,   150,    36,
      22,     0,    23,     0,    24,     0,    25,     0,    26,     0,
      28,    29,    30,    31,    32,    33,    34,    20,    50,     0,
       0,    27,     0,     0,     0,   112,    36,    28,    29,    30,
      31,    32,    33,    34,     0,     0,    60,     0,     0,     0,
       0,     0,     0,    36,    61,    62,     0,    63,    64,    28,
      29,    30,    31,    32,    33,    34,     0,     0,     0,    61,
      62,     0,    63,    64,     0,    36,    94,     0,    65,    66,
      67,    68,    69,     0,    61,    62,     0,    63,    64,     0,
       0,    70,   119,    65,    66,    67,    68,    69,     0,    61,
      62,    81,    63,    64,     0,     0,    70,     0,    65,    66,
      67,    68,    69,    61,    62,     0,    63,    64,     0,     0,
       0,    70,     0,    65,    66,    67,    68,    69,    61,    62,
       0,    63,    64,     0,     0,     0,    70,    65,    66,    67,
      68,    69,     0,     0,     0,     0,     0,     0,     0,    95,
      70,     0,    65,    66,    67,    68,    69,     0,     0,     0,
       0,     0,     0,     0,     0,    70
};

static const yytype_int16 yycheck[] =
{
      37,    28,    29,    30,    31,    32,    33,    34,    32,    36,
      52,    53,    23,    24,    12,    48,     4,    44,    45,     3,
      47,     5,     6,     0,    57,    25,    51,   100,    49,     4,
       4,    49,     4,    55,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    54,    51,    30,    55,   121,     3,
       4,   124,   125,   126,     8,    53,    10,    51,    12,    51,
      14,     4,    16,    44,    45,    46,    47,    48,   105,     4,
       4,     4,   145,   146,    54,    29,    57,    46,    47,    48,
     107,    35,    36,    37,    38,    39,    40,    41,    57,    56,
     127,    52,    20,   130,   131,   132,    50,    51,    57,    49,
       3,    49,    12,     3,    53,     4,    53,     3,     4,     3,
     147,   148,     8,    52,    10,    13,    12,     9,    14,    49,
      16,     3,     3,    49,    49,     3,     4,    49,     4,    53,
       8,     4,    10,    29,    12,    53,    14,    27,    16,    35,
      36,    37,    38,    39,    40,    41,    26,     3,     3,    -1,
      52,    29,    49,    42,    50,    51,    49,    35,    36,    37,
      38,    39,    40,    41,    52,    -1,    -1,    -1,    -1,     3,
       4,    -1,    50,    51,     8,    -1,    10,    -1,    12,    -1,
      14,    -1,    16,    -1,    -1,    -1,    -1,     3,     4,    -1,
      -1,    -1,     8,    -1,    10,    29,    12,    -1,    14,    -1,
      16,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    50,    51,    -1,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    50,    51,     8,    -1,    10,    -1,
      12,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,     8,    -1,    10,    29,    12,    -1,
      14,    -1,    16,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    50,    51,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    50,    51,     8,    -1,
      10,    -1,    12,    -1,    14,    -1,    16,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,     8,    -1,    10,    29,
      12,    -1,    14,    -1,    16,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    29,     3,     4,
      50,    51,    -1,    35,    36,    37,    38,    39,    40,    41,
      15,    -1,    -1,    -1,    -1,     3,     4,    -1,    50,    51,
       8,    -1,    10,    -1,    12,    -1,    14,    -1,    16,    -1,
      35,    36,    37,    38,    39,    40,    41,     3,     4,    -1,
      -1,    29,    -1,    -1,    -1,    50,    51,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    20,    21,    -1,    23,    24,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    20,
      21,    -1,    23,    24,    -1,    51,    12,    -1,    44,    45,
      46,    47,    48,    -1,    20,    21,    -1,    23,    24,    -1,
      -1,    57,    13,    44,    45,    46,    47,    48,    -1,    20,
      21,    52,    23,    24,    -1,    -1,    57,    -1,    44,    45,
      46,    47,    48,    20,    21,    -1,    23,    24,    -1,    -1,
      -1,    57,    -1,    44,    45,    46,    47,    48,    20,    21,
      -1,    23,    24,    -1,    -1,    -1,    57,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    -1,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    59,    60,     4,     0,    25,    51,    49,     4,
      61,     3,     5,     6,    30,    62,    63,    64,    52,    53,
       3,     4,     8,    10,    12,    14,    16,    29,    35,    36,
      37,    38,    39,    40,    41,    50,    51,    66,    67,    70,
       4,    65,    49,     4,    54,    55,    51,    55,    51,    51,
       4,    70,    70,    70,    70,    70,    70,    70,    70,    67,
      12,    20,    21,    23,    24,    44,    45,    46,    47,    48,
      57,    12,    53,    62,    70,    70,     4,    68,    70,     4,
       4,    52,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,     4,    50,    12,    56,    54,    56,    52,    20,
      49,     3,    49,    12,     3,    66,    53,    69,    53,    50,
       4,    15,    50,    70,     3,     9,    23,    24,    13,    13,
      52,    49,     3,     3,    49,    49,    49,    66,    53,    53,
      66,    66,    66,    50,     4,     4,    50,    50,    50,    27,
      26,     3,     3,    52,    52,    49,    49,    66,    66,    50,
      50
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
#line 119 "main.y"
    { printf("\nProgram successfully ended\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 124 "main.y"
    {
    printf("\nFUNC Declared!\n");
;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 130 "main.y"
    {
    if (func_here((yyvsp[(3) - (3)].ch)) == 1)
        printf("\nparam already exists!");
    else
        assign_func((yyvsp[(3) - (3)].ch));
;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 137 "main.y"
    {
    if (func_here((yyvsp[(1) - (1)].ch)) == 1)
        printf("\nparam already exists!");
    else
        assign_func((yyvsp[(1) - (1)].ch));
;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 154 "main.y"
    { printf("\nValid declaration!\n"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 167 "main.y"
    {
    if (isdeclared((yyvsp[(3) - (3)].ch)) == 1)
        printf("\nDouble Declaration!");
    else
        assign((yyvsp[(3) - (3)].ch));
;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 174 "main.y"
    {
    if (isdeclared((yyvsp[(1) - (1)].ch)) == 1)
        printf("\nDouble Declaration! \n");
    else
        assign((yyvsp[(1) - (1)].ch));
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 192 "main.y"
    {
    (yyval.dim) = (yyvsp[(1) - (2)].me);
    /*   printf("\nValue of expression: %d at line %d\n",$1,yylineno); */
;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 198 "main.y"
    {
    if (isdeclared((yyvsp[(3) - (5)].ch)) == 0)
    {
        printf("Can't print, Value is not declared.\n");
    }
    else
    {
        printf("\nValue of the variable %s:  %d\t\n", (yyvsp[(3) - (5)].ch), store[getval((yyvsp[(3) - (5)].ch))]);
    }

;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 211 "main.y"
    {
    if (setval((yyvsp[(1) - (4)].ch), (yyvsp[(3) - (4)].me)) == 0)
    {
        (yyval.dim) = 0;
        printf("\nNot declared\n");
    }
    else
    {
        (yyval.dim) = (yyvsp[(3) - (4)].me);
    }
;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 224 "main.y"
    {
    printf("\nCondition is true in IF\n");
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 229 "main.y"
    {
    f = f + 1;
    int p = 0;
    if ((yyvsp[(3) - (11)].me))
    {
        printf("\nCondition is true in IF\n");
        p = 1;
    }
    if (p == 0)
        printf("\nCondition is false in IF\n");
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 242 "main.y"
    {
    int i;
    for (i = (yyvsp[(5) - (17)].dim); i <= (yyvsp[(9) - (17)].dim); i += (yyvsp[(13) - (17)].dim))
    {
        printf("Expression in for loop increasing %d\n", i);
    }
    printf("\n");
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 252 "main.y"
    {
    int i;
    for (i = (yyvsp[(5) - (17)].dim); i >= (yyvsp[(9) - (17)].dim); i -= (yyvsp[(13) - (17)].dim))
    {
        printf("Expression in for loop Decreasing %d\n", i);
    }
    printf("\n");
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 262 "main.y"
    {
    int a = store[getval((yyvsp[(3) - (11)].ch))], inc = (yyvsp[(7) - (11)].dim);
    while ((a += inc) < (yyvsp[(5) - (11)].dim))
    {
        printf("While loop is executing value of variable %s : %d\n", (yyvsp[(3) - (11)].ch), a);
    }
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 270 "main.y"
    { ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 275 "main.y"
    {
    casedefault = 0;
    casevar = (yyvsp[(1) - (1)].me);
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 284 "main.y"
    {
    if ((yyvsp[(2) - (6)].me) == casevar)
    {
        printf("\nExecuted %d\n", (yyvsp[(2) - (6)].me));
        casedefault = 1;
    }
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 293 "main.y"
    {
    if (casedefault == 0)
    {
        casedefault = 1;
        printf("\nDefault Block executed\n");
    }
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 303 "main.y"
    { (yyval.me) = (yyvsp[(1) - (1)].dim); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 306 "main.y"
    {
    if (isdeclared((yyvsp[(1) - (1)].ch)) == 0)
    {
        (yyval.me) = 0;
        printf("\nNot declaredd!\n");
    }
    else
        (yyval.me) = store[getval((yyvsp[(1) - (1)].ch))];
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 317 "main.y"
    {
    (yyval.me) = (yyvsp[(1) - (3)].me) + (yyvsp[(3) - (3)].me); /*printf("\nAddition value %d\n",$$);*/
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 322 "main.y"
    {
    (yyval.me) = (yyvsp[(1) - (3)].me) - (yyvsp[(3) - (3)].me); /*printf("\nSubtraction value %d\n",$$);*/
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 327 "main.y"
    {
    (yyval.me) = (yyvsp[(1) - (3)].me) * (yyvsp[(3) - (3)].me);
    /*printf("\nMultiplication value %d\n",$$);*/
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 333 "main.y"
    {
    if ((yyvsp[(3) - (3)].me))
    {
        (yyval.me) = (yyvsp[(1) - (3)].me) / (yyvsp[(3) - (3)].me);
        /*printf("\nDivision value %d\n",$$);*/
    }
    else
    {
        (yyval.me) = 0;
        printf("\nDivision by zero\t");
    }
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 347 "main.y"
    { (yyval.me) = pow((yyvsp[(1) - (3)].me), (yyvsp[(3) - (3)].me)); /*printf("\nPower value %d\n",$$);*/ ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 350 "main.y"
    { (yyval.me) = (yyvsp[(1) - (3)].me) % (yyvsp[(3) - (3)].me); /*printf("\nRemainder value %d\n",$$);*/ ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 353 "main.y"
    { (yyval.me) = (yyvsp[(2) - (3)].me); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 355 "main.y"
    { (yyval.me) = (yyvsp[(1) - (3)].me) < (yyvsp[(3) - (3)].me); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 358 "main.y"
    { (yyval.me) = (yyvsp[(1) - (3)].me) > (yyvsp[(3) - (3)].me); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 361 "main.y"
    { (yyval.me) = (yyvsp[(1) - (3)].me) <= (yyvsp[(3) - (3)].me); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 364 "main.y"
    { (yyval.me) = (yyvsp[(1) - (3)].me) >= (yyvsp[(3) - (3)].me); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 365 "main.y"
    { printf("Value of Sin(%d) is %lf\n", (yyvsp[(2) - (2)].me), sin((yyvsp[(2) - (2)].me) * 3.1416 / 180)); (yyval.me) = sin((yyvsp[(2) - (2)].me) * 3.1416 / 180); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 367 "main.y"
    { printf("Value of Cos(%d) is %lf\n", (yyvsp[(2) - (2)].me), cos((yyvsp[(2) - (2)].me) * 3.1416 / 180)); (yyval.me) = cos((yyvsp[(2) - (2)].me) * 3.1416 / 180); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 369 "main.y"
    { printf("Value of Tan(%d) is %lf\n", (yyvsp[(2) - (2)].me), tan((yyvsp[(2) - (2)].me) * 3.1416 / 180)); (yyval.me) = tan((yyvsp[(2) - (2)].me) * 3.1416 / 180); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 371 "main.y"
    { printf("Value of Log10(%d) is %lf\n", (yyvsp[(2) - (2)].me), (log((yyvsp[(2) - (2)].me) * 1.0) / log(10.0))); (yyval.me) = (log((yyvsp[(2) - (2)].me) * 1.0) / log(10.0)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 373 "main.y"
    { printf("Value of ln(%d) is %lf\n", (yyvsp[(2) - (2)].me), (log((yyvsp[(2) - (2)].me)))); (yyval.me) = (log((yyvsp[(2) - (2)].me))); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 375 "main.y"
    { if ((yyvsp[(2) - (2)].me) % 2 == 0)
                        printf("value provided for OddEven function is %d which is even\n", (yyvsp[(2) - (2)].me));
                      else
                        printf("value provided for OddEven function is %d which is odd\n", (yyvsp[(2) - (2)].me));
                    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 381 "main.y"
    { int ans = 1; for (int i = 1; i <= (yyvsp[(2) - (2)].me); i++)
                        {
                            ans *= i;
                        }
                        printf("Factorial of %d is %d", (yyvsp[(2) - (2)].me), ans);
                    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2052 "main.tab.c"
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
#line 390 "main.y"


int yyerror(char *s)
{
    printf("%s\n %d", s, yylineno);
}

int main()
{
    yyparse();
    return 0;
}


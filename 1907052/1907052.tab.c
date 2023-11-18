
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
#line 1 "1907052.y"

#include<stdio.h>
#include <math.h>
#include<stdlib.h>
#include<string.h>
int  yyerror(char *s);
int yylex();

	char variable[1000][1000];
    	int store[1000];
	char store_str[1000][1000];  
	float store_float[1000]; 
	int type_of_id[1000];

	int last_point = 1,f=1;
	int casedefault=0,casevar=0;
   
	char param[100][100];
	int cnt_func = 1;
	
int func_here(char *s)
{
 	
        for(int i=1; i<cnt_func; i++){
            if(strcmp(param[i],s) == 0)return 1;
        }return 0;
}

int assign_func(char *s)
{
        strcpy(param[cnt_func],s); cnt_func++;return 1;
}

int isdeclared(char *s){
       
        for(int i=1; i<last_point; i++){
            if(strcmp(variable[i],s) == 0)return 1;
        }return 0;
}
    
int assign(char *s)
{
        if(isdeclared(s)==1)
            return 0;
        strcpy(variable[last_point],s); store[last_point]=0;last_point++;return 1;
}

int setval(char *s,int val)
{
        if(isdeclared(s) == 0)
            return 0;
        int ok=0, i;
        for( i=1; i<last_point; i++)
        {
            if(strcmp(variable[i],s) == 0)
            {
                ok=i;
                break;
            }
        }
        store[ok]=val;
        return 1;
}

int getval(char *s)
{

        int pos=-1;
        int i;
        for( i=1; i<last_point; i++)
        {
            if(strcmp(variable[i],s) == 0)
            {
                pos=i;
                break;
            }
        }
        return pos;
}



/* Line 189 of yacc.c  */
#line 156 "1907052.tab.c"

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
     PRINT = 271,
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
     STRINGS = 297,
     IFX = 298,
     ELSE = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 84 "1907052.y"

    char *ch;
    char c;
    int dim;
    int me;
    double floating;



/* Line 214 of yacc.c  */
#line 246 "1907052.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 258 "1907052.tab.c"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   616

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNRULES -- Number of states.  */
#define YYNSTATES  161

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    56,     2,     2,
      52,    53,    47,    45,    54,    46,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    49,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    11,    14,    16,    21,    22,    25,
      27,    36,    40,    42,    43,    44,    47,    49,    53,    55,
      57,    59,    63,    65,    68,    70,    72,    74,    77,    83,
      88,    96,   108,   126,   144,   156,   164,   166,   167,   174,
     181,   183,   185,   187,   191,   195,   199,   203,   207,   211,
     215,   219,   223,   227,   231,   234,   237,   240,   243,   246,
     249
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    59,    61,    25,    50,    64,    51,    -1,
      -1,    60,    59,    -1,    60,    -1,    34,    20,    33,    21,
      -1,    -1,    62,    61,    -1,    62,    -1,    32,     4,    52,
      63,    53,    50,    64,    51,    -1,    63,    54,     4,    -1,
       4,    -1,    -1,    -1,    64,    68,    -1,    65,    -1,    66,
      67,    12,    -1,     5,    -1,     6,    -1,    30,    -1,    67,
      54,     4,    -1,     4,    -1,    68,    69,    -1,    69,    -1,
      12,    -1,    65,    -1,    72,    12,    -1,    16,    52,     4,
      53,    12,    -1,     4,    55,    72,    12,    -1,     8,    52,
      72,    53,    50,    68,    51,    -1,     8,    52,    72,    53,
      50,    68,    51,     9,    50,    68,    51,    -1,    10,    52,
       4,    55,     3,    54,     4,    24,     3,    54,     4,    26,
       3,    53,    50,    68,    51,    -1,    10,    52,     4,    55,
       3,    54,     4,    23,     3,    54,     4,    27,     3,    53,
      50,    68,    51,    -1,    29,    52,     4,    20,     3,    54,
       3,    53,    50,    68,    51,    -1,    14,    52,    70,    53,
      50,    71,    51,    -1,    72,    -1,    -1,    71,    72,    13,
      50,    68,    51,    -1,    71,    15,    13,    50,    68,    51,
      -1,     3,    -1,    31,    -1,     4,    -1,    72,    45,    72,
      -1,    72,    46,    72,    -1,    72,    47,    72,    -1,    72,
      48,    72,    -1,    72,    49,    72,    -1,    72,    56,    72,
      -1,    52,    72,    53,    -1,    72,    20,    72,    -1,    72,
      21,    72,    -1,    72,    24,    72,    -1,    72,    23,    72,
      -1,    35,    72,    -1,    36,    72,    -1,    37,    72,    -1,
      39,    72,    -1,    38,    72,    -1,    40,    72,    -1,    41,
      72,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   112,   112,   113,   116,   117,   120,   121,   124,   125,
     128,   135,   144,   152,   155,   156,   157,   161,   165,   167,
     169,   173,   185,   197,   199,   203,   205,   207,   213,   226,
     239,   244,   257,   266,   277,   286,   291,   299,   301,   310,
     323,   324,   327,   338,   343,   348,   354,   367,   370,   373,
     375,   378,   381,   384,   386,   388,   390,   392,   394,   396,
     398
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VARIABLE", "INT", "FLOAT",
  "CHARACTER", "IF", "EF", "FOR", "PF", "ENDED", "COLON", "SWITCH",
  "DEFAULT", "PRINT", "ASSIGN", "INC", "DEC", "LT", "GT", "EQ", "BSIEQ",
  "KOMEQ", "START", "UP", "DOWN", "CASE", "WHILE", "STRING", "DOUBLE",
  "DEF", "HEADER", "IMPORT", "SIN", "COS", "TAN", "LN", "LOG10", "ODDEVEN",
  "FACT", "STRINGS", "IFX", "ELSE", "'+'", "'-'", "'*'", "'/'", "'^'",
  "'{'", "'}'", "'('", "')'", "','", "'='", "'%'", "$accept", "program",
  "imports", "import", "funcs", "func", "param", "lines", "declare",
  "type", "id", "codes", "after", "Exp_case", "code", "expression", 0
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
     295,   296,   297,   298,   299,    43,    45,    42,    47,    94,
     123,   125,    40,    41,    44,    61,    37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      62,    63,    63,    63,    64,    64,    64,    65,    66,    66,
      66,    67,    67,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    71,    71,    71,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     2,     1,     4,     0,     2,     1,
       8,     3,     1,     0,     0,     2,     1,     3,     1,     1,
       1,     3,     1,     2,     1,     1,     1,     2,     5,     4,
       7,    11,    17,    17,    11,     7,     1,     0,     6,     6,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     5,     0,     1,     0,     0,     9,
       4,     0,     0,     0,     8,     6,    13,    14,    12,     0,
      18,    19,    20,     0,    16,     0,     0,     0,    40,    42,
       0,     0,    25,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     2,     0,    26,    15,    24,     0,
      22,     0,    14,    11,     0,     0,     0,     0,     0,     0,
      42,    54,    55,    56,    58,    57,    59,    60,     0,    23,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,    36,     0,
       0,    49,    50,    51,    53,    52,    43,    44,    45,    46,
      47,    48,    21,    10,    29,     0,     0,     0,     0,     0,
       0,     0,    37,    28,     0,     0,     0,     0,     0,    30,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,    39,    38,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,     8,     9,    19,    23,    46,    25,
      51,    47,    48,    87,   117,    49
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -48
static const yytype_int16 yypact[] =
{
      -4,   -12,    11,    -3,   -14,    13,   -48,    27,    31,    -3,
     -48,    39,    10,    14,   -48,   -48,    62,    17,   -48,   -21,
     -48,   -48,   -48,    47,   -48,    63,    21,    68,   -48,    18,
      22,    23,   -48,    28,    37,    40,   -48,    66,    66,    66,
      66,    66,    66,    66,   -48,    66,   -48,   509,   -48,   160,
     -48,     0,    17,   -48,    66,    66,    75,    66,    87,    92,
     -48,   381,   381,   381,   381,   381,   381,   381,   281,   -48,
     -48,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,   -48,    96,   109,   210,   331,    54,    67,   381,    69,
     104,   -48,   -32,   -32,   -32,   -32,   -22,   -22,     9,     9,
      60,   381,   -48,   -48,   -48,    76,   124,    78,   118,   128,
     509,    81,   -48,   -48,    82,   159,   133,   527,   138,   134,
      25,   129,   -48,   560,    98,   102,   152,   153,   107,   108,
     116,   509,   105,   114,   509,   509,   509,   209,   166,   170,
     259,   309,   359,   -48,   149,   151,   -48,   -48,   -48,   175,
     176,   132,   139,   136,   137,   509,   509,   409,   459,   -48,
     -48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -48,   -48,   178,   -48,   182,   -48,   -48,   141,    -7,   -48,
     -48,    -2,   -47,   -48,   -48,   -36
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -8
static const yytype_int16 yytable[] =
{
      69,    61,    62,    63,    64,    65,    66,    67,     5,    68,
      24,     6,    81,    75,    76,    77,    78,    79,    84,    85,
       1,    88,    20,    21,    80,    77,    78,    79,    -7,     7,
       1,    12,    26,    27,    80,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    24,    11,    22,   126,   127,
      28,    29,    20,    21,    82,    30,    13,    31,    79,    32,
      15,    33,    16,    34,    17,    80,    18,    50,    69,    28,
      60,    52,    53,    54,    55,    56,    35,    22,    36,    86,
      57,   123,    37,    38,    39,    40,    41,    42,    43,    58,
      69,    89,    59,    69,    69,    69,    90,    36,    44,    45,
     102,    37,    38,    39,    40,    41,    42,    43,   115,   106,
      69,    69,    28,    29,    20,    21,    80,    30,    45,    31,
     107,    32,   108,    33,   109,    34,   110,   111,   112,   137,
     113,   114,   140,   141,   142,   116,   118,   120,    35,    22,
      36,   124,   128,   125,    37,    38,    39,    40,    41,    42,
      43,   130,   131,   157,   158,   132,   133,   134,   135,   138,
     103,    45,    28,    29,    20,    21,   136,    30,   139,    31,
     144,    32,    70,    33,   145,    34,   149,   150,   151,   152,
      71,    72,    10,    73,    74,   153,   155,   156,    35,    22,
      36,    14,   154,    83,    37,    38,    39,    40,    41,    42,
      43,     0,     0,     0,     0,    75,    76,    77,    78,    79,
     119,    45,    28,    29,    20,    21,    80,    30,     0,    31,
       0,    32,   104,    33,     0,    34,     0,     0,     0,     0,
      71,    72,     0,    73,    74,     0,     0,     0,    35,    22,
      36,     0,     0,     0,    37,    38,    39,    40,    41,    42,
      43,     0,     0,     0,     0,    75,    76,    77,    78,    79,
     143,    45,    28,    29,    20,    21,    80,    30,     0,    31,
       0,    32,     0,    33,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    22,
      36,     0,     0,     0,    37,    38,    39,    40,    41,    42,
      43,    71,    72,     0,    73,    74,     0,     0,     0,     0,
     146,    45,    28,    29,    20,    21,     0,    30,     0,    31,
       0,    32,     0,    33,     0,    34,    75,    76,    77,    78,
      79,     0,     0,     0,    91,     0,     0,    80,    35,    22,
      36,     0,     0,     0,    37,    38,    39,    40,    41,    42,
      43,    71,    72,     0,    73,    74,     0,     0,     0,     0,
     147,    45,    28,    29,    20,    21,     0,    30,     0,    31,
       0,    32,     0,    33,     0,    34,    75,    76,    77,    78,
      79,     0,     0,     0,   105,     0,     0,    80,    35,    22,
      36,     0,     0,     0,    37,    38,    39,    40,    41,    42,
      43,    71,    72,     0,    73,    74,     0,     0,     0,     0,
     148,    45,    28,    29,    20,    21,     0,    30,     0,    31,
       0,    32,     0,    33,     0,    34,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,     0,    80,    35,    22,
      36,     0,     0,     0,    37,    38,    39,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     159,    45,    28,    29,    20,    21,     0,    30,     0,    31,
       0,    32,     0,    33,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    22,
      36,     0,     0,     0,    37,    38,    39,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     160,    45,    28,    29,    20,    21,     0,    30,     0,    31,
       0,    32,     0,    33,     0,    34,     0,     0,     0,     0,
      28,    60,     0,     0,     0,     0,     0,     0,    35,    22,
      36,     0,   121,     0,    37,    38,    39,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,    45,    37,    38,    39,    40,    41,    42,    43,     0,
       0,     0,     0,   129,     0,     0,     0,     0,   122,    45,
      71,    72,     0,    73,    74,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,     0,    80
};

static const yytype_int16 yycheck[] =
{
      47,    37,    38,    39,    40,    41,    42,    43,    20,    45,
      17,     0,    12,    45,    46,    47,    48,    49,    54,    55,
      34,    57,     5,     6,    56,    47,    48,    49,    32,    32,
      34,     4,    53,    54,    56,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    52,    33,    30,    23,    24,
       3,     4,     5,     6,    54,     8,    25,    10,    49,    12,
      21,    14,    52,    16,    50,    56,     4,     4,   115,     3,
       4,    50,     4,    55,    52,    52,    29,    30,    31,     4,
      52,   117,    35,    36,    37,    38,    39,    40,    41,    52,
     137,     4,    52,   140,   141,   142,     4,    31,    51,    52,
       4,    35,    36,    37,    38,    39,    40,    41,   110,    55,
     157,   158,     3,     4,     5,     6,    56,     8,    52,    10,
      53,    12,    53,    14,    20,    16,    50,     3,    50,   131,
      12,     3,   134,   135,   136,    54,    54,     4,    29,    30,
      31,     3,    13,     9,    35,    36,    37,    38,    39,    40,
      41,    53,    50,   155,   156,     3,     3,    50,    50,    54,
      51,    52,     3,     4,     5,     6,    50,     8,    54,    10,
       4,    12,    12,    14,     4,    16,    27,    26,     3,     3,
      20,    21,     4,    23,    24,    53,    50,    50,    29,    30,
      31,     9,    53,    52,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      51,    52,     3,     4,     5,     6,    56,     8,    -1,    10,
      -1,    12,    12,    14,    -1,    16,    -1,    -1,    -1,    -1,
      20,    21,    -1,    23,    24,    -1,    -1,    -1,    29,    30,
      31,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      51,    52,     3,     4,     5,     6,    56,     8,    -1,    10,
      -1,    12,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    20,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,
      51,    52,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    12,    -1,    14,    -1,    16,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    53,    -1,    -1,    56,    29,    30,
      31,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    20,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,
      51,    52,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    12,    -1,    14,    -1,    16,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    53,    -1,    -1,    56,    29,    30,
      31,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    20,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,
      51,    52,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    12,    -1,    14,    -1,    16,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    56,    29,    30,
      31,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    12,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    12,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    -1,    15,    -1,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    52,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    51,    52,
      20,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    58,    59,    60,    20,     0,    32,    61,    62,
      59,    33,     4,    25,    61,    21,    52,    50,     4,    63,
       5,     6,    30,    64,    65,    66,    53,    54,     3,     4,
       8,    10,    12,    14,    16,    29,    31,    35,    36,    37,
      38,    39,    40,    41,    51,    52,    65,    68,    69,    72,
       4,    67,    50,     4,    55,    52,    52,    52,    52,    52,
       4,    72,    72,    72,    72,    72,    72,    72,    72,    69,
      12,    20,    21,    23,    24,    45,    46,    47,    48,    49,
      56,    12,    54,    64,    72,    72,     4,    70,    72,     4,
       4,    53,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,     4,    51,    12,    53,    55,    53,    53,    20,
      50,     3,    50,    12,     3,    68,    54,    71,    54,    51,
       4,    15,    51,    72,     3,     9,    23,    24,    13,    13,
      53,    50,     3,     3,    50,    50,    50,    68,    54,    54,
      68,    68,    68,    51,     4,     4,    51,    51,    51,    27,
      26,     3,     3,    53,    53,    50,    50,    68,    68,    51,
      51
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
#line 112 "1907052.y"
    {printf("\nProgram successfully ended\n");;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 113 "1907052.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 120 "1907052.y"
    { printf("\nHeader File Found!\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 129 "1907052.y"
    {
		printf("\nFunction %s Ended successfully!\n",(yyvsp[(2) - (8)].ch));		
	;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 136 "1907052.y"
    {
   		 if(func_here((yyvsp[(3) - (3)].ch))==1)
      			  printf("\nparameter %s already exists!\n",(yyvsp[(3) - (3)].ch));
   		 else
    			 {   assign_func((yyvsp[(3) - (3)].ch));
			    printf("\nfunction parameter: %s\n",(yyvsp[(3) - (3)].ch));}
		;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 145 "1907052.y"
    {
		   if(func_here((yyvsp[(1) - (1)].ch))==1)
      			 printf("\nparam already exists!\n");
   		 else
      				{  assign_func((yyvsp[(1) - (1)].ch));
					 printf("function parameter: %s\n",(yyvsp[(1) - (1)].ch));}
		;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 152 "1907052.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 161 "1907052.y"
    { ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 174 "1907052.y"
    {
   		 if(isdeclared((yyvsp[(3) - (3)].ch))==1)
      			  printf("Variable %s already declared!\n",(yyvsp[(3) - (3)].ch));
   		 else
    			    {
				assign((yyvsp[(3) - (3)].ch));
				printf("Variable %s declared!\n",(yyvsp[(3) - (3)].ch));
				}
				
		;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 186 "1907052.y"
    {
		   if(isdeclared((yyvsp[(1) - (1)].ch))==1)
      			  printf("Variable %s already declared!\n",(yyvsp[(1) - (1)].ch));
   		 else
      			{
				assign((yyvsp[(1) - (1)].ch));
				printf("Variable %s declared!\n",(yyvsp[(1) - (1)].ch));
			}
		;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 208 "1907052.y"
    {
 		     (yyval.dim)=(yyvsp[(1) - (2)].me);
 		  // printf("\nValue of expression: %d \n",$1); 
		;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 214 "1907052.y"
    {
			if(isdeclared((yyvsp[(3) - (5)].ch))==0)
			{
				printf("Can't print %s, Value is not declared.\n",(yyvsp[(3) - (5)].ch));
			}
			else 
			{
				printf("\nValue of the variable %s:  %d\t\n",(yyvsp[(3) - (5)].ch), store[getval((yyvsp[(3) - (5)].ch))]);
			}
 		   
		;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 227 "1907052.y"
    {
 		    if(setval((yyvsp[(1) - (4)].ch),(yyvsp[(3) - (4)].me))==0)
  		 	{
  		    	(yyval.dim)=0;
				printf("\n%s Not declared\n",(yyvsp[(1) - (4)].ch));
   			}
    			else
    			{
      				(yyval.dim)=(yyvsp[(3) - (4)].me);
   			}
		;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 240 "1907052.y"
    {
   			 printf("\nCondition is true in IF\n");
		;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 245 "1907052.y"
    {
 		  f=f+1;
  		  int p=0;
  		  if((yyvsp[(3) - (11)].me))
   			 {
      			  printf("\nCondition is true in IF\n");
        			p=1;
    		 }
    		if(p==0)
      		  printf("\nCondition is false in IF\n");
		;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 258 "1907052.y"
    {
 		   
			for(int i= (yyvsp[(5) - (17)].dim) ; i<= (yyvsp[(9) - (17)].dim) ; i+=(yyvsp[(13) - (17)].dim))
			{
				printf("For Loop value at %d\n",i);
			} printf("\n");	 			    
		;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 267 "1907052.y"
    {
 		    
			for(int i= (yyvsp[(5) - (17)].dim) ; i>= (yyvsp[(9) - (17)].dim) ; i-=(yyvsp[(13) - (17)].dim))
			{
				printf("For loop value at %d\n",i);
			}printf("\n");		    
		;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 278 "1907052.y"
    {
			int a = store[getval((yyvsp[(3) - (11)].ch))], inc = (yyvsp[(7) - (11)].dim);
			while((a+=inc)< (yyvsp[(5) - (11)].dim))
			{
				printf("While loop value of variable %s : %d\n", (yyvsp[(3) - (11)].ch), a);
			}
		;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 292 "1907052.y"
    {
    		casedefault = 0;
    		casevar = (yyvsp[(1) - (1)].me);
		;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 302 "1907052.y"
    {
    		if((yyvsp[(2) - (6)].me) == casevar)
    			{
        			printf("\nExecuted Case %d\n",(yyvsp[(2) - (6)].me));
        			casedefault = 1;
   			 }
		;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 311 "1907052.y"
    {
  		  if(casedefault == 0)
   			 {
    			    casedefault = 1;
     			   printf("\nDefault Block executed\n");
    			}
		;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 323 "1907052.y"
    { (yyval.me) = (yyvsp[(1) - (1)].dim);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 324 "1907052.y"
    { (yyval.me) = (yyvsp[(1) - (1)].floating);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 328 "1907052.y"
    {
  		  if( isdeclared((yyvsp[(1) - (1)].ch)) == 0)
   			 {
    			    (yyval.me)=0;
     			   printf("\nNot declared!\n");
   			 }
    		else
       			 (yyval.me)=store[getval((yyvsp[(1) - (1)].ch))];
		;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 339 "1907052.y"
    { 	
			(yyval.me) = (yyvsp[(1) - (3)].me) + (yyvsp[(3) - (3)].me); /*printf("\nAddition value %d\n",$$);*/
		 ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 344 "1907052.y"
    {
  			(yyval.me) = (yyvsp[(1) - (3)].me) - (yyvsp[(3) - (3)].me); /*printf("\nSubtraction value %d\n",$$);*/
		;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 349 "1907052.y"
    {
 			   (yyval.me) = (yyvsp[(1) - (3)].me) * (yyvsp[(3) - (3)].me);
 			   /*printf("\nMultiplication value %d\n",$$);*/
		;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 355 "1907052.y"
    { 	if((yyvsp[(3) - (3)].me))
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

  case 47:

/* Line 1455 of yacc.c  */
#line 368 "1907052.y"
    { 	(yyval.me)=pow((yyvsp[(1) - (3)].me),(yyvsp[(3) - (3)].me)); /*printf("\nPower value %d\n",$$);*/;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 371 "1907052.y"
    {	 (yyval.me)=(yyvsp[(1) - (3)].me) % (yyvsp[(3) - (3)].me); /*printf("\nRemainder value %d\n",$$);*/;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 374 "1907052.y"
    { (yyval.me) = (yyvsp[(2) - (3)].me) ;;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 376 "1907052.y"
    { (yyval.me) = (yyvsp[(1) - (3)].me) < (yyvsp[(3) - (3)].me); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 379 "1907052.y"
    { (yyval.me) = (yyvsp[(1) - (3)].me) > (yyvsp[(3) - (3)].me); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 382 "1907052.y"
    { (yyval.me) = (yyvsp[(1) - (3)].me) <= (yyvsp[(3) - (3)].me); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 385 "1907052.y"
    { (yyval.me) = (yyvsp[(1) - (3)].me) >= (yyvsp[(3) - (3)].me); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 386 "1907052.y"
    {printf("Value of Sin(%d) is %lf\n",(yyvsp[(2) - (2)].me),sin((yyvsp[(2) - (2)].me)*3.1416/180)); (yyval.me)=sin((yyvsp[(2) - (2)].me)*3.1416/180);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 388 "1907052.y"
    {printf("Value of Cos(%d) is %lf\n",(yyvsp[(2) - (2)].me),cos((yyvsp[(2) - (2)].me)*3.1416/180)); (yyval.me)=cos((yyvsp[(2) - (2)].me)*3.1416/180);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 390 "1907052.y"
    {printf("Value of Tan(%d) is %lf\n",(yyvsp[(2) - (2)].me),tan((yyvsp[(2) - (2)].me)*3.1416/180)); (yyval.me)=tan((yyvsp[(2) - (2)].me)*3.1416/180);;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 392 "1907052.y"
    {printf("Value of Log10(%d) is %lf\n",(yyvsp[(2) - (2)].me),(log((yyvsp[(2) - (2)].me)*1.0)/log(10.0))); (yyval.me)=(log((yyvsp[(2) - (2)].me)*1.0)/log(10.0));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 394 "1907052.y"
    {printf("Value of ln(%d) is %lf\n",(yyvsp[(2) - (2)].me),(log((yyvsp[(2) - (2)].me)))); (yyval.me)=(log((yyvsp[(2) - (2)].me)));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 396 "1907052.y"
    {if((yyvsp[(2) - (2)].me)%2==0) printf("%d is even\n",(yyvsp[(2) - (2)].me));else printf("%d is odd\n",(yyvsp[(2) - (2)].me));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 398 "1907052.y"
    {int ans = 1; for(int i=1; i<=(yyvsp[(2) - (2)].me); i++){ans*=i;}printf("Factorial of %d is %d",(yyvsp[(2) - (2)].me),ans);;}
    break;



/* Line 1455 of yacc.c  */
#line 2090 "1907052.tab.c"
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
#line 405 "1907052.y"




int  yyerror(char *s){
	printf( "%s\n", s);
}
int yywrap()
{
	return 1;
}

int main()
{
	
	freopen("in.txt","r",stdin);
	freopen("output.txt","w",stdout);
	yyparse();

    
	return 0;
}




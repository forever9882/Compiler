/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.2"

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
#line 1 "minic.y"

    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include "minic_ast.h"
    #include "ucode.h" 

    extern FILE *yyin;
    char* toString(char* temp);
    
    int yylex(void);
    void yyerror(const char *s);
    Node* root;


/* Line 189 of yacc.c  */
#line 88 "minic.tab.c"

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
     TCONST = 258,
     TELSE = 259,
     TIF = 260,
     TINT = 261,
     TRETURN = 262,
     TVOID = 263,
     TWHILE = 264,
     TEQ = 265,
     TNEQ = 266,
     TLE = 267,
     TGE = 268,
     TAND = 269,
     TOR = 270,
     TINC = 271,
     TDEC = 272,
     TADDASSIGN = 273,
     TSUBASSIGN = 274,
     TMULASSIGN = 275,
     TDIVASSIGN = 276,
     TMODASSIGN = 277,
     TFOR = 278,
     TCASE = 279,
     TSWITCH = 280,
     TDEFAULT = 281,
     TCONTINUE = 282,
     TBREAK = 283,
     TIDENT = 284,
     TNUMBER = 285,
     IFX = 286
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 16 "minic.y"

    struct nodeType *nPtr;  /* node pointer */
    char* string;           /* symbol string*/



/* Line 214 of yacc.c  */
#line 162 "minic.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 174 "minic.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   197

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNRULES -- Number of states.  */
#define YYNSTATES  187

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,     2,     2,    47,     2,     2,
      32,    33,    45,    44,    34,    39,     2,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    37,
      43,    38,    42,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    17,    21,
      23,    25,    28,    30,    32,    34,    36,    38,    40,    44,
      46,    47,    49,    53,    56,    61,    63,    64,    66,    69,
      73,    75,    79,    81,    85,    90,    92,    97,    99,   100,
     102,   103,   105,   108,   110,   112,   114,   116,   118,   120,
     122,   124,   126,   129,   131,   132,   138,   146,   152,   156,
     158,   160,   164,   168,   172,   176,   180,   184,   186,   190,
     192,   196,   198,   202,   206,   208,   212,   216,   220,   224,
     226,   230,   234,   236,   240,   244,   248,   250,   253,   256,
     259,   262,   264,   269,   274,   277,   280,   282,   283,   285,
     287,   291,   293,   295,   299,   307,   313,   317,   323,   325,
     327,   329,   331,   334
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    52,    -1,    53,    -1,    52,    53,    -1,
      54,    -1,    69,    -1,    55,    66,    -1,    56,    61,    62,
      -1,    57,    -1,    58,    -1,    57,    58,    -1,    59,    -1,
      60,    -1,     3,    -1,     6,    -1,     8,    -1,    29,    -1,
      32,    63,    33,    -1,    64,    -1,    -1,    65,    -1,    64,
      34,    65,    -1,    56,    72,    -1,    35,    67,    74,    36,
      -1,    68,    -1,    -1,    69,    -1,    68,    69,    -1,    56,
      70,    37,    -1,    71,    -1,    70,    34,    71,    -1,    72,
      -1,    72,    38,    30,    -1,    72,    38,    39,    30,    -1,
      29,    -1,    29,    40,    73,    41,    -1,    30,    -1,    -1,
      75,    -1,    -1,    76,    -1,    75,    76,    -1,    66,    -1,
      77,    -1,    79,    -1,    80,    -1,    81,    -1,    96,    -1,
      97,    -1,   100,    -1,   101,    -1,    78,    37,    -1,    82,
      -1,    -1,     5,    32,    82,    33,    76,    -1,     5,    32,
      82,    33,    76,     4,    76,    -1,     9,    32,    82,    33,
      76,    -1,     7,    78,    37,    -1,    83,    -1,    84,    -1,
      90,    38,    83,    -1,    90,    18,    83,    -1,    90,    19,
      83,    -1,    90,    20,    83,    -1,    90,    21,    83,    -1,
      90,    22,    83,    -1,    85,    -1,    84,    15,    85,    -1,
      86,    -1,    85,    14,    86,    -1,    87,    -1,    86,    10,
      87,    -1,    86,    11,    87,    -1,    88,    -1,    87,    42,
      88,    -1,    87,    43,    88,    -1,    87,    13,    88,    -1,
      87,    12,    88,    -1,    89,    -1,    88,    44,    89,    -1,
      88,    39,    89,    -1,    90,    -1,    89,    45,    90,    -1,
      89,    46,    90,    -1,    89,    47,    90,    -1,    91,    -1,
      39,    90,    -1,    48,    90,    -1,    16,    90,    -1,    17,
      90,    -1,    95,    -1,    91,    40,    82,    41,    -1,    91,
      32,    92,    33,    -1,    91,    16,    -1,    91,    17,    -1,
      93,    -1,    -1,    94,    -1,    83,    -1,    94,    34,    83,
      -1,    29,    -1,    30,    -1,    32,    82,    33,    -1,    23,
      32,    77,    77,    78,    33,    76,    -1,    25,    32,    82,
      33,    76,    -1,    26,    49,    76,    -1,    24,    84,    49,
      67,    74,    -1,    98,    -1,    99,    -1,   102,    -1,   103,
      -1,    27,    37,    -1,    28,    37,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    47,    50,    56,    59,    64,    70,    77,
      82,    85,    91,    92,    95,   100,   103,   108,   111,   116,
     117,   120,   123,   129,   135,   141,   144,   149,   152,   158,
     164,   167,   173,   176,   180,   186,   190,   197,   200,   205,
     208,   211,   214,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   231,   236,   237,   240,   244,   251,   257,   262,
     265,   266,   270,   274,   278,   282,   286,   292,   293,   299,
     300,   306,   307,   311,   317,   318,   322,   326,   330,   336,
     337,   341,   347,   348,   352,   356,   362,   363,   366,   369,
     372,   377,   378,   382,   386,   389,   394,   395,   398,   403,
     406,   412,   415,   418,   423,   431,   437,   442,   448,   448,
     450,   450,   452,   457
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TCONST", "TELSE", "TIF", "TINT",
  "TRETURN", "TVOID", "TWHILE", "TEQ", "TNEQ", "TLE", "TGE", "TAND", "TOR",
  "TINC", "TDEC", "TADDASSIGN", "TSUBASSIGN", "TMULASSIGN", "TDIVASSIGN",
  "TMODASSIGN", "TFOR", "TCASE", "TSWITCH", "TDEFAULT", "TCONTINUE",
  "TBREAK", "TIDENT", "TNUMBER", "IFX", "'('", "')'", "','", "'{'", "'}'",
  "';'", "'='", "'-'", "'['", "']'", "'>'", "'<'", "'+'", "'*'", "'/'",
  "'%'", "'!'", "':'", "$accept", "mini_c", "translation_unit",
  "external_dcl", "function_def", "function_header", "dcl_spec",
  "dcl_specifiers", "dcl_specifier", "type_qualifier", "type_specifier",
  "function_name", "formal_param", "opt_formal_param", "formal_param_list",
  "param_dcl", "compound_st", "opt_dcl_list", "declaration_list",
  "declaration", "init_dcl_list", "init_declarator", "declarator",
  "opt_number", "opt_stat_list", "statement_list", "statement",
  "expression_st", "opt_expression", "if_st", "while_st", "return_st",
  "expression", "assignment_exp", "logical_or_exp", "logical_and_exp",
  "equality_exp", "relational_exp", "additive_exp", "multiplicative_exp",
  "unary_exp", "postfix_exp", "opt_actual_param", "actual_param",
  "actual_param_list", "primary_exp", "for_st", "switch_st", "default_st",
  "case_st", "label_st", "jump_st", "continue_st", "break_st", 0
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
     285,   286,    40,    41,    44,   123,   125,    59,    61,    45,
      91,    93,    62,    60,    43,    42,    47,    37,    33,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    54,    55,    56,
      57,    57,    58,    58,    59,    60,    60,    61,    62,    63,
      63,    64,    64,    65,    66,    67,    67,    68,    68,    69,
      70,    70,    71,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    77,    78,    78,    79,    79,    80,    81,    82,
      83,    83,    83,    83,    83,    83,    83,    84,    84,    85,
      85,    86,    86,    86,    87,    87,    87,    87,    87,    88,
      88,    88,    89,    89,    89,    89,    90,    90,    90,    90,
      90,    91,    91,    91,    91,    91,    92,    92,    93,    94,
      94,    95,    95,    95,    96,    97,    98,    99,   100,   100,
     101,   101,   102,   103
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     2,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       0,     1,     3,     2,     4,     1,     0,     1,     2,     3,
       1,     3,     1,     3,     4,     1,     4,     1,     0,     1,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     0,     5,     7,     5,     3,     1,
       1,     3,     3,     3,     3,     3,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     2,     2,     2,
       2,     1,     4,     4,     2,     2,     1,     0,     1,     1,
       3,     1,     1,     3,     7,     5,     3,     5,     1,     1,
       1,     1,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    14,    15,    16,     0,     2,     3,     5,     0,     0,
       9,    10,    12,    13,     6,     1,     4,    26,     7,    35,
       0,     0,    30,    32,    11,     0,    40,    25,    27,    38,
      20,     8,     0,    29,     0,    35,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,   102,     0,
       0,     0,    43,     0,    39,    41,    44,     0,    45,    46,
      47,    53,    59,    60,    67,    69,    71,    74,    79,    82,
      86,    91,    48,    49,   108,   109,    50,    51,   110,   111,
      28,    37,     0,     0,     0,    19,    21,    31,    33,     0,
       0,     0,     0,    89,    90,    54,     0,    82,     0,    54,
     112,   113,     0,    87,    88,    24,    42,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,    97,
       0,    36,    23,    18,     0,    34,     0,    58,     0,    54,
      26,     0,   106,   103,    68,    70,    72,    73,    78,    77,
      75,    76,    81,    80,    83,    84,    85,    62,    63,    64,
      65,    66,    61,    99,     0,    96,    98,     0,    22,    54,
      54,    54,    40,    54,    93,     0,    92,    55,    57,     0,
     107,   105,   100,    54,    54,    56,   104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    25,    10,    11,    12,
      13,    20,    31,    84,    85,    86,    52,    26,    27,    14,
      21,    22,    23,    82,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   164,   165,   166,    71,    72,    73,    74,    75,
      76,    77,    78,    79
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -103
static const yytype_int16 yypact[] =
{
      53,  -103,  -103,  -103,    29,    53,  -103,  -103,    -3,     7,
      53,  -103,  -103,  -103,  -103,  -103,  -103,    53,  -103,    -7,
       6,     9,  -103,    16,  -103,    31,   120,    53,  -103,    15,
      53,  -103,    31,  -103,    -2,    32,    42,    23,    56,    23,
      23,    65,    23,    66,    50,    63,    64,  -103,  -103,    23,
      23,    23,  -103,    67,   149,  -103,  -103,    68,  -103,  -103,
    -103,  -103,  -103,    87,    90,    57,    -1,   -13,   -31,    72,
      18,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,    70,    31,    73,    74,  -103,  -103,  -103,    77,
      23,    75,    23,  -103,  -103,    23,    -5,  -103,    23,   149,
    -103,  -103,    76,  -103,  -103,  -103,  -103,  -103,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,  -103,  -103,    23,
      23,  -103,  -103,  -103,    53,  -103,    80,  -103,    81,    23,
      53,    82,  -103,  -103,    90,    57,    -1,    -1,   -13,   -13,
     -13,   -13,   -31,   -31,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,    83,  -103,    85,    79,  -103,   149,
     149,    23,   149,   149,  -103,    23,  -103,   118,  -103,    91,
    -103,  -103,  -103,   149,   149,  -103,  -103
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -103,  -103,  -103,   123,  -103,  -103,     0,  -103,   113,  -103,
    -103,  -103,  -103,  -103,  -103,    -4,   125,     1,  -103,   -14,
    -103,   106,    59,  -103,   -32,  -103,   -52,   -91,   -36,  -103,
    -103,  -103,   -41,  -102,    97,    43,    44,   -15,   -49,   -47,
     -33,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,
    -103,  -103,  -103,  -103
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -55
static const yytype_int16 yytable[] =
{
       9,    91,   106,    28,   139,     9,    93,    94,   102,    97,
     108,   112,   113,    80,   118,   119,   120,   103,   104,   157,
     158,   159,   160,   161,   162,   -17,   116,   163,    88,    15,
      83,   117,    17,    29,   127,   128,    19,    89,    30,    39,
      40,   114,   115,    32,   140,    81,    33,   142,   171,   136,
     129,   138,    47,    48,    34,    49,     1,   141,   130,     2,
      35,     3,    50,   148,   149,   150,   151,   110,   111,   152,
     153,    51,    29,   182,    90,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,   154,   155,   156,    92,   167,
     121,   122,   123,   124,   125,   146,   147,    95,    98,    99,
     100,   101,   108,   105,   109,   107,   133,   135,   134,   143,
     126,   131,   137,   169,   170,   173,   174,   177,   178,   175,
     176,   181,   183,    24,   184,    36,    28,    37,    16,    38,
     168,   185,   186,    18,    83,   179,    39,    40,    87,    96,
     180,   172,   132,    41,    42,    43,    44,    45,    46,    47,
      48,   144,    49,   145,    36,    17,    37,   -54,    38,    50,
       0,     0,     0,     0,     0,    39,    40,     0,    51,     0,
       0,     0,    41,    42,    43,    44,    45,    46,    47,    48,
       0,    49,     0,     0,    17,     0,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,    51
};

static const yytype_int16 yycheck[] =
{
       0,    37,    54,    17,    95,     5,    39,    40,    49,    42,
      15,    12,    13,    27,    45,    46,    47,    50,    51,   121,
     122,   123,   124,   125,   126,    32,    39,   129,    30,     0,
      30,    44,    35,    40,    16,    17,    29,    39,    32,    16,
      17,    42,    43,    34,    49,    30,    37,    99,   139,    90,
      32,    92,    29,    30,    38,    32,     3,    98,    40,     6,
      29,     8,    39,   112,   113,   114,   115,    10,    11,   116,
     117,    48,    40,   175,    32,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    32,   130,
      18,    19,    20,    21,    22,   110,   111,    32,    32,    49,
      37,    37,    15,    36,    14,    37,    33,    30,    34,    33,
      38,    41,    37,    33,    33,    33,    33,   169,   170,    34,
      41,   173,     4,    10,    33,     5,   140,     7,     5,     9,
     134,   183,   184,     8,   134,   171,    16,    17,    32,    42,
     172,   140,    83,    23,    24,    25,    26,    27,    28,    29,
      30,   108,    32,   109,     5,    35,     7,    37,     9,    39,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    48,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     8,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    69,     0,    53,    35,    66,    29,
      61,    70,    71,    72,    58,    56,    67,    68,    69,    40,
      32,    62,    34,    37,    38,    29,     5,     7,     9,    16,
      17,    23,    24,    25,    26,    27,    28,    29,    30,    32,
      39,    48,    66,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    95,    96,    97,    98,    99,   100,   101,   102,   103,
      69,    30,    73,    56,    63,    64,    65,    71,    30,    39,
      32,    78,    32,    90,    90,    32,    84,    90,    32,    49,
      37,    37,    82,    90,    90,    36,    76,    37,    15,    14,
      10,    11,    12,    13,    42,    43,    39,    44,    45,    46,
      47,    18,    19,    20,    21,    22,    38,    16,    17,    32,
      40,    41,    72,    33,    34,    30,    82,    37,    82,    77,
      49,    82,    76,    33,    85,    86,    87,    87,    88,    88,
      88,    88,    89,    89,    90,    90,    90,    83,    83,    83,
      83,    83,    83,    83,    92,    93,    94,    82,    65,    33,
      33,    77,    67,    33,    33,    34,    41,    76,    76,    78,
      74,    76,    83,     4,    33,    76,    76
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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

/* Line 1464 of yacc.c  */
#line 42 "minic.y"
    {
        root = buildTree(PROGRAM, (yyvsp[(1) - (1)].nPtr));
    ;}
    break;

  case 3:

/* Line 1464 of yacc.c  */
#line 47 "minic.y"
    {
        (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);
    ;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 50 "minic.y"
    {
        appendNext((yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr));
        (yyval.nPtr) = (yyvsp[(1) - (2)].nPtr);
    ;}
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 56 "minic.y"
    {
        (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);
    ;}
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 59 "minic.y"
    {
        (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);
    ;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 64 "minic.y"
    {
        appendNext((yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr));
        (yyval.nPtr) = buildTree(FUNC_DEF, (yyvsp[(1) - (2)].nPtr));
    ;}
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 70 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(2) - (3)].nPtr));
        appendNext((yyvsp[(2) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(FUNC_HEAD, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 77 "minic.y"
    {
        (yyval.nPtr) = buildTree(DCL_SPEC, (yyvsp[(1) - (1)].nPtr));
    ;}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 82 "minic.y"
    {
        (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);
    ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 85 "minic.y"
    {
        appendNext((yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr));
        (yyval.nPtr) = (yyvsp[(1) - (2)].nPtr);
    ;}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 91 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 92 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 95 "minic.y"
    {
        (yyval.nPtr) = buildTree(CONST_NODE, NULL);
    ;}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 100 "minic.y"
    {
        (yyval.nPtr) = buildTree(INT_NODE, NULL);
    ;}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 103 "minic.y"
    {
        (yyval.nPtr) = buildTree(VOID_NODE, NULL);
    ;}
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 108 "minic.y"
    { (yyval.nPtr) = buildNode(IDENT, (yyvsp[(1) - (1)].string)); ;}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 111 "minic.y"
    {
        (yyval.nPtr) = buildTree(FORMAL_PARA, (yyvsp[(2) - (3)].nPtr));
    ;}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 116 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 117 "minic.y"
    { (yyval.nPtr) = NULL; ;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 120 "minic.y"
    {
        (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);
    ;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 123 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = (yyvsp[(1) - (3)].nPtr);
    ;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 129 "minic.y"
    {
        appendNext((yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr));
        (yyval.nPtr) = buildTree(PARAM_DCL, (yyvsp[(1) - (2)].nPtr));
    ;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 135 "minic.y"
    {
        appendNext((yyvsp[(2) - (4)].nPtr), (yyvsp[(3) - (4)].nPtr));
        (yyval.nPtr) = buildTree(COMPOUND_ST, (yyvsp[(2) - (4)].nPtr));
    ;}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 141 "minic.y"
    {
        (yyval.nPtr) = buildTree(DCL_LIST, (yyvsp[(1) - (1)].nPtr));
    ;}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 144 "minic.y"
    {
        (yyval.nPtr) = buildTree(DCL_LIST, NULL);
    ;}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 149 "minic.y"
    {
        (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);
    ;}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 152 "minic.y"
    {
        appendNext((yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr));
        (yyval.nPtr) = (yyvsp[(1) - (2)].nPtr);
    ;}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 158 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(2) - (3)].nPtr));
        (yyval.nPtr) = buildTree(DCL, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 164 "minic.y"
    {
        (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);
    ;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 167 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = (yyvsp[(1) - (3)].nPtr);
    ;}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 173 "minic.y"
    {
        (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);
    ;}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 176 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr)->son, buildNode(IDENT, (yyvsp[(3) - (3)].string)));
        (yyval.nPtr) = (yyvsp[(1) - (3)].nPtr);
    ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 180 "minic.y"
    {
        appendNext((yyvsp[(1) - (4)].nPtr)->son, buildTree(UNARY_MINUS,buildNode(IDENT, (yyvsp[(4) - (4)].string))));
        (yyval.nPtr) = (yyvsp[(1) - (4)].nPtr);
    ;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 186 "minic.y"
    {
        Node* ptr = buildTree(SIMPLE_VAR, buildNode(IDENT, (yyvsp[(1) - (1)].string)));
        (yyval.nPtr) = buildTree(DCL_ITEM, ptr);
    ;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 190 "minic.y"
    {
        Node* ptr = buildNode(IDENT, (yyvsp[(1) - (4)].string));
        appendNext(ptr, (yyvsp[(3) - (4)].nPtr));
        (yyval.nPtr) = buildTree(DCL_ITEM, buildTree(ARRAY_VAR, ptr));
    ;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 197 "minic.y"
    {
        (yyval.nPtr) = buildNode(NUMBER, (yyvsp[(1) - (1)].string));
    ;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 200 "minic.y"
    {
        (yyval.nPtr) = NULL;
    ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 205 "minic.y"
    {
        (yyval.nPtr) = buildTree(STAT_LIST, (yyvsp[(1) - (1)].nPtr));
    ;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 208 "minic.y"
    { (yyval.nPtr) = NULL; ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 211 "minic.y"
    {
        (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);
    ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 214 "minic.y"
    {
        appendNext((yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr));
        (yyval.nPtr) = (yyvsp[(1) - (2)].nPtr);
    ;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 220 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 221 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 222 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 223 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 224 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 225 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 226 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 227 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 228 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 231 "minic.y"
    {
        (yyval.nPtr) = buildTree(EXP_ST, (yyvsp[(1) - (2)].nPtr));
    ;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 236 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 237 "minic.y"
    { (yyval.nPtr) = NULL; ;}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 240 "minic.y"
    {
        appendNext((yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr));
        (yyval.nPtr) = buildTree(IF_ST, (yyvsp[(3) - (5)].nPtr));
    ;}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 244 "minic.y"
    {
        appendNext((yyvsp[(3) - (7)].nPtr), (yyvsp[(5) - (7)].nPtr));
        appendNext((yyvsp[(5) - (7)].nPtr), (yyvsp[(7) - (7)].nPtr));
        (yyval.nPtr) = buildTree(IF_ELSE_ST, (yyvsp[(3) - (7)].nPtr));
    ;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 251 "minic.y"
    {
        appendNext((yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr));
        (yyval.nPtr) = buildTree(WHILE_ST, (yyvsp[(3) - (5)].nPtr));
    ;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 257 "minic.y"
    {
        (yyval.nPtr) = buildTree(RETURN_ST, (yyvsp[(2) - (3)].nPtr));
    ;}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 262 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 265 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 266 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(ASSIGN_OP, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 270 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(ADD_ASSIGN, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 274 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(SUB_ASSIGN, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 278 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(MUL_ASSIGN, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 282 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(DIV_ASSIGN, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 286 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(MOD_ASSIGN, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 292 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 293 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(LOGICAL_OR, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 299 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 300 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(LOGICAL_AND, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 71:

/* Line 1464 of yacc.c  */
#line 306 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 307 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(EQ, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 73:

/* Line 1464 of yacc.c  */
#line 311 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(NE, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 74:

/* Line 1464 of yacc.c  */
#line 317 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 75:

/* Line 1464 of yacc.c  */
#line 318 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(GT, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 76:

/* Line 1464 of yacc.c  */
#line 322 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(LT, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 326 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(GE, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 330 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(LE, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 336 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 337 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(ADD, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 341 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(SUB, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 82:

/* Line 1464 of yacc.c  */
#line 347 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 83:

/* Line 1464 of yacc.c  */
#line 348 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(MUL, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 84:

/* Line 1464 of yacc.c  */
#line 352 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(DIV, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 85:

/* Line 1464 of yacc.c  */
#line 356 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = buildTree(MOD, (yyvsp[(1) - (3)].nPtr));
    ;}
    break;

  case 86:

/* Line 1464 of yacc.c  */
#line 362 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 87:

/* Line 1464 of yacc.c  */
#line 363 "minic.y"
    {
        (yyval.nPtr) = buildTree(UNARY_MINUS, (yyvsp[(2) - (2)].nPtr));
    ;}
    break;

  case 88:

/* Line 1464 of yacc.c  */
#line 366 "minic.y"
    {
        (yyval.nPtr) = buildTree(LOGICAL_NOT, (yyvsp[(2) - (2)].nPtr));
    ;}
    break;

  case 89:

/* Line 1464 of yacc.c  */
#line 369 "minic.y"
    {
        (yyval.nPtr) = buildTree(PRE_INC, (yyvsp[(2) - (2)].nPtr));
    ;}
    break;

  case 90:

/* Line 1464 of yacc.c  */
#line 372 "minic.y"
    {
        (yyval.nPtr) = buildTree(PRE_DEC, (yyvsp[(2) - (2)].nPtr));
    ;}
    break;

  case 91:

/* Line 1464 of yacc.c  */
#line 377 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 92:

/* Line 1464 of yacc.c  */
#line 378 "minic.y"
    {
        appendNext((yyvsp[(1) - (4)].nPtr), (yyvsp[(3) - (4)].nPtr));
        (yyval.nPtr) = buildTree(INDEX, (yyvsp[(1) - (4)].nPtr));
    ;}
    break;

  case 93:

/* Line 1464 of yacc.c  */
#line 382 "minic.y"
    {
        appendNext((yyvsp[(1) - (4)].nPtr), (yyvsp[(3) - (4)].nPtr));
        (yyval.nPtr) = buildTree(CALL, (yyvsp[(1) - (4)].nPtr));
    ;}
    break;

  case 94:

/* Line 1464 of yacc.c  */
#line 386 "minic.y"
    {
        (yyval.nPtr) = buildTree(POST_INC, (yyvsp[(1) - (2)].nPtr));
    ;}
    break;

  case 95:

/* Line 1464 of yacc.c  */
#line 389 "minic.y"
    {
        (yyval.nPtr) = buildTree(POST_DEC, (yyvsp[(1) - (2)].nPtr));
    ;}
    break;

  case 96:

/* Line 1464 of yacc.c  */
#line 394 "minic.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 97:

/* Line 1464 of yacc.c  */
#line 395 "minic.y"
    { (yyval.nPtr) = NULL; ;}
    break;

  case 98:

/* Line 1464 of yacc.c  */
#line 398 "minic.y"
    {
        (yyval.nPtr) = buildTree(ACTUAL_PARAM, (yyvsp[(1) - (1)].nPtr));
    ;}
    break;

  case 99:

/* Line 1464 of yacc.c  */
#line 403 "minic.y"
    {
        (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr);
    ;}
    break;

  case 100:

/* Line 1464 of yacc.c  */
#line 406 "minic.y"
    {
        appendNext((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr));
        (yyval.nPtr) = (yyvsp[(1) - (3)].nPtr);
    ;}
    break;

  case 101:

/* Line 1464 of yacc.c  */
#line 412 "minic.y"
    {
        (yyval.nPtr) = buildNode(IDENT, (yyvsp[(1) - (1)].string));
    ;}
    break;

  case 102:

/* Line 1464 of yacc.c  */
#line 415 "minic.y"
    {
        (yyval.nPtr) = buildNode(NUMBER, (yyvsp[(1) - (1)].string));
    ;}
    break;

  case 103:

/* Line 1464 of yacc.c  */
#line 418 "minic.y"
    { 
        (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr);
    ;}
    break;

  case 104:

/* Line 1464 of yacc.c  */
#line 423 "minic.y"
    {
	appendNext((yyvsp[(3) - (7)].nPtr),(yyvsp[(4) - (7)].nPtr));
	appendNext((yyvsp[(4) - (7)].nPtr),(yyvsp[(5) - (7)].nPtr));
	appendNext((yyvsp[(5) - (7)].nPtr),(yyvsp[(7) - (7)].nPtr));
	(yyval.nPtr) = buildTree(FOR_ST,(yyvsp[(3) - (7)].nPtr));
	;}
    break;

  case 105:

/* Line 1464 of yacc.c  */
#line 431 "minic.y"
    {
    appendNext((yyvsp[(3) - (5)].nPtr),(yyvsp[(5) - (5)].nPtr));
    (yyval.nPtr)=buildTree(SWITCH_ST,(yyvsp[(3) - (5)].nPtr));
    ;}
    break;

  case 106:

/* Line 1464 of yacc.c  */
#line 437 "minic.y"
    {
        (yyval.nPtr) = buildTree(DEFAULT_ST,(yyvsp[(3) - (3)].nPtr));
    ;}
    break;

  case 107:

/* Line 1464 of yacc.c  */
#line 442 "minic.y"
    {
        appendNext((yyvsp[(2) - (5)].nPtr),(yyvsp[(4) - (5)].nPtr));
        (yyval.nPtr) = buildTree(CASE_ST,(yyvsp[(2) - (5)].nPtr));
    ;}
    break;

  case 112:

/* Line 1464 of yacc.c  */
#line 452 "minic.y"
    {
        (yyval.nPtr) = buildTree(CONTINUE, NULL);
    ;}
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 457 "minic.y"
    {
        (yyval.nPtr) = buildTree(BREAK, NULL);
    ;}
    break;



/* Line 1464 of yacc.c  */
#line 2525 "minic.tab.c"
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



/* Line 1684 of yacc.c  */
#line 462 "minic.y"


char* toString(char* string)
{
    char* str;
    str = (char*)malloc(strlen(string)); 
    strcpy(str, string);
    return str;
}

void yyerror(const char *s) {
	fprintf(stdout, "%s\n", s);
}

Node* parse(FILE *fd_mc)
{
    yyin = fd_mc;
    do{
        yyparse();
    } while(!feof(yyin));

    return root;
}

int main(int argc, char *argv[]){
    FILE * fd_mc, *fd_ast, *fd_uco;
    Node *root;

    if (argc != 2) {
        printf("[Usage] ./Comp minic_file.mc\n");
        return -1;
    }

    fd_mc=fopen(argv[1],"r");
    if(!fd_mc){
        printf(".mc file not open.\n");
        exit(1);
    }
   
    fd_ast=fopen(strcat(strtok(argv[1],"."),".ast"),"w");
    fd_uco=fopen(strcat(strtok(argv[1],"."),".uco"),"w");
 
    printf("Start Parsing. \n");
    root=parse(fd_mc);
    printf("Start Making AST file.\n");
    printTree(root,0,fd_ast);
    fclose(fd_mc); fclose(fd_ast);
	printf("END. Please Check %s.ast file. \n",strtok(argv[1],"."));
    printf("Start Code Generate. \n");
    codeGen(root, fd_uco);
    fclose(fd_uco);
    printf("END. Please Check %s.uco file.\n",strtok(argv[1],"."));
    
    return 0;
}




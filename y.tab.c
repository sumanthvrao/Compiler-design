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
#line 1 "ast_fin.y" /* yacc.c:339  */

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int yylex();
int yyerror();
extern char *yytext;
	FILE *yyin;

extern char name[20];
 typedef struct node
 {
 struct node *left;
 struct node *right;
 char *token;
 } node;
 node *mknode(node *left, node *right, char *token);
 void printtree(node *tree);
 void free2(node *tree);

#define YYSTYPE struct node *
struct node *root;

#line 90 "y.tab.c" /* yacc.c:339  */

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
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INT = 258,
    MAIN = 259,
    OB = 260,
    CB = 261,
    SO = 262,
    SC = 263,
    COLON = 264,
    HASH = 265,
    INCLUDE = 266,
    LIBRARY = 267,
    IF = 268,
    ELSE = 269,
    DO = 270,
    WHILE = 271,
    FOR = 272,
    CONT = 273,
    BRK = 274,
    RTRN = 275,
    SEMICOLON = 276,
    BINARYOR = 277,
    BINARYAND = 278,
    LT = 279,
    GT = 280,
    LTE = 281,
    GTE = 282,
    NE = 283,
    EQ = 284,
    VOID = 285,
    CHAR = 286,
    COMMA = 287,
    EQUAL = 288,
    SUBPREFIX = 289,
    NUM = 290,
    ID = 291,
    ADD = 292,
    SUB = 293,
    MUL = 294,
    DIV = 295,
    ADDRIGHT = 296,
    SUBRIGHT = 297,
    MULRIGHT = 298,
    DIVRIGHT = 299,
    ADDPREFIX = 300,
    IFX = 301
  };
#endif
/* Tokens.  */
#define INT 258
#define MAIN 259
#define OB 260
#define CB 261
#define SO 262
#define SC 263
#define COLON 264
#define HASH 265
#define INCLUDE 266
#define LIBRARY 267
#define IF 268
#define ELSE 269
#define DO 270
#define WHILE 271
#define FOR 272
#define CONT 273
#define BRK 274
#define RTRN 275
#define SEMICOLON 276
#define BINARYOR 277
#define BINARYAND 278
#define LT 279
#define GT 280
#define LTE 281
#define GTE 282
#define NE 283
#define EQ 284
#define VOID 285
#define CHAR 286
#define COMMA 287
#define EQUAL 288
#define SUBPREFIX 289
#define NUM 290
#define ID 291
#define ADD 292
#define SUB 293
#define MUL 294
#define DIV 295
#define ADDRIGHT 296
#define SUBRIGHT 297
#define MULRIGHT 298
#define DIVRIGHT 299
#define ADDPREFIX 300
#define IFX 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 233 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   292

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  168

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    47,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    36,    36,    37,    38,    39,    39,    40,    43,    44,
      45,    46,    48,    49,    52,    53,    54,    56,    57,    58,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    75,    76,    77,    78,    79,    81,
      83,    86,    87,    88,    90,    93,    95,    96,    98,    99,
     101,   102,   105,   106,   108,   109,   110,   111,   112,   113,
     114,   115,   117,   118,   120,   122,   123,   124,   126,   127,
     129,   130,   131,   133,   134,   135,   137,   138,   139,   141,
     142,   143
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "MAIN", "OB", "CB", "SO", "SC",
  "COLON", "HASH", "INCLUDE", "LIBRARY", "IF", "ELSE", "DO", "WHILE",
  "FOR", "CONT", "BRK", "RTRN", "SEMICOLON", "BINARYOR", "BINARYAND", "LT",
  "GT", "LTE", "GTE", "NE", "EQ", "VOID", "CHAR", "COMMA", "EQUAL",
  "SUBPREFIX", "NUM", "ID", "ADD", "SUB", "MUL", "DIV", "ADDRIGHT",
  "SUBRIGHT", "MULRIGHT", "DIVRIGHT", "ADDPREFIX", "IFX", "'$'", "'['",
  "']'", "$accept", "PreProcessorDirectives", "Main", "Identifier",
  "Array", "CompoundStmt", "Global", "GlobeDeclaration", "GlobeAssignExpr",
  "FunctionDefinition", "FunctionName", "ParamsType", "Stmt", "Iterative",
  "Function", "FunctionParams", "Declaration", "FunctionCall", "Call",
  "AssignExpr", "SelectionStmt", "cond", "Expr", "logOp", "relExp",
  "logExp", "Extra", "Type", "VarList", "E", "T", "F", "JumpStmt", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,    36,    91,    93
};
# endif

#define YYPACT_NINF -128

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-128)))

#define YYTABLE_NINF -70

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      69,     5,    74,    70,  -128,     7,    81,  -128,  -128,  -128,
    -128,     7,     7,    82,    55,    84,  -128,  -128,    23,    54,
      31,  -128,    -4,    88,  -128,    87,    33,  -128,   -17,  -128,
       6,  -128,    71,    98,  -128,    91,    45,    75,  -128,     6,
    -128,  -128,    92,   -18,   -15,  -128,  -128,  -128,   248,    45,
    -128,  -128,  -128,     9,  -128,     6,     6,     6,     6,   104,
     121,    98,   123,   109,   111,     6,     4,    76,    42,   127,
     248,   126,   151,   132,   176,   201,    55,   226,   135,    96,
      55,  -128,   -15,   -15,  -128,  -128,  -128,     6,   131,     6,
    -128,  -128,   128,     6,  -128,  -128,  -128,  -128,  -128,    55,
    -128,  -128,    48,  -128,     2,  -128,    53,  -128,  -128,   144,
      -1,  -128,  -128,   247,   146,   147,  -128,    56,  -128,    60,
    -128,    98,    64,    55,    98,  -128,  -128,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,    98,  -128,    55,
     139,    45,    98,    45,  -128,   149,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   155,  -128,  -128,  -128,  -128,
      45,    55,    98,   152,  -128,  -128,  -128,  -128
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,    65,    66,    67,    11,
       2,     0,     0,     0,     0,     0,    10,     9,     0,     7,
      69,    13,     0,     0,    65,     0,     0,    19,     0,     4,
       0,    12,     0,     0,    15,     0,     0,     0,     6,     0,
      77,    76,     0,    64,    72,    75,    45,    68,     0,    38,
      16,    18,     5,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    70,    71,    73,    74,    33,     0,     0,     0,
      79,    80,     0,     0,    31,     8,    32,    26,    30,     0,
      27,    28,    41,    43,     0,    29,     0,     3,    17,     0,
      50,    52,    53,     0,     0,     0,    81,     0,    69,     0,
      42,     0,     0,     0,     0,    55,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    47,     0,
       0,    38,     0,     0,    40,    48,    51,    62,    63,    56,
      57,    58,    59,    60,    61,     0,    34,    46,    44,    36,
      38,     0,     0,     0,    37,    39,    49,    35
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,  -128,   -13,  -128,   -31,    86,  -128,  -128,  -128,
     -46,  -128,   215,  -128,  -127,  -128,  -128,  -128,   133,   -68,
    -128,   -85,  -128,  -128,  -128,  -128,   -25,    -5,   -64,   -12,
      44,    46,  -128
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     9,    67,    29,    68,    10,    11,    21,    12,
      13,    26,    69,    70,    79,   122,    71,    72,    73,    74,
      75,   109,   110,   127,   111,   112,   113,    76,    22,    43,
      44,    45,    77
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,    20,    49,    78,   115,    42,    14,    14,   103,   -45,
       6,    39,   104,    27,   159,    81,     3,    31,    37,    55,
      56,   125,   126,   120,    57,    58,    24,    53,    32,    25,
      88,    51,    38,   164,    32,   119,   -17,     7,     8,    35,
      92,    40,    41,    59,    80,    24,    55,    56,    24,    48,
     -25,   155,    28,     7,     8,    60,    24,    61,    62,   121,
      63,    64,    65,   102,    30,    36,   140,   108,   117,   -69,
     142,   157,     7,     8,     4,     7,     8,   138,    66,     1,
     -69,    93,     5,     7,     8,    15,   118,    18,   139,    23,
     141,    19,    32,   145,    33,    78,   143,    16,    17,    82,
      83,   123,    28,    84,    85,    48,   156,    46,    34,    93,
     144,   160,    50,    54,    78,   146,   147,   148,   149,   150,
     151,   152,   153,   154,    52,    86,    87,    59,    89,    24,
      90,   166,    91,    48,   -20,    95,    80,    99,   161,    60,
     106,    61,    62,   107,    63,    64,    65,   114,   165,   116,
     124,   136,    59,   137,    24,    80,     7,     8,    48,   -24,
     158,   163,    66,   162,    60,    47,    61,    62,     0,    63,
      64,    65,     0,   167,     0,     0,     0,    59,     0,    24,
       0,     7,     8,    48,   -21,     0,     0,    66,     0,    60,
       0,    61,    62,     0,    63,    64,    65,     0,     0,     0,
       0,     0,    59,     0,    24,     0,     7,     8,    48,   -22,
       0,     0,    66,     0,    60,     0,    61,    62,     0,    63,
      64,    65,     0,     0,     0,     0,     0,    59,     0,    24,
       0,     7,     8,    48,   -23,     0,     0,    66,     0,    60,
       0,    61,    62,     0,    63,    64,    65,     0,     0,    59,
       0,    24,     0,     0,     0,    48,     7,     8,     0,     0,
       0,    60,    66,    61,    62,     0,    63,    64,    65,   128,
     129,   130,   131,   132,   133,   134,   135,     0,     7,     8,
       0,     0,     0,    94,    66,    96,    97,    98,     0,   100,
     101,     0,   105
};

static const yytype_int16 yycheck[] =
{
       5,    14,    33,    49,    89,    30,    11,    12,    76,     5,
       3,     5,    76,    18,   141,     6,    11,    21,    35,    37,
      38,    22,    23,    21,    39,    40,     3,    39,    32,     6,
      61,    36,    49,   160,    32,    99,     5,    30,    31,     6,
      65,    35,    36,     1,    49,     3,    37,    38,     3,     7,
       8,   136,    48,    30,    31,    13,     3,    15,    16,     6,
      18,    19,    20,    76,    33,    32,     6,    80,    93,    21,
       6,   139,    30,    31,     0,    30,    31,    21,    36,    10,
      32,    33,    12,    30,    31,     4,    99,     5,    32,     5,
     121,    36,    32,   124,     6,   141,    32,    11,    12,    55,
      56,   106,    48,    57,    58,     7,   137,    36,    21,    33,
     123,   142,    21,    21,   160,   127,   128,   129,   130,   131,
     132,   133,   134,   135,    49,    21,     5,     1,     5,     3,
      21,   162,    21,     7,     8,     8,   141,     5,   143,    13,
       5,    15,    16,    47,    18,    19,    20,    16,   161,    21,
       6,     5,     1,     6,     3,   160,    30,    31,     7,     8,
      21,     6,    36,    14,    13,    32,    15,    16,    -1,    18,
      19,    20,    -1,    21,    -1,    -1,    -1,     1,    -1,     3,
      -1,    30,    31,     7,     8,    -1,    -1,    36,    -1,    13,
      -1,    15,    16,    -1,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,    -1,    30,    31,     7,     8,
      -1,    -1,    36,    -1,    13,    -1,    15,    16,    -1,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
      -1,    30,    31,     7,     8,    -1,    -1,    36,    -1,    13,
      -1,    15,    16,    -1,    18,    19,    20,    -1,    -1,     1,
      -1,     3,    -1,    -1,    -1,     7,    30,    31,    -1,    -1,
      -1,    13,    36,    15,    16,    -1,    18,    19,    20,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    30,    31,
      -1,    -1,    -1,    68,    36,    70,    71,    72,    -1,    74,
      75,    -1,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    51,    11,     0,    12,     3,    30,    31,    52,
      56,    57,    59,    60,    77,     4,    56,    56,     5,    36,
      53,    58,    78,     5,     3,     6,    61,    77,    48,    54,
      33,    21,    32,     6,    21,     6,    32,    35,    49,     5,
      35,    36,    76,    79,    80,    81,    36,    68,     7,    55,
      21,    77,    49,    79,    21,    37,    38,    39,    40,     1,
      13,    15,    16,    18,    19,    20,    36,    53,    55,    62,
      63,    66,    67,    68,    69,    70,    77,    82,    60,    64,
      77,     6,    80,    80,    81,    81,    21,     5,    55,     5,
      21,    21,    76,    33,    62,     8,    62,    62,    62,     5,
      62,    62,    53,    69,    78,    62,     5,    47,    53,    71,
      72,    74,    75,    76,    16,    71,    21,    76,    53,    78,
      21,     6,    65,    77,     6,    22,    23,    73,    22,    23,
      24,    25,    26,    27,    28,    29,     5,     6,    21,    32,
       6,    55,     6,    32,    53,    55,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    71,    55,    69,    21,    64,
      55,    77,    14,     6,    64,    53,    55,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    53,    54,    54,    54,    55,    56,
      56,    56,    57,    57,    58,    59,    59,    60,    61,    61,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    63,    63,    64,    64,    64,    65,
      65,    66,    66,    66,    67,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    74,    74,
      74,    74,    75,    75,    76,    77,    77,    77,    78,    78,
      79,    79,    79,    80,    80,    80,    81,    81,    81,    82,
      82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     7,     2,     3,     2,     0,     3,     2,
       2,     1,     3,     2,     4,     4,     5,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     5,     7,     5,     6,     0,     4,
       2,     2,     3,     2,     5,     1,     5,     4,     5,     7,
       1,     3,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     3,     1,
       3,     3,     1,     3,     3,     1,     1,     1,     3,     2,
       2,     3
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
        case 2:
#line 36 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode(0, (yyvsp[0]), "include"); root = (yyval);}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 37 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[-1]), "main");}
#line 1459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 38 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode(0, 0, name);}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 39 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode(0, 0, "Array");}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 43 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 44 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-1]), (yyvsp[0]), "global");}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 45 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-1]), (yyvsp[0]), "global_dec");}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 46 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 48 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[-1]), ",");}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 49 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-1]), (yyvsp[0]), "global");// free2($1);
                  }
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 52 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-3]), (yyvsp[-1]), "="); }
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 53 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-3]); }
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 54 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-2]), (yyvsp[-4]), "func");}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 56 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1]), (yyvsp[0]), "func");}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 57 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-2]), (yyvsp[0]), " ");}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 58 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 61 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 62 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 63 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 64 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 65 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 66 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1]), (yyvsp[0]), "");}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 67 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1]), (yyvsp[0]), "");}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 68 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1]), (yyvsp[0]), "");}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 69 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1]), (yyvsp[0]), "");}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 70 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1]), (yyvsp[0]), "");}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 71 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1]), (yyvsp[0]), "");}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 72 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1]), (yyvsp[0]), "");}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 73 "ast_fin.y" /* yacc.c:1646  */
    {yyerrok; yyclearin; printf("missing ';'\n");}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 75 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-2]), (yyvsp[0]),"while" );}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 76 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-5]), (yyvsp[-2]),"do-while" );}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 77 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-4]), (yyvsp[-1]), "func");}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 78 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-5]), (yyvsp[-1]), "func");}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 79 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode(0, 0, "");}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 81 "ast_fin.y" /* yacc.c:1646  */
    {(yyvsp[-2]) = mknode((yyvsp[-1]), (yyvsp[0]), "");
                                                       (yyval) = mknode((yyvsp[-2]), (yyvsp[-3]), "");}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 83 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1]), (yyvsp[0]), "");
                                                      }
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 86 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1]), (yyvsp[0]), "");}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 87 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[-1]), ""); }
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 88 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-1]), (yyvsp[0]), "");}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 90 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-4]), (yyvsp[-2]), "call"); //free2($1);
                }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 93 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode(0, 0, name); }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 95 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-4]), (yyvsp[-2]), "=");}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 96 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-3]), (yyvsp[-1]), "=");}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 98 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[0]), "IF");}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 99 "ast_fin.y" /* yacc.c:1646  */
    { (yyvsp[-6])=mknode((yyvsp[-4]),(yyvsp[-2]),"if"); (yyval)=mknode((yyvsp[-6]),(yyvsp[0]),"else");}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 101 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 102 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[0]), (yyvsp[-1])->token); free2((yyvsp[-1]));
     }
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 105 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]) ;}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 106 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]) ;}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 108 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode(0, 0, "&&");}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 109 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode(0, 0, "||");}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 110 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[0]), "<");}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 111 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[0]), ">");}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 112 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[0]), "<=");}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 113 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[0]), ">=");}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 114 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[0]), "!=");}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 115 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[0]), "=");}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 117 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[0]), "&&");}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 118 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[0]), "||");}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 120 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 122 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode(0, 0, "int");}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 123 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode(0, 0, "void");}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 124 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode(0, 0, "char");}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 126 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-2]), (yyvsp[0]), "");}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 127 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 129 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[0]), "+");}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 130 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = mknode((yyvsp[-2]), (yyvsp[0]), "-");}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 131 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 133 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-2]), (yyvsp[0]), "*");}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 134 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-2]), (yyvsp[0]), "/");}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 135 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 137 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode(0, 0, yytext);}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 138 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode(0, 0, yytext);}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 139 "ast_fin.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 141 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode(0, 0, "continue");}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 142 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode(0, 0, "break");}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 143 "ast_fin.y" /* yacc.c:1646  */
    {(yyval) = mknode(0, 0, "return");}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1918 "y.tab.c" /* yacc.c:1646  */
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
#line 145 "ast_fin.y" /* yacc.c:1906  */


char depth[ 12056 ];
int di=0;


void Push( char c )
{
    depth[ di++ ] = ' ';
    depth[ di++ ] = c;
    depth[ di++ ] = ' ';
    depth[ di++ ] = ' ';
    depth[ di ] = 0;
}

void Pop( )
{
    depth[ di -= 4 ] = 0;
}

void Print( node* tree )
{
    if(tree==NULL)
    {
        printf("null\n");
	    return ;
	}
    //if()
    printf( "(%s)\n", tree->token );

    if ( tree->left )
    {
        printf( "%s |__", depth );
        Push( '|' );
        Print( tree->left );
        Pop( );
    }
 	if(tree->right)
    {
        printf( "%s |__", depth );
        Push( ' ' );
        Print( tree->right );
        Pop( );
    }
}




int main (void) {
	yyin = fopen("out.c", "r");
	if(!yyparse())
		;
	else
		printf("Invalid");
	fclose(yyin);
    printf("\nInorder traversal \n");
    printtree(root);
    printf("\n\n");
    Print(root);
	return 0;
}


node *mknode(node *left, node *right, char *token)
{ /* malloc the node */
	//printf("inside function\n");
	//printf("%s\n",token);
    node *newnode = (node *)malloc(sizeof(node));
    char *newstr = (char *)malloc(strlen(token)+1);
    strcpy(newstr, token);
    newnode->left = left;
    newnode->right = right;
    newnode->token = newstr;
    return(newnode);
}


void free2(node *tree){
	if(tree==NULL)
	    return;
	if(tree->left)
	    free2(tree->left);
	if(tree->right)
	    free2(tree->right);
	free(tree->token);
	free(tree);
}



void printtree(node *tree)
{
 int i;
 if((strcmp(tree->token,"")==0) && (tree->left ==NULL) && (tree->right==NULL))
    return;
else
{
    if (tree->left || tree->right)
        printf("(");
    if (tree->left)
        printtree(tree->left);
    printf(" %s ", tree->token);
    if (tree->right)
        printtree(tree->right);
    if (tree->left || tree->right)
    printf(")");
}

}


int yyerror (char *s) {fprintf (stderr, "%s\n",  s);}

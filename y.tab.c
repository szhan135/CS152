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
#line 1 "mini_1.y" /* yacc.c:339  */


#define YY_NO_UNPUT
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char* s);


#line 75 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
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
    IDENT = 258,
    NUMBER = 259,
    FUNCTION = 260,
    IDENTIFIER = 261,
    BEGIN_PARAMS = 262,
    SEMICOLON = 263,
    END_PARAMS = 264,
    BEGIN_LOCALS = 265,
    END_LOCALS = 266,
    BEGIN_BODY = 267,
    END_BODY = 268,
    COMMA = 269,
    COLON = 270,
    INTEGER = 271,
    ARRAY = 272,
    L_SQUARE_BRACKET = 273,
    R_SQUARE_BRACKET = 274,
    OF = 275,
    NEQ = 276,
    IF = 277,
    THEN = 278,
    ENDIF = 279,
    ELSE = 280,
    WHILE = 281,
    BEGINLOOP = 282,
    ENDLOOP = 283,
    DO = 284,
    FOREACH = 285,
    IN = 286,
    FOR = 287,
    READ = 288,
    WRITE = 289,
    CONTINUE = 290,
    OR = 291,
    AND = 292,
    NOT = 293,
    L_PAREN = 294,
    R_PAREN = 295,
    EQ = 296,
    LT = 297,
    GT = 298,
    LTE = 299,
    GTE = 300,
    TRUE = 301,
    FALSE = 302,
    RETURN = 303,
    SUB = 304,
    ADD = 305,
    MULT = 306,
    DIV = 307,
    MOD = 308,
    ASSIGN = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "mini_1.y" /* yacc.c:355  */

  char* valIdent;
  int num;
 

#line 176 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 193 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   153

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  133

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   105,   105,   107,   111,   115,   117,   120,   122,   126,
     128,   131,   133,   136,   138,   140,   142,   144,   146,   148,
     150,   152,   155,   157,   161,   163,   166,   168,   172,   174,
     176,   179,   181,   183,   187,   189,   191,   193,   197,   199,
     201,   203,   205,   207,   209,   213,   215,   219,   221,   225,
     227,   231,   233,   235,   237,   241,   243,   245,   247,   249,
     251,   255
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "NUMBER", "FUNCTION",
  "IDENTIFIER", "BEGIN_PARAMS", "SEMICOLON", "END_PARAMS", "BEGIN_LOCALS",
  "END_LOCALS", "BEGIN_BODY", "END_BODY", "COMMA", "COLON", "INTEGER",
  "ARRAY", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "OF", "NEQ", "IF",
  "THEN", "ENDIF", "ELSE", "WHILE", "BEGINLOOP", "ENDLOOP", "DO",
  "FOREACH", "IN", "FOR", "READ", "WRITE", "CONTINUE", "OR", "AND", "NOT",
  "L_PAREN", "R_PAREN", "EQ", "LT", "GT", "LTE", "GTE", "TRUE", "FALSE",
  "RETURN", "SUB", "ADD", "MULT", "DIV", "MOD", "ASSIGN", "$accept",
  "Program", "Function", "Declaration", "Declarations", "Identifiers",
  "Statements", "Statement", "ElseStatement", "Var", "Vars", "Expression",
  "Expressions", "MultExp", "Term", "BoolExp", "RAExp", "RExp", "RExp1",
  "Comp", "Ident", YY_NULLPTR
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
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF -37

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-37)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -3,    14,    24,    -3,   -37,    21,   -37,   -37,    28,    14,
      29,    32,    23,    31,    14,    39,    -2,    14,   -37,    14,
     -37,    33,   -37,    47,    57,    51,    48,    98,    49,     1,
       1,    58,    14,    14,    14,   -37,    40,    73,    80,    38,
      77,    81,   -37,    69,     1,   -37,   -37,    74,   -37,   108,
       4,   -32,    75,    63,    66,   -37,   -12,    78,    98,    76,
      86,   -37,   -37,    40,   -37,   -37,    98,    40,    40,   -37,
     -37,    96,    64,   -37,    40,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,    40,    40,    40,    40,    40,    40,    98,     1,
       1,    40,    98,    82,    14,    14,    71,   -37,   -37,    90,
     -37,   -37,    72,   -37,   -37,   -37,   -37,   -37,   -37,    97,
     -37,   -37,   107,    83,   102,   100,   115,   -37,   -37,   -37,
      98,   110,    40,   -37,   -37,     1,    98,   -37,   -37,   -37,
     -37,   116,   -37
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     2,    61,     0,     1,     3,     0,     7,
       0,     0,     0,     9,     7,     0,     0,     0,     8,     7,
       5,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
      25,     0,    40,     0,     0,    52,    53,     0,    38,     0,
      28,    34,     0,    45,    47,    50,    25,     0,     0,     0,
      26,    18,    19,     0,    21,     4,    12,     0,     0,     6,
      49,     0,     0,    41,     0,    39,    56,    55,    57,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,     0,    11,    13,     0,
      42,    54,     0,    51,    30,    29,    35,    36,    37,    22,
      46,    48,    33,     0,     0,     0,     0,    27,    24,    43,
       0,     0,    31,    44,    15,     0,     0,    23,    14,    32,
      16,     0,    17
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -37,   132,   -37,   -37,    -7,   126,   -36,   -37,   -37,   -24,
     -33,    -8,    25,    -5,   -37,   -19,    55,   -37,   105,   -37,
      -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    10,    11,    12,    37,    38,   121,    48,
      61,    49,   113,    50,    51,    52,    53,    54,    55,    82,
      56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       5,    62,     1,    39,     4,    42,    68,    18,    13,    60,
      60,    57,    23,    13,    20,    21,    13,     4,    13,    85,
      86,    87,    93,    75,     6,    72,    40,    91,    64,     8,
      97,    59,    40,    40,    39,     9,    71,    14,    16,    43,
      44,    15,    39,     4,    42,    17,    40,    45,    46,    19,
      47,    24,   109,    83,    84,    96,   114,    40,    25,    98,
      99,    26,   117,    27,    39,    40,   102,    28,    39,    41,
     110,    60,     4,    42,   103,   104,   105,     4,    73,    63,
     106,   107,   108,   112,   127,    58,    65,    40,    66,    47,
     131,    40,    67,   116,    40,    68,    39,    69,    88,    89,
      95,     4,    39,    90,   101,    92,   130,    94,    44,   118,
     115,   100,   119,    74,   112,    45,    46,    76,    47,    40,
      29,   122,   120,   123,    30,    40,   125,    31,    32,    76,
     124,    33,    34,    35,   128,     7,   100,    77,    78,    79,
      80,    81,   126,    22,   132,   111,    36,   129,    70,    77,
      78,    79,    80,    81
};

static const yytype_uint8 yycheck[] =
{
       1,    34,     5,    27,     3,     4,    18,    14,     9,    33,
      34,    30,    19,    14,    16,    17,    17,     3,    19,    51,
      52,    53,    58,    47,     0,    44,    27,    39,    36,     8,
      66,    32,    33,    34,    58,     7,    44,     8,    15,    38,
      39,     9,    66,     3,     4,    14,    47,    46,    47,    10,
      49,    18,    88,    49,    50,    63,    92,    58,    11,    67,
      68,     4,    95,    12,    88,    66,    74,    19,    92,    20,
      89,    95,     3,     4,    82,    83,    84,     3,     4,    39,
      85,    86,    87,    91,   120,    27,    13,    88,     8,    49,
     126,    92,    54,    94,    95,    18,   120,    16,    23,    36,
      14,     3,   126,    37,    40,    27,   125,    31,    39,    19,
      28,    40,    40,    39,   122,    46,    47,    21,    49,   120,
      22,    14,    25,    40,    26,   126,    26,    29,    30,    21,
      28,    33,    34,    35,    24,     3,    40,    41,    42,    43,
      44,    45,    27,    17,    28,    90,    48,   122,    43,    41,
      42,    43,    44,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    56,    57,     3,    75,     0,    56,     8,     7,
      58,    59,    60,    75,     8,     9,    15,    14,    59,    10,
      16,    17,    60,    59,    18,    11,     4,    12,    19,    22,
      26,    29,    30,    33,    34,    35,    48,    61,    62,    64,
      75,    20,     4,    38,    39,    46,    47,    49,    64,    66,
      68,    69,    70,    71,    72,    73,    75,    70,    27,    75,
      64,    65,    65,    39,    66,    13,     8,    54,    18,    16,
      73,    66,    70,     4,    39,    64,    21,    41,    42,    43,
      44,    45,    74,    49,    50,    51,    52,    53,    23,    36,
      37,    39,    27,    61,    31,    14,    66,    61,    66,    66,
      40,    40,    66,    66,    66,    66,    68,    68,    68,    61,
      70,    71,    66,    67,    61,    28,    75,    65,    19,    40,
      25,    63,    14,    40,    28,    26,    27,    61,    24,    67,
      70,    61,    28
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    57,    58,    58,    59,    59,    60,
      60,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    63,    63,    64,    64,    65,    65,    66,    66,
      66,    67,    67,    67,    68,    68,    68,    68,    69,    69,
      69,    69,    69,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    73,    73,    74,    74,    74,    74,    74,
      74,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,    12,     3,     8,     0,     3,     1,
       3,     3,     2,     3,     6,     5,     6,     7,     2,     2,
       1,     2,     0,     2,     4,     1,     1,     3,     1,     3,
       3,     0,     3,     1,     1,     3,     3,     3,     1,     2,
       1,     2,     3,     4,     4,     1,     3,     1,     3,     2,
       1,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1
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
#line 106 "mini_1.y" /* yacc.c:1646  */
    {printf("Program -> epsilon\n");}
#line 1369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 108 "mini_1.y" /* yacc.c:1646  */
    {printf("Program -> Function Program\n");}
#line 1375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 112 "mini_1.y" /* yacc.c:1646  */
    {printf("Function -> FUNCTION Ident SEMICOLON BEGIN_PARAMS Declarations END_PARAMS BEGIN_LOCALS Declarations END_LOCALS BEGIN_BODY Statements END_BODY\n");}
#line 1381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 116 "mini_1.y" /* yacc.c:1646  */
    {printf("Declaration -> Identifiers COLON INTEGER\n");}
#line 1387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 118 "mini_1.y" /* yacc.c:1646  */
    {printf("Declaration -> Identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER %d R_SQUARE_BRACKET OF INTEGER;\n", (yyvsp[-3].num));}
#line 1393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 121 "mini_1.y" /* yacc.c:1646  */
    {printf("Declarations -> epsilon\n");}
#line 1399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 123 "mini_1.y" /* yacc.c:1646  */
    {printf("Declarations -> Declaration SEMICOLON Declarations\n");}
#line 1405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 127 "mini_1.y" /* yacc.c:1646  */
    {printf("Identifiers -> Ident \n");}
#line 1411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 129 "mini_1.y" /* yacc.c:1646  */
    {printf("Identifiers -> Ident COMMA Identifiers\n");}
#line 1417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 132 "mini_1.y" /* yacc.c:1646  */
    {printf("Statements -> Statement SEMICOLON Statements\n");}
#line 1423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 134 "mini_1.y" /* yacc.c:1646  */
    {printf("Statements -> Statement SEMICOLON\n");}
#line 1429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 137 "mini_1.y" /* yacc.c:1646  */
    {printf("Statement -> Var ASSIGN Expression\n");}
#line 1435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 139 "mini_1.y" /* yacc.c:1646  */
    {printf("Statement -> IF BoolExp THEN Statements ElseStatement ENDIF\n");}
#line 1441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 141 "mini_1.y" /* yacc.c:1646  */
    {printf("Statement -> WHILE BoolExp BEGINLOOP Statements ENDLOOP\n");}
#line 1447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 143 "mini_1.y" /* yacc.c:1646  */
    {printf("Statement -> DO BEGINLOOP Statements ENDLOOP WHILE BoolExp\n");}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 145 "mini_1.y" /* yacc.c:1646  */
    {printf("Statement -> FOREACH Ident IN Ident BEGINLOOP Statements ENDLOOP\n");}
#line 1459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 147 "mini_1.y" /* yacc.c:1646  */
    {printf("Statement -> READ Vars\n");}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 149 "mini_1.y" /* yacc.c:1646  */
    {printf("Statement -> WRITE Vars\n");}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 151 "mini_1.y" /* yacc.c:1646  */
    {printf("Statement -> CONTINUE\n");}
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 153 "mini_1.y" /* yacc.c:1646  */
    {printf("Statement -> RETURN Expression\n");}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 156 "mini_1.y" /* yacc.c:1646  */
    {printf("ElseStatement -> epsilon\n");}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 158 "mini_1.y" /* yacc.c:1646  */
    {printf("ElseStatement -> ELSE Statements\n");}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 162 "mini_1.y" /* yacc.c:1646  */
    {printf("Var -> Ident  L_SQUARE_BRACKET Expression R_SQUARE_BRACKET\n");}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 164 "mini_1.y" /* yacc.c:1646  */
    {printf("Var -> Ident \n");}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 167 "mini_1.y" /* yacc.c:1646  */
    {printf("Vars -> Var\n");}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 169 "mini_1.y" /* yacc.c:1646  */
    {printf("Vars -> Var COMMA Vars\n");}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 173 "mini_1.y" /* yacc.c:1646  */
    {printf("Expression -> MultExp\n");}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 175 "mini_1.y" /* yacc.c:1646  */
    {printf("Expression -> MultExp ADD Expression\n");}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 177 "mini_1.y" /* yacc.c:1646  */
    {printf("Expression -> MultExp SUB Expression\n");}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 180 "mini_1.y" /* yacc.c:1646  */
    {printf("Expressions -> epsilon\n");}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 182 "mini_1.y" /* yacc.c:1646  */
    {printf("Expressions -> Expression COMMA Expressions\n");}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 184 "mini_1.y" /* yacc.c:1646  */
    {printf("Expressions -> Expression\n");}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 188 "mini_1.y" /* yacc.c:1646  */
    {printf("MultExp -> Term\n");}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 190 "mini_1.y" /* yacc.c:1646  */
    {printf("MultExp -> Term MULT MultExp\n");}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 192 "mini_1.y" /* yacc.c:1646  */
    {printf("MultExp -> Term DIV MultExp\n");}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 194 "mini_1.y" /* yacc.c:1646  */
    {printf("MultExp -> Term MOD MultExp\n");}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 198 "mini_1.y" /* yacc.c:1646  */
    {printf("Term -> Var\n");}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 200 "mini_1.y" /* yacc.c:1646  */
    {printf("Term -> SUB Var\n");}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 202 "mini_1.y" /* yacc.c:1646  */
    {printf("Term -> NUMBER %d\n", (yyvsp[0].num));}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 204 "mini_1.y" /* yacc.c:1646  */
    {printf("Term -> SUB NUMBER %d\n", (yyvsp[0].num));}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 206 "mini_1.y" /* yacc.c:1646  */
    {printf("Term -> L_PAREN Expression R_PAREN\n");}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 208 "mini_1.y" /* yacc.c:1646  */
    {printf("Term -> SUB L_PAREN Expression R_PAREN\n");}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 210 "mini_1.y" /* yacc.c:1646  */
    {printf("Term -> Ident L_PAREN Expressions R_PAREN\n");}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 214 "mini_1.y" /* yacc.c:1646  */
    {printf("bool_exp -> relation_exp\n");}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 216 "mini_1.y" /* yacc.c:1646  */
    {printf("bool_exp -> relation_and_exp OR bool_exp\n");}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 220 "mini_1.y" /* yacc.c:1646  */
    {printf("relation_and_exp -> relation_exp\n");}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 222 "mini_1.y" /* yacc.c:1646  */
    {printf("relation_and_exp -> relation_exp AND relation_and_exp\n");}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 226 "mini_1.y" /* yacc.c:1646  */
    {printf("relation_exp -> NOT relation_exp1\n");}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 228 "mini_1.y" /* yacc.c:1646  */
    {printf("relation_exp -> relation_exp1\n");}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 232 "mini_1.y" /* yacc.c:1646  */
    {printf("relation_exp -> Expression Comp Expression\n");}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 234 "mini_1.y" /* yacc.c:1646  */
    {printf("relation_exp -> TRUE\n");}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 236 "mini_1.y" /* yacc.c:1646  */
    {printf("relation_exp -> FALSE\n");}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 238 "mini_1.y" /* yacc.c:1646  */
    {printf("relation_exp -> L_PAREN BoolExp R_PAREN\n");}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 242 "mini_1.y" /* yacc.c:1646  */
    {printf("comp -> EQ\n");}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 244 "mini_1.y" /* yacc.c:1646  */
    {printf("comp -> NEQ\n");}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 246 "mini_1.y" /* yacc.c:1646  */
    {printf("comp -> LT\n");}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 248 "mini_1.y" /* yacc.c:1646  */
    {printf("comp -> GT\n");}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 250 "mini_1.y" /* yacc.c:1646  */
    {printf("comp -> LTE\n");}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 252 "mini_1.y" /* yacc.c:1646  */
    {printf("comp -> GTE\n");}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 256 "mini_1.y" /* yacc.c:1646  */
    {printf("Ident -> IDENT %s \n", (yyvsp[0].valIdent));}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1727 "y.tab.c" /* yacc.c:1646  */
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
#line 257 "mini_1.y" /* yacc.c:1906  */


		 
void yyerror(const char* s) {
  extern int lineNum;
  extern char* yytext;

  printf("ERROR: %s at symbol \"%s\" on line %d\n", s, yytext, lineNum);
  exit(1);
}

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
#line 1 "Compiler.y" /* yacc.c:339  */

	#define YYDEBUG 1
	#include<stdio.h>
	#include <stdlib.h>
	void yyerror(const char*);
	int yylex();

#line 74 "y.tab.c" /* yacc.c:339  */

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
    HASH = 258,
    INCLUDE = 259,
    DEFINE = 260,
    STDIO = 261,
    STDLIB = 262,
    MATH = 263,
    STRING = 264,
    TIME = 265,
    IDENTIFIER = 266,
    I_CONSTANT = 267,
    F_CONSTANT = 268,
    STRING_LITERAL = 269,
    SIZEOF = 270,
    PTR_OP = 271,
    INC_OP = 272,
    DEC_OP = 273,
    LE_OP = 274,
    GE_OP = 275,
    EQ_OP = 276,
    NE_OP = 277,
    AND_OP = 278,
    OR_OP = 279,
    MUL_ASSIGN = 280,
    DIV_ASSIGN = 281,
    MOD_ASSIGN = 282,
    ADD_ASSIGN = 283,
    SUB_ASSIGN = 284,
    LEFT_ASSIGN = 285,
    RIGHT_ASSIGN = 286,
    AND_ASSIGN = 287,
    XOR_ASSIGN = 288,
    OR_ASSIGN = 289,
    TYPEDEF_NAME = 290,
    TYPEDEF = 291,
    STATIC = 292,
    CONST = 293,
    CHAR = 294,
    SHORT = 295,
    INT = 296,
    LONG = 297,
    SIGNED = 298,
    UNSIGNED = 299,
    FLOAT = 300,
    DOUBLE = 301,
    VOID = 302,
    MAIN = 303,
    STRUCT = 304,
    IF = 305,
    ELSE = 306,
    FOR = 307,
    CONTINUE = 308,
    BREAK = 309,
    RETURN = 310
  };
#endif
/* Tokens.  */
#define HASH 258
#define INCLUDE 259
#define DEFINE 260
#define STDIO 261
#define STDLIB 262
#define MATH 263
#define STRING 264
#define TIME 265
#define IDENTIFIER 266
#define I_CONSTANT 267
#define F_CONSTANT 268
#define STRING_LITERAL 269
#define SIZEOF 270
#define PTR_OP 271
#define INC_OP 272
#define DEC_OP 273
#define LE_OP 274
#define GE_OP 275
#define EQ_OP 276
#define NE_OP 277
#define AND_OP 278
#define OR_OP 279
#define MUL_ASSIGN 280
#define DIV_ASSIGN 281
#define MOD_ASSIGN 282
#define ADD_ASSIGN 283
#define SUB_ASSIGN 284
#define LEFT_ASSIGN 285
#define RIGHT_ASSIGN 286
#define AND_ASSIGN 287
#define XOR_ASSIGN 288
#define OR_ASSIGN 289
#define TYPEDEF_NAME 290
#define TYPEDEF 291
#define STATIC 292
#define CONST 293
#define CHAR 294
#define SHORT 295
#define INT 296
#define LONG 297
#define SIGNED 298
#define UNSIGNED 299
#define FLOAT 300
#define DOUBLE 301
#define VOID 302
#define MAIN 303
#define STRUCT 304
#define IF 305
#define ELSE 306
#define FOR 307
#define CONTINUE 308
#define BREAK 309
#define RETURN 310

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

#line 235 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  360

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,     2,     2,     2,    73,    66,     2,
      58,    59,    67,    68,    65,    69,    62,    72,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    79,
      56,    78,    57,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,    75,    64,    70,     2,     2,     2,
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
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    41,    42,    43,    47,    48,    49,    50,
      51,    55,    56,    57,    58,    59,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    76,    77,    81,    82,
      83,    84,    85,    86,    90,    91,    92,    93,    94,    95,
      99,   100,   104,   105,   106,   107,   111,   112,   113,   117,
     118,   119,   120,   121,   125,   126,   127,   131,   132,   136,
     137,   141,   142,   146,   147,   151,   152,   156,   157,   161,
     162,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     178,   179,   183,   187,   188,   192,   193,   194,   195,   196,
     197,   201,   202,   206,   207,   211,   212,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   230,   231,
     232,   236,   237,   241,   242,   246,   247,   248,   249,   253,
     254,   258,   259,   260,   264,   265,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     286,   287,   288,   289,   293,   294,   298,   299,   300,   304,
     305,   309,   310,   314,   315,   316,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   344,   345,   346,
     350,   351,   352,   353,   357,   361,   362,   366,   367,   371,
     372,   373,   374,   378,   379,   383,   384,   388,   389,   393,
     394,   398,   399,   400,   401,   405,   406,   407,   408,   412,
     413,   417,   418,   419
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HASH", "INCLUDE", "DEFINE", "STDIO",
  "STDLIB", "MATH", "STRING", "TIME", "IDENTIFIER", "I_CONSTANT",
  "F_CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME",
  "TYPEDEF", "STATIC", "CONST", "CHAR", "SHORT", "INT", "LONG", "SIGNED",
  "UNSIGNED", "FLOAT", "DOUBLE", "VOID", "MAIN", "STRUCT", "IF", "ELSE",
  "FOR", "CONTINUE", "BREAK", "RETURN", "'<'", "'>'", "'('", "')'", "'['",
  "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "$accept",
  "headers", "libraries", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_specifier",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "declarator", "direct_declarator", "pointer",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "designation", "designator_list",
  "designator", "statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,    60,    62,    40,    41,
      91,    93,    46,   123,   125,    44,    38,    42,    43,    45,
     126,    33,    47,    37,    94,   124,    63,    58,    61,    59
};
# endif

#define YYPACT_NINF -222

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-222)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     344,   130,  -222,  -222,  -222,  1228,  -222,  -222,    -1,  -222,
    -222,  -222,  -222,  -222,  -222,    20,  -222,  -222,     3,  1228,
    1228,  -222,  1079,  -222,    12,   186,  -222,  -222,    51,   -35,
     137,  -222,    30,   -11,  -222,   -36,  -222,    42,    47,     2,
    -222,  -222,  -222,  -222,  -222,   253,  -222,  -222,   132,   137,
     137,   137,   274,  -222,     8,   135,    91,  -222,    30,  -222,
     820,  1132,   208,    47,  -222,  -222,  -222,  -222,  -222,    97,
     107,  1187,  -222,  -222,  -222,  -222,  1020,  -222,   -25,  -222,
     166,  -222,  -222,  -222,  -222,  -222,  -222,  -222,  1081,  1095,
    1095,   567,   642,  -222,  -222,  -222,  -222,  -222,  -222,  -222,
      99,   115,  1020,  -222,    78,   140,   110,   196,   181,   182,
     180,   234,    22,  -222,  -222,  -222,  -222,  -222,    11,   -20,
    -222,    53,   841,   731,  -222,   203,   204,  -222,   290,  -222,
    -222,  -222,  -222,  -222,     9,  -222,  1020,   567,  -222,   567,
    -222,  -222,  -222,    87,   -16,   212,  1020,   256,  -222,   164,
     820,    44,  -222,   262,  -222,  -222,   883,  1020,   287,  -222,
    -222,  -222,  -222,  -222,  -222,  -222,  -222,  -222,  1020,  -222,
    1020,  1020,  1020,  1020,  1020,  1020,  1020,  1020,  1020,  1020,
    1020,  1020,  1020,  1020,  1020,  1020,  1020,   510,   703,  -222,
      41,  -222,    95,  -222,  1228,  -222,   288,  1020,   239,  1020,
    -222,   245,   249,  -222,  -222,   264,   232,   261,   439,  -222,
    -222,    24,  -222,  -222,  -222,   360,  -222,  -222,  -222,  -222,
    -222,  -222,   265,   291,  -222,  1020,  1157,   111,  -222,   902,
     285,  -222,  -222,   606,  -222,  -222,  -222,  -222,  -222,   103,
    -222,    66,  -222,  -222,  -222,  -222,  -222,    78,    78,   140,
     140,   140,   140,   110,   110,   196,   181,   182,   180,   234,
       7,  -222,   131,   292,   917,   745,  -222,   294,   301,    95,
    1203,   717,  -222,  -222,   302,  -222,   303,  -222,  -222,   423,
    -222,  -222,  -222,    35,  -222,  -222,  -222,   286,   286,  -222,
     642,  -222,  -222,  -222,  -222,   820,  -222,  1020,  -222,  1020,
    -222,  -222,  1020,   304,  1020,  -222,   305,  -222,  -222,  -222,
     147,   978,   806,  -222,   306,   307,  -222,  -222,   525,   525,
    -222,   174,  -222,  -222,  -222,   309,  -222,   315,  -222,  -222,
    1020,   331,  1020,  -222,   333,  -222,  -222,   992,  1006,  -222,
     628,  -222,  -222,   347,  -222,   349,  -222,   462,   148,   462,
     151,  -222,  -222,  -222,  -222,   462,  -222,   462,  -222,  -222
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   107,    95,    96,    90,    98,    99,   100,   101,
     104,   105,   102,   103,    97,     0,   213,   212,     0,    86,
      88,   106,     0,   209,     0,     0,   100,    89,     0,   110,
       0,   126,     0,   143,    83,     0,    91,    94,   125,     0,
      85,    87,     1,   210,     2,     0,     4,     5,     0,     0,
     118,   116,     0,   111,     0,     0,   141,   142,     0,    84,
       0,     0,     0,   124,     6,     7,     8,     9,    10,     0,
       0,     0,   117,   115,   108,   112,     0,   113,     0,   119,
     123,   127,   140,    92,    11,    12,    13,    14,     0,     0,
       0,     0,     0,    34,    35,    36,    37,    38,    39,    16,
      28,    40,     0,    42,    46,    49,    54,    57,    59,    61,
      63,    65,    67,    69,   179,    93,   149,   138,   148,     0,
     144,     0,     0,     0,   128,    35,     0,     3,     0,   211,
     109,    40,    82,   121,     0,   114,     0,     0,    32,     0,
      29,    30,    80,     0,   152,     0,     0,     0,   181,     0,
       0,     0,   185,     0,    22,    23,     0,     0,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    71,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
     154,   147,   155,   137,     0,   139,     0,     0,     0,     0,
     135,    35,     0,   129,   136,     0,     0,     0,     0,   193,
     199,     0,   197,   198,   189,     0,   195,   190,   191,   192,
     120,   122,     0,     0,    15,     0,     0,   154,   151,     0,
       0,   188,   177,     0,   180,   184,   186,    21,    18,     0,
      26,     0,    20,    70,    43,    44,    45,    47,    48,    52,
      53,    50,    51,    55,    56,    58,    60,    62,    64,    66,
       0,   173,     0,     0,     0,     0,   157,    35,     0,   153,
       0,     0,   145,   150,     0,   131,     0,   132,   134,     0,
     205,   206,   207,     0,   200,   194,   196,    33,     0,    81,
       0,    41,   187,   178,   183,     0,    19,     0,    17,     0,
     174,   156,     0,     0,     0,   163,     0,   158,   164,   175,
       0,     0,     0,   165,    35,     0,   130,   133,     0,     0,
     208,     0,   182,    27,    68,     0,   160,     0,   162,   176,
       0,     0,     0,   171,     0,   166,   172,     0,     0,    24,
       0,   159,   161,     0,   168,     0,   169,     0,     0,     0,
       0,    25,   167,   170,   203,     0,   201,     0,   204,   202
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -222,  -222,  -222,  -222,  -222,  -222,   112,  -222,   -91,    67,
      56,    70,   171,   235,   233,   236,   237,  -222,   -72,   -60,
    -222,   -84,   -10,  -123,    -2,  -222,   361,  -222,   -14,  -222,
     372,   -37,   -26,  -222,   298,   -24,   -30,   -23,   -55,   231,
    -222,   -89,   -95,  -169,   -59,   143,  -221,  -222,   293,  -160,
     373,  -222,   227,  -186,  -222,  -222,  -222,   424
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    69,    99,   100,   239,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   142,
     168,   211,   133,    17,    18,    35,    36,    19,    20,    21,
      52,    53,    54,    78,    79,    37,    38,    39,   262,   120,
     121,   145,   263,   192,   148,   149,   150,   151,   152,   213,
     214,   215,   216,   217,   218,   219,    22,    23
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     114,   115,   126,    27,   132,   212,   119,   143,    55,    63,
      57,   169,   295,    31,    31,    75,    51,    40,    41,    31,
      31,   269,    31,   191,    72,    73,    44,    56,    49,    58,
      80,    29,   114,    82,    75,    51,    51,    51,    51,   193,
     134,    31,   226,    59,   188,   194,   185,    28,   222,   228,
     223,    33,    31,   143,   135,   143,    33,    51,   269,   118,
      32,    32,   198,   202,   132,   144,    32,    32,    45,   187,
      33,   188,   225,   241,   132,    33,    33,    51,    33,   244,
     245,   246,    34,    30,   299,    76,    76,    77,    32,   225,
     114,   234,   212,   319,   189,   190,   240,    33,   186,   187,
     225,   188,   260,   284,   146,    61,   147,    62,   243,    48,
      80,   144,   195,   144,   320,   153,   154,   155,   196,   295,
      60,   227,   235,    51,   283,    51,   221,   298,   268,   175,
     176,   225,   337,   338,    24,    25,   230,   274,   291,   276,
     159,   160,   161,   162,   163,   170,   224,   164,   165,   166,
     171,   172,   225,   270,   127,   271,   318,   156,    33,   157,
      63,   158,   296,    55,   190,   289,   177,   178,   297,   226,
     128,   188,     2,   114,   294,    50,     6,     7,    26,     9,
      10,    11,    12,    13,    14,   118,    15,   354,   131,   356,
     300,    70,   118,   167,    81,   358,   194,   359,    46,    47,
     138,   140,   141,   227,   303,   306,   329,   355,   173,   174,
     357,   315,   194,   225,   131,   310,   225,   179,   180,    84,
      85,    86,    87,    88,   118,    89,    90,   324,   232,   233,
     114,   249,   250,   251,   252,   114,   322,   323,   339,   340,
     247,   248,   325,   136,   327,   122,   123,   181,   131,   253,
     254,   331,   334,   348,   350,   183,   182,   184,   131,    64,
      65,    66,    67,    68,   203,   204,    91,   231,   118,   124,
     343,   229,   345,   237,    93,   125,    95,    96,    97,    98,
     114,   294,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   242,   273,
     275,    84,    85,    86,    87,    88,   277,    89,    90,     2,
     278,   280,    50,     6,     7,    26,     9,    10,    11,    12,
      13,    14,   279,    15,   287,     2,     3,     4,     5,     6,
       7,    26,     9,    10,    11,    12,    13,    14,    74,    15,
     281,   131,   205,   206,   207,   208,   292,     1,    91,   290,
     288,   301,   255,   128,   209,   307,    93,    94,    95,    96,
      97,    98,   308,   316,   317,   326,   328,   335,   336,   210,
     341,    84,    85,    86,    87,    88,   342,    89,    90,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,   344,    15,   346,     2,     3,     4,     5,     6,
       7,    26,     9,    10,    11,    12,    13,    14,   352,    15,
     353,   131,   205,   206,   207,   208,   257,   256,    91,    83,
     258,    71,   259,   128,   285,   272,    93,    94,    95,    96,
      97,    98,   220,   321,    84,    85,    86,    87,    88,   210,
      89,    90,   286,   129,   236,     0,    43,     0,     0,     0,
      84,    85,    86,    87,    88,     0,    89,    90,     2,     3,
       4,     5,     6,     7,    26,     9,    10,    11,    12,    13,
      14,     0,    15,    84,    85,    86,    87,    88,     0,    89,
      90,    91,     0,     0,     0,     0,     0,     0,     0,    93,
      94,    95,    96,    97,    98,     0,     0,    91,     0,     0,
       0,     0,   210,     0,     0,    93,    94,    95,    96,    97,
      98,     0,     0,     0,   205,   206,   207,   208,   282,     0,
      91,    31,     0,     0,     0,   128,     0,     0,    93,    94,
      95,    96,    97,    98,     0,     0,    84,    85,    86,    87,
      88,   210,    89,    90,     0,     2,     3,     4,     5,     6,
       7,    26,     9,    10,    11,    12,    13,    14,     0,    15,
       0,     0,     0,     0,     0,     0,     0,     0,   187,   261,
     188,     0,     0,     0,     0,     0,     0,    33,    84,    85,
      86,    87,    88,    91,    89,    90,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,    98,     0,     0,     0,
       0,     0,     2,     0,   210,    50,     6,     7,    26,     9,
      10,    11,    12,    13,    14,     0,    15,    84,    85,    86,
      87,    88,     0,    89,    90,    91,     0,     0,     0,     0,
       0,     0,     0,    93,    94,    95,    96,    97,    98,    84,
      85,    86,    87,    88,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    84,    85,    86,    87,    88,     0,    89,
      90,     0,     0,     0,    91,     0,   146,     0,   147,    92,
     293,     0,    93,    94,    95,    96,    97,    98,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,   146,     0,
     147,    92,   351,     0,    93,    94,    95,    96,    97,    98,
      91,     0,   146,     0,   147,    92,     0,     0,    93,    94,
      95,    96,    97,    98,    84,    85,    86,    87,    88,     0,
      89,    90,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,     0,    89,    90,     0,     0,     0,     0,
     264,   265,    84,    85,    86,    87,    88,     0,    89,    90,
       0,     0,     0,     0,   311,   312,    84,    85,    86,    87,
      88,    91,    89,    90,   266,     0,     0,     0,   199,    93,
     267,    95,    96,    97,    98,    91,     0,     0,   313,     0,
       0,     0,   304,    93,   314,    95,    96,    97,    98,    91,
       0,     0,   200,     0,     0,     0,     0,    93,   201,    95,
      96,    97,    98,    91,     0,     0,   305,     0,     0,     0,
       0,    93,    94,    95,    96,    97,    98,    84,    85,    86,
      87,    88,     0,    89,    90,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,     0,    89,    90,     0,
       0,     0,     0,   332,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,     0,    89,    90,
       0,     0,     0,     0,    91,     0,     0,   333,     0,     0,
       0,     0,    93,    94,    95,    96,    97,    98,    91,   197,
       0,     0,     0,    92,     0,     0,    93,    94,    95,    96,
      97,    98,     0,     0,    84,    85,    86,    87,    88,    91,
      89,    90,     0,     0,     0,     0,     0,    93,    94,    95,
      96,    97,    98,    84,    85,    86,    87,    88,     0,    89,
      90,     0,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,     0,    89,    90,     0,     0,     0,     0,
       0,    91,   238,     0,     0,     0,     0,     0,     0,    93,
      94,    95,    96,    97,    98,   302,     0,     0,     0,     0,
      91,     0,     0,     0,     0,   290,     0,     0,    93,    94,
      95,    96,    97,    98,     0,    91,     0,     0,     0,     0,
       0,     0,     0,    93,    94,    95,    96,    97,    98,    84,
      85,    86,    87,    88,     0,    89,    90,     0,     0,     0,
       0,     0,     0,    84,    85,    86,    87,    88,     0,    89,
      90,     0,     0,     0,     0,     0,   330,    84,    85,    86,
      87,    88,     0,    89,    90,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    91,    89,    90,     0,
       0,     0,     0,     0,    93,    94,    95,    96,    97,    98,
      91,   347,     0,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    97,    98,    91,   349,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,    97,    98,    91,    42,
       0,     0,     1,     0,     0,     0,    93,    94,    95,    96,
      97,    98,    84,    85,    86,    87,    88,     0,    89,    90,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,     0,    89,    90,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   137,
       0,     0,     0,   116,     0,     0,     0,    93,    94,    95,
      96,    97,    98,   139,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,    98,     2,     3,     4,
       5,     6,     7,    26,     9,    10,    11,    12,    13,    14,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     2,     3,     4,     5,     6,     7,    26,     9,
      10,    11,    12,    13,    14,     0,    15,     0,     0,     0,
       0,     0,     0,     0,     0,   226,   261,   188,     0,     0,
       0,     0,     2,     0,    33,    50,     6,     7,    26,     9,
      10,    11,    12,    13,    14,     0,    15,     0,     2,     3,
       4,     5,     6,     7,    26,     9,    10,    11,    12,    13,
      14,   130,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   309,     2,     3,     4,     5,     6,     7,    26,
       9,    10,    11,    12,    13,    14,     0,    15
};

static const yytype_int16 yycheck[] =
{
      60,    60,    62,     5,    76,   128,    61,    91,    32,    39,
      33,   102,   233,    11,    11,    52,    30,    19,    20,    11,
      11,   190,    11,   118,    50,    51,    14,    38,    63,    65,
      54,    11,    92,    56,    71,    49,    50,    51,    52,    59,
      65,    11,    58,    79,    60,    65,    24,    48,   137,   144,
     139,    67,    11,   137,    79,   139,    67,    71,   227,    61,
      58,    58,   122,   123,   136,    91,    58,    58,    56,    58,
      67,    60,    65,   157,   146,    67,    67,    91,    67,   170,
     171,   172,    79,    63,    77,    77,    77,    79,    58,    65,
     150,   150,   215,   279,   118,   118,   156,    67,    76,    58,
      65,    60,   186,    79,    60,    58,    62,    60,   168,    58,
     134,   137,    59,   139,    79,    16,    17,    18,    65,   340,
      78,   144,    78,   137,   208,   139,   136,    61,   188,    19,
      20,    65,   318,   319,     4,     5,   146,   197,   229,   199,
      25,    26,    27,    28,    29,    67,    59,    32,    33,    34,
      72,    73,    65,    58,    57,    60,   279,    58,    67,    60,
     190,    62,    59,   187,   187,   225,    56,    57,    65,    58,
      63,    60,    35,   233,   233,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   187,    49,   347,    76,   349,
      59,    59,   194,    78,    59,   355,    65,   357,    12,    13,
      88,    89,    90,   226,   264,   265,    59,    59,    68,    69,
      59,   271,    65,    65,   102,   270,    65,    21,    22,    11,
      12,    13,    14,    15,   226,    17,    18,   299,    64,    65,
     290,   175,   176,   177,   178,   295,   295,   297,    64,    65,
     173,   174,   302,    77,   304,    37,    38,    66,   136,   179,
     180,   311,   312,   337,   338,    75,    74,    23,   146,     6,
       7,     8,     9,    10,    61,    61,    58,    11,   270,    61,
     330,    59,   332,    11,    66,    67,    68,    69,    70,    71,
     340,   340,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    11,    11,
      61,    11,    12,    13,    14,    15,    61,    17,    18,    35,
      61,    79,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    58,    49,    59,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    64,    49,
      79,   229,    52,    53,    54,    55,    61,     3,    58,    63,
      59,    59,   181,    63,    64,    61,    66,    67,    68,    69,
      70,    71,    61,    61,    61,    61,    61,    61,    61,    79,
      61,    11,    12,    13,    14,    15,    61,    17,    18,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    61,    49,    61,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    61,    49,
      61,   299,    52,    53,    54,    55,   183,   182,    58,    58,
     184,    49,   185,    63,    64,   194,    66,    67,    68,    69,
      70,    71,   134,   290,    11,    12,    13,    14,    15,    79,
      17,    18,   215,    70,   151,    -1,    22,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    -1,    17,    18,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    11,    12,    13,    14,    15,    -1,    17,
      18,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    52,    53,    54,    55,    79,    -1,
      58,    11,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      68,    69,    70,    71,    -1,    -1,    11,    12,    13,    14,
      15,    79,    17,    18,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    67,    11,    12,
      13,    14,    15,    58,    17,    18,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    79,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    11,    12,    13,
      14,    15,    -1,    17,    18,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    11,
      12,    13,    14,    15,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    -1,    17,
      18,    -1,    -1,    -1,    58,    -1,    60,    -1,    62,    63,
      64,    -1,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    60,    -1,
      62,    63,    64,    -1,    66,    67,    68,    69,    70,    71,
      58,    -1,    60,    -1,    62,    63,    -1,    -1,    66,    67,
      68,    69,    70,    71,    11,    12,    13,    14,    15,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    -1,    17,    18,    -1,    -1,    -1,    -1,
      37,    38,    11,    12,    13,    14,    15,    -1,    17,    18,
      -1,    -1,    -1,    -1,    37,    38,    11,    12,    13,    14,
      15,    58,    17,    18,    61,    -1,    -1,    -1,    37,    66,
      67,    68,    69,    70,    71,    58,    -1,    -1,    61,    -1,
      -1,    -1,    37,    66,    67,    68,    69,    70,    71,    58,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    58,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    11,    12,    13,
      14,    15,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    -1,    17,    18,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    -1,    17,    18,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    58,    38,
      -1,    -1,    -1,    63,    -1,    -1,    66,    67,    68,    69,
      70,    71,    -1,    -1,    11,    12,    13,    14,    15,    58,
      17,    18,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    11,    12,    13,    14,    15,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    -1,    17,    18,    -1,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    38,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    67,
      68,    69,    70,    71,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    11,
      12,    13,    14,    15,    -1,    17,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    38,    11,    12,    13,
      14,    15,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    58,    17,    18,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    58,     0,
      -1,    -1,     3,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,    11,    12,    13,    14,    15,    -1,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    -1,    17,    18,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    11,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,
      -1,    -1,    35,    -1,    67,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    64,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    49,    81,   103,   104,   107,
     108,   109,   136,   137,     4,     5,    41,   104,    48,    11,
      63,    11,    58,    67,    79,   105,   106,   115,   116,   117,
     104,   104,     0,   137,    14,    56,    12,    13,    58,    63,
      38,   108,   110,   111,   112,   115,    38,   117,    65,    79,
      78,    58,    60,   116,     6,     7,     8,     9,    10,    82,
      59,   110,   112,   112,    64,   111,    77,    79,   113,   114,
     115,    59,   117,   106,    11,    12,    13,    14,    15,    17,
      18,    58,    63,    66,    67,    68,    69,    70,    71,    83,
      84,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   124,    11,    59,   104,   118,
     119,   120,    37,    38,    61,    67,    99,    57,    63,   130,
      64,    86,    98,   102,    65,    79,    77,    58,    86,    58,
      86,    86,    99,   101,   112,   121,    60,    62,   124,   125,
     126,   127,   128,    16,    17,    18,    58,    60,    62,    25,
      26,    27,    28,    29,    32,    33,    34,    78,   100,    88,
      67,    72,    73,    68,    69,    19,    20,    56,    57,    21,
      22,    66,    74,    75,    23,    24,    76,    58,    60,   115,
     117,   122,   123,    59,    65,    59,    65,    38,    99,    37,
      61,    67,    99,    61,    61,    52,    53,    54,    55,    64,
      79,   101,   103,   129,   130,   131,   132,   133,   134,   135,
     114,   102,   121,   121,    59,    65,    58,   117,   122,    59,
     102,    11,    64,    65,   124,    78,   128,    11,    59,    85,
      99,   101,    11,    99,    88,    88,    88,    89,    89,    90,
      90,    90,    90,    91,    91,    92,    93,    94,    95,    96,
     101,    59,   118,   122,    37,    38,    61,    67,    99,   123,
      58,    60,   119,    11,    99,    61,    99,    61,    61,    58,
      79,    79,    79,   101,    79,    64,   132,    59,    59,    99,
      63,    88,    61,    64,   124,   126,    59,    65,    61,    77,
      59,    59,    38,    99,    37,    61,    99,    61,    61,    59,
     118,    37,    38,    61,    67,    99,    61,    61,   103,   133,
      79,   125,   124,    99,    98,    99,    61,    99,    61,    59,
      38,    99,    37,    61,    99,    61,    61,   133,   133,    64,
      65,    61,    61,    99,    61,    99,    61,    59,   101,    59,
     101,    64,    61,    61,   129,    59,   129,    59,   129,   129
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    81,    81,    81,    82,    82,    82,    82,
      82,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    85,    86,    86,
      86,    86,    86,    86,    87,    87,    87,    87,    87,    87,
      88,    88,    89,    89,    89,    89,    90,    90,    90,    91,
      91,    91,    91,    91,    92,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     101,   101,   102,   103,   103,   104,   104,   104,   104,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     109,   110,   110,   111,   111,   112,   112,   112,   112,   113,
     113,   114,   114,   114,   115,   115,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   117,   117,   118,   118,   119,   119,   119,   120,
     120,   121,   121,   122,   122,   122,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   124,   124,   124,
     125,   125,   125,   125,   126,   127,   127,   128,   128,   129,
     129,   129,   129,   130,   130,   131,   131,   132,   132,   133,
     133,   134,   134,   134,   134,   135,   135,   135,   135,   136,
     136,   137,   137,   137
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     5,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     6,     7,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     3,     2,     1,     2,     1,     2,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     5,
       2,     1,     2,     2,     3,     2,     1,     2,     1,     1,
       3,     2,     3,     1,     2,     1,     1,     3,     3,     4,
       6,     5,     5,     6,     5,     4,     4,     4,     3,     4,
       3,     2,     2,     1,     1,     3,     2,     2,     1,     1,
       3,     2,     1,     2,     1,     1,     3,     2,     3,     5,
       4,     5,     4,     3,     3,     3,     4,     6,     5,     5,
       6,     4,     4,     2,     3,     3,     4,     3,     4,     1,
       2,     1,     4,     3,     2,     1,     2,     3,     2,     1,
       1,     1,     1,     2,     3,     1,     2,     1,     1,     1,
       2,     6,     7,     6,     7,     2,     2,     2,     3,     1,
       2,     5,     1,     1
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
      
#line 1771 "y.tab.c" /* yacc.c:1646  */
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
#line 422 "Compiler.y" /* yacc.c:1906  */


void yyerror(const char *str)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", str);
}

int main(){

	if(!yyparse())
		printf("Successful\n");
	else
		printf("Unsuccessful\n");
	
	return 0;
}






















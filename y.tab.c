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
    IDENTIFIER = 258,
    I_CONSTANT = 259,
    F_CONSTANT = 260,
    STRING_LITERAL = 261,
    SIZEOF = 262,
    PTR_OP = 263,
    INC_OP = 264,
    DEC_OP = 265,
    LE_OP = 266,
    GE_OP = 267,
    EQ_OP = 268,
    NE_OP = 269,
    AND_OP = 270,
    OR_OP = 271,
    MUL_ASSIGN = 272,
    DIV_ASSIGN = 273,
    MOD_ASSIGN = 274,
    ADD_ASSIGN = 275,
    SUB_ASSIGN = 276,
    LEFT_ASSIGN = 277,
    RIGHT_ASSIGN = 278,
    AND_ASSIGN = 279,
    XOR_ASSIGN = 280,
    OR_ASSIGN = 281,
    TYPEDEF_NAME = 282,
    TYPEDEF = 283,
    STATIC = 284,
    INLINE = 285,
    CONST = 286,
    CHAR = 287,
    SHORT = 288,
    INT = 289,
    LONG = 290,
    SIGNED = 291,
    UNSIGNED = 292,
    FLOAT = 293,
    DOUBLE = 294,
    VOID = 295,
    STRUCT = 296,
    IF = 297,
    ELSE = 298,
    FOR = 299,
    CONTINUE = 300,
    BREAK = 301,
    RETURN = 302
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define I_CONSTANT 259
#define F_CONSTANT 260
#define STRING_LITERAL 261
#define SIZEOF 262
#define PTR_OP 263
#define INC_OP 264
#define DEC_OP 265
#define LE_OP 266
#define GE_OP 267
#define EQ_OP 268
#define NE_OP 269
#define AND_OP 270
#define OR_OP 271
#define MUL_ASSIGN 272
#define DIV_ASSIGN 273
#define MOD_ASSIGN 274
#define ADD_ASSIGN 275
#define SUB_ASSIGN 276
#define LEFT_ASSIGN 277
#define RIGHT_ASSIGN 278
#define AND_ASSIGN 279
#define XOR_ASSIGN 280
#define OR_ASSIGN 281
#define TYPEDEF_NAME 282
#define TYPEDEF 283
#define STATIC 284
#define INLINE 285
#define CONST 286
#define CHAR 287
#define SHORT 288
#define INT 289
#define LONG 290
#define SIGNED 291
#define UNSIGNED 292
#define FLOAT 293
#define DOUBLE 294
#define VOID 295
#define STRUCT 296
#define IF 297
#define ELSE 298
#define FOR 299
#define CONTINUE 300
#define BREAK 301
#define RETURN 302

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

#line 219 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1408

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  358

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,     2,     2,     2,    63,    56,     2,
      48,    49,    57,    58,    55,    59,    52,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,    71,
      64,    70,    65,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,    67,    54,    60,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    40,    41,    42,    43,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    60,    61,    65,
      66,    67,    68,    69,    70,    74,    75,    76,    77,    78,
      79,    83,    84,    88,    89,    90,    91,    95,    96,    97,
     101,   102,   103,   104,   105,   109,   110,   111,   115,   116,
     120,   121,   125,   126,   130,   131,   135,   136,   140,   141,
     145,   146,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   162,   163,   167,   171,   172,   176,   177,   178,   179,
     180,   181,   182,   183,   187,   188,   192,   193,   197,   198,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   216,   217,   218,   222,   223,   227,   228,   232,   233,
     234,   235,   239,   240,   244,   245,   246,   250,   251,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   272,   273,   274,   275,   279,   280,   284,
     285,   286,   290,   291,   295,   296,   300,   301,   302,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     330,   331,   332,   336,   337,   338,   339,   343,   347,   348,
     352,   353,   357,   358,   359,   360,   361,   365,   366,   370,
     371,   375,   376,   380,   381,   385,   386,   390,   391,   392,
     393,   397,   398,   399,   400,   404,   405,   409,   410,   414,
     415,   419,   420
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME", "TYPEDEF",
  "STATIC", "INLINE", "CONST", "CHAR", "SHORT", "INT", "LONG", "SIGNED",
  "UNSIGNED", "FLOAT", "DOUBLE", "VOID", "STRUCT", "IF", "ELSE", "FOR",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "'{'",
  "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression",
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
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,    40,    41,
      91,    93,    46,   123,   125,    44,    38,    42,    43,    45,
     126,    33,    47,    37,    60,    62,    94,   124,    63,    58,
      61,    59
};
# endif

#define YYPACT_NINF -257

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-257)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1221,  -257,  -257,  -257,  1221,  1221,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,    13,  -257,    27,  1221,  1221,
    -257,  1238,  -257,  -257,  -257,  -257,    54,   310,  -257,    30,
     -13,  -257,   -21,  -257,  1194,   114,    34,  -257,  -257,  -257,
    -257,   310,   310,   310,  1280,  -257,    60,    65,    62,  -257,
      30,  -257,   267,   797,  -257,    27,  -257,  1332,  1171,   576,
     114,  1304,  -257,  -257,  -257,  -257,  1038,  -257,   -20,  -257,
      58,  -257,  -257,  -257,    64,  -257,  -257,  -257,  -257,  1068,
    1097,  1097,   106,   139,   138,   148,   196,   503,  -257,  -257,
    -257,  -257,  -257,  -257,  -257,  -257,  -257,   213,   172,  1038,
    -257,   103,   210,    48,   181,   175,    80,   161,   189,    33,
    -257,  -257,    -7,  -257,  -257,  -257,   326,  -257,  -257,  -257,
    -257,  -257,   605,  -257,  -257,  -257,  -257,  -257,  -257,    17,
      77,  -257,    88,   829,   704,  -257,   192,   197,  -257,  -257,
    -257,  -257,    28,  -257,  1038,   503,  -257,   503,  -257,  -257,
    1038,   385,  -257,  -257,  -257,     6,    90,    -5,   201,   238,
    -257,  -257,   858,  1038,   259,  -257,  -257,  -257,  -257,  -257,
    -257,  -257,  -257,  -257,  1038,  -257,  1038,  1038,  1038,  1038,
    1038,  1038,  1038,  1038,  1038,  1038,  1038,  1038,  1038,  1038,
    1038,  1038,  1038,  1038,  -257,  -257,  -257,  1038,   261,  -257,
     233,   797,    53,  -257,  1132,   638,  -257,   108,  -257,   136,
    -257,  1221,  -257,   272,  1038,   227,  1038,  -257,   240,   271,
    -257,  -257,  -257,  -257,   285,   290,    98,   444,   444,  -257,
    -257,  1253,   166,  -257,   888,  -257,  -257,   158,  -257,   100,
    -257,  -257,  -257,  -257,  -257,   103,   103,   210,   210,   210,
     210,    48,    48,   181,   175,    80,   161,   189,    75,  -257,
     289,  -257,  -257,   517,  -257,  -257,  -257,  -257,   177,   303,
     919,   737,  -257,   318,   324,   136,  1359,   671,  -257,  -257,
     325,  -257,   327,  -257,  -257,   257,   257,   425,   948,   978,
     605,  -257,  -257,  1038,  -257,  1038,  -257,  -257,  -257,   797,
    -257,  -257,  1038,   330,  1038,  -257,   342,  -257,  -257,  -257,
     178,  1009,   770,  -257,   345,   347,  -257,  -257,   334,   425,
     190,   425,   211,   235,  -257,  -257,  -257,   348,  -257,   349,
    -257,  -257,  1038,   350,  1038,  -257,   351,  -257,  -257,   425,
    -257,   425,  -257,   425,  -257,   543,  -257,  -257,   352,  -257,
     353,  -257,  -257,  -257,  -257,  -257,  -257,  -257
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   100,    88,    89,    83,    81,    91,    92,    93,    94,
      97,    98,    95,    96,    90,     0,   208,     0,    77,    79,
      99,     0,   205,   207,    82,    80,   103,     0,   119,     0,
     136,    74,     0,    84,    87,   118,     0,    76,    78,     1,
     206,     0,   111,   109,     0,   104,     0,     0,   134,   135,
       0,    75,     0,     0,   211,     0,   210,     0,     0,     0,
     117,     0,   110,   108,   101,   105,     0,   106,     0,   112,
     116,   120,   133,    85,    87,     2,     3,     4,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,    25,
      26,    27,    28,    29,    30,   193,     7,    19,    31,     0,
      33,    37,    40,    45,    48,    50,    52,    54,    56,    58,
      60,    71,     0,   191,   192,   182,     0,   189,   183,   184,
     185,   186,     0,   172,    86,   212,   209,   142,   131,   141,
       0,   137,     0,     0,     0,   121,    26,     0,   102,    31,
      73,   114,     0,   107,     0,     0,    23,     0,    20,    21,
       0,     0,   201,   202,   203,     0,     0,   145,     0,     0,
      13,    14,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    62,     0,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   194,   188,   190,     0,     0,   174,
       0,     0,     0,   178,     0,     0,   139,   147,   140,   148,
     130,     0,   132,     0,     0,     0,     0,   128,    26,     0,
     122,   129,   113,   115,     0,     0,     0,     0,     0,   204,
       6,     0,   147,   144,     0,    12,     9,     0,    17,     0,
      11,    61,    34,    35,    36,    38,    39,    43,    44,    41,
      42,    46,    47,    49,    51,    53,    55,    57,     0,    72,
       0,   181,   170,     0,   173,   177,   179,   166,     0,     0,
       0,     0,   150,    26,     0,   146,     0,     0,   138,   143,
       0,   124,     0,   125,   127,    24,     0,     0,     0,     0,
       0,    32,    10,     0,     8,     0,   180,   171,   176,     0,
     167,   149,     0,     0,     0,   156,     0,   151,   157,   168,
       0,     0,     0,   158,    26,     0,   123,   126,   196,     0,
       0,     0,     0,     0,    18,    59,   175,     0,   153,     0,
     155,   169,     0,     0,     0,   164,     0,   159,   165,     0,
     199,     0,   197,     0,    15,     0,   152,   154,     0,   161,
       0,   162,   195,   200,   198,    16,   160,   163
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -257,  -257,  -257,  -257,    -9,  -257,   -84,   137,   101,   133,
     218,   219,   217,   220,   236,  -257,   -61,   -53,  -257,   -59,
    -118,   -10,     4,  -257,   358,  -257,    12,  -257,   368,    81,
     -29,  -257,   269,   -14,   -24,   -19,   -56,   225,  -257,    91,
    -119,  -186,   -52,   147,  -256,  -257,   237,  -219,   -17,  -257,
     322,  -132,  -257,  -257,  -257,  -257,   419,  -257,  -257
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    96,    97,   237,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   174,   112,
     141,    16,    55,    32,    33,    18,    19,    20,    44,    45,
      46,    68,    69,    47,    35,    36,   268,   131,   132,   158,
     269,   209,   199,   200,   201,   202,   203,   114,   115,   116,
     117,   118,   119,   120,   121,    21,    22,    23,    57
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     123,   124,   130,    34,    17,   140,   137,   299,    24,    25,
     208,    49,    60,    62,    63,   175,    26,    56,    48,   228,
      28,   275,    37,    38,    54,    17,   223,   155,   156,    72,
      28,    28,    70,    28,    50,   142,    74,    28,   233,    43,
     126,    74,   113,   231,    30,   205,   275,   125,   193,   191,
      51,   143,    30,    43,    43,    43,    43,   139,   157,   181,
     182,   193,   129,    28,   194,   204,    27,   205,   318,   123,
     146,   148,   149,    43,    30,    29,    29,   229,    29,   260,
     215,   219,    29,   140,    30,    30,   156,    30,   156,   299,
     139,   226,   242,   243,   244,   288,   289,    66,    31,    43,
     340,   192,   342,   197,   239,   198,   113,    41,    29,   238,
     207,    28,   183,   184,    71,   206,   157,    30,   157,    30,
     352,   241,   353,   265,   354,    65,   210,   144,    70,    66,
     193,    67,   211,   258,    53,   139,   140,   212,   232,   230,
     259,   227,    65,   213,   295,   193,   188,   287,   123,   264,
     291,   294,   274,   193,   150,   193,   204,    43,   205,    43,
     176,   280,    58,   282,    59,   177,   178,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,    60,   276,   207,   277,   151,   139,   165,
     166,   167,   168,   169,   185,   186,   170,   171,   172,    75,
      76,    77,    78,    79,   190,    80,    81,   292,   129,   152,
     123,   298,   232,   293,   231,   129,   205,   303,   306,   153,
     310,   159,   160,   161,   315,   139,   300,   331,   189,   320,
     322,   187,   211,   211,   325,   129,   224,   123,   225,   341,
     324,   235,   173,   220,    87,   193,   123,   326,   221,   327,
     234,   329,    89,    90,    91,    92,    93,    94,   333,   336,
     343,   162,   240,   163,   261,   164,   193,   154,   179,   180,
      75,    76,    77,    78,    79,   279,    80,    81,   281,   348,
     129,   350,   247,   248,   249,   250,   139,   262,   263,   344,
     345,   283,   123,   298,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    82,
     290,    83,    84,    85,    86,    87,   245,   246,   251,   252,
      52,    88,   284,    89,    90,    91,    92,    93,    94,    75,
      76,    77,    78,    79,   285,    80,    81,     1,    95,   286,
     296,    42,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,   301,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    82,   307,
      83,    84,    85,    86,    87,   308,   316,   339,   317,    52,
     195,   328,    89,    90,    91,    92,    93,    94,    75,    76,
      77,    78,    79,   330,    80,    81,   337,    95,   338,   346,
     347,   349,   351,   356,   357,   253,   255,   254,    73,    61,
     256,   222,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,   257,    75,    76,
      77,    78,    79,    87,    80,    81,   278,   323,   196,   266,
      40,    89,    90,    91,    92,    93,    94,    75,    76,    77,
      78,    79,     0,    80,    81,     0,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,    83,
      84,    85,    86,    87,     0,     0,     0,     0,    52,     0,
       0,    89,    90,    91,    92,    93,    94,     0,     0,     0,
       0,     0,    87,     0,     0,     0,    95,     0,     0,     0,
      89,    90,    91,    92,    93,    94,    75,    76,    77,    78,
      79,     0,    80,    81,     0,    95,     0,     0,     0,     0,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       1,     0,     0,     0,    42,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     0,    75,    76,    77,    78,
      79,    87,    80,    81,     0,     0,     0,     0,     0,    89,
      90,    91,    92,    93,    94,    87,     0,   197,     0,   198,
     122,   297,     0,    89,    90,    91,    92,    93,    94,    75,
      76,    77,    78,    79,     0,    80,    81,     0,     0,     0,
       0,    87,     0,   197,     0,   198,   122,   355,     0,    89,
      90,    91,    92,    93,    94,   133,     0,   134,    75,    76,
      77,    78,    79,     0,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,   135,     0,     0,
       0,     0,    89,   136,    91,    92,    93,    94,     0,     0,
       0,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,    87,     0,   197,     0,   198,   122,     0,
       0,    89,    90,    91,    92,    93,    94,   270,     0,   271,
       0,     0,     0,     0,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,     0,    87,     0,     0,   272,
       0,     0,     0,     0,    89,   273,    91,    92,    93,    94,
     311,     0,   312,     0,     0,     0,     0,    75,    76,    77,
      78,    79,     0,    80,    81,     0,     0,     0,     0,    87,
       0,     0,   313,     0,     0,     0,     0,    89,   314,    91,
      92,    93,    94,   216,     0,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,     0,    87,     0,     0,   217,     0,     0,     0,     0,
      89,   218,    91,    92,    93,    94,   304,     0,     0,     0,
       0,     0,     0,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,     0,    87,     0,     0,   305,     0,
       0,     0,     0,    89,    90,    91,    92,    93,    94,   334,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,   335,     0,     0,     0,     0,    89,    90,    91,    92,
      93,    94,    75,    76,    77,    78,    79,     0,    80,    81,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
     122,     0,     0,    89,    90,    91,    92,    93,    94,     0,
     214,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,    89,    90,    91,    92,    93,
      94,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,    87,   236,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
       0,     0,    75,    76,    77,    78,    79,     0,    80,    81,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,   290,     0,     0,    89,    90,    91,    92,    93,    94,
     302,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,    89,    90,    91,    92,    93,
      94,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,    87,   319,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
       0,     0,    75,    76,    77,    78,    79,     0,    80,    81,
       0,     0,     0,     0,     0,     0,    87,   321,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
     332,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,    89,    90,    91,    92,    93,
      94,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,   145,     0,     0,     0,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   147,     0,     0,     0,     0,
       0,     0,     0,    89,    90,    91,    92,    93,    94,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,   127,     0,     0,     0,     0,     0,
     204,   267,   205,     0,     0,     0,     0,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     0,     0,     0,     0,     0,     0,     0,
     128,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,     0,    53,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,     0,     0,     0,     0,     0,
       0,   231,   267,   205,     0,     0,     0,     1,     0,     0,
      30,    42,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,    64,    42,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,     0,     0,     0,     0,     0,     0,     0,   309
};

static const yytype_int16 yycheck[] =
{
      53,    53,    58,    17,     0,    66,    59,   263,     4,     5,
     129,    30,    36,    42,    43,    99,     3,    34,    31,   151,
       3,   207,    18,    19,    34,    21,   144,    86,    87,    48,
       3,     3,    46,     3,    55,    55,    50,     3,   157,    27,
      57,    55,    52,    48,    57,    50,   232,    57,    55,    16,
      71,    71,    57,    41,    42,    43,    44,    66,    87,    11,
      12,    55,    58,     3,    71,    48,    53,    50,   287,   122,
      79,    80,    81,    61,    57,    48,    48,    71,    48,   197,
     133,   134,    48,   144,    57,    57,   145,    57,   147,   345,
      99,   150,   176,   177,   178,   227,   228,    69,    71,    87,
     319,    68,   321,    50,   163,    52,   116,    53,    48,   162,
     129,     3,    64,    65,    49,   129,   145,    57,   147,    57,
     339,   174,   341,    70,   343,    44,    49,    69,   142,    69,
      55,    71,    55,   192,    70,   144,   197,    49,   157,    49,
     193,   151,    61,    55,    69,    55,    66,    49,   201,   201,
     234,    51,   205,    55,    48,    55,    48,   145,    50,   147,
      57,   214,    48,   216,    50,    62,    63,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   207,    48,   204,    50,    48,   197,    17,
      18,    19,    20,    21,    13,    14,    24,    25,    26,     3,
       4,     5,     6,     7,    15,     9,    10,    49,   204,    71,
     263,   263,   231,    55,    48,   211,    50,   270,   271,    71,
     276,     8,     9,    10,   277,   234,    49,    49,    67,   288,
     289,    56,    55,    55,   295,   231,   145,   290,   147,    49,
     293,     3,    70,    51,    48,    55,   299,   299,    51,   302,
      49,   304,    56,    57,    58,    59,    60,    61,   311,   312,
      49,    48,     3,    50,     3,    52,    55,    71,    58,    59,
       3,     4,     5,     6,     7,     3,     9,    10,    51,   332,
     276,   334,   181,   182,   183,   184,   295,    54,    55,    54,
      55,    51,   345,   345,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      53,    44,    45,    46,    47,    48,   179,   180,   185,   186,
      53,    54,    51,    56,    57,    58,    59,    60,    61,     3,
       4,     5,     6,     7,    49,     9,    10,    27,    71,    49,
      51,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    49,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    51,
      44,    45,    46,    47,    48,    51,    51,    43,    51,    53,
      54,    51,    56,    57,    58,    59,    60,    61,     3,     4,
       5,     6,     7,    51,     9,    10,    51,    71,    51,    51,
      51,    51,    51,    51,    51,   187,   189,   188,    50,    41,
     190,   142,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,   191,     3,     4,
       5,     6,     7,    48,     9,    10,   211,   290,   116,   202,
      21,    56,    57,    58,    59,    60,    61,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    71,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      27,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,     3,     4,     5,     6,
       7,    48,     9,    10,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    48,    -1,    50,    -1,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,    48,    -1,    50,    -1,    52,    53,    54,    -1,    56,
      57,    58,    59,    60,    61,    29,    -1,    31,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    48,    -1,    50,    -1,    52,    53,    -1,
      -1,    56,    57,    58,    59,    60,    61,    29,    -1,    31,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      29,    -1,    31,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    29,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    29,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    29,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    56,    57,    58,    59,    60,    61,    -1,
      31,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    56,    57,    58,    59,    60,    61,
      31,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      31,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     3,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,     0,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    70,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    -1,    -1,    -1,    27,    -1,    -1,
      57,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    54,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    93,    94,    97,    98,
      99,   127,   128,   129,    94,    94,     3,    53,     3,    48,
      57,    71,    95,    96,   105,   106,   107,    94,    94,     0,
     128,    53,    31,    98,   100,   101,   102,   105,    31,   107,
      55,    71,    53,    70,    93,    94,   120,   130,    48,    50,
     106,   100,   102,   102,    54,   101,    69,    71,   103,   104,
     105,    49,   107,    96,   105,     3,     4,     5,     6,     7,
       9,    10,    42,    44,    45,    46,    47,    48,    54,    56,
      57,    58,    59,    60,    61,    71,    73,    74,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    91,    93,   119,   120,   121,   122,   123,   124,
     125,   126,    53,    89,   114,    93,   120,     3,    49,    94,
     108,   109,   110,    29,    31,    51,    57,    89,    54,    76,
      88,    92,    55,    71,    69,    48,    76,    48,    76,    76,
      48,    48,    71,    71,    71,    91,    91,   102,   111,     8,
       9,    10,    48,    50,    52,    17,    18,    19,    20,    21,
      24,    25,    26,    70,    90,    78,    57,    62,    63,    58,
      59,    11,    12,    64,    65,    13,    14,    56,    66,    67,
      15,    16,    68,    55,    71,    54,   122,    50,    52,   114,
     115,   116,   117,   118,    48,    50,   105,   107,   112,   113,
      49,    55,    49,    55,    31,    89,    29,    51,    57,    89,
      51,    51,   104,    92,   111,   111,    91,    93,   123,    71,
      49,    48,   107,   112,    49,     3,    49,    75,    89,    91,
       3,    89,    78,    78,    78,    79,    79,    80,    80,    80,
      80,    81,    81,    82,    83,    84,    85,    86,    91,    89,
      92,     3,    54,    55,   114,    70,   118,    49,   108,   112,
      29,    31,    51,    57,    89,   113,    48,    50,   109,     3,
      89,    51,    89,    51,    51,    49,    49,    49,   123,   123,
      53,    78,    49,    55,    51,    69,    51,    54,   114,   116,
      49,    49,    31,    89,    29,    51,    89,    51,    51,    49,
     108,    29,    31,    51,    57,    89,    51,    51,   119,    49,
      91,    49,    91,   115,    89,    88,   114,    89,    51,    89,
      51,    49,    31,    89,    29,    51,    89,    51,    51,    43,
     119,    49,   119,    49,    54,    55,    51,    51,    89,    51,
      89,    51,   119,   119,   119,    54,    51,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    75,    75,    76,
      76,    76,    76,    76,    76,    77,    77,    77,    77,    77,
      77,    78,    78,    79,    79,    79,    79,    80,    80,    80,
      81,    81,    81,    81,    81,    82,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    92,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    95,    95,    96,    96,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,    99,   100,   100,   101,   101,   102,   102,
     102,   102,   103,   103,   104,   104,   104,   105,   105,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   107,   107,   107,   108,   108,   109,
     109,   109,   110,   110,   111,   111,   112,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     114,   114,   114,   115,   115,   115,   115,   116,   117,   117,
     118,   118,   119,   119,   119,   119,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   125,
     125,   126,   126,   126,   126,   127,   127,   128,   128,   129,
     129,   130,   130
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     6,     7,     1,     3,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     3,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     5,     2,     1,     2,     2,     3,     2,     1,
       2,     1,     1,     3,     2,     3,     1,     2,     1,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     3,     2,     2,     1,     1,     3,     2,
       2,     1,     1,     3,     2,     1,     2,     1,     1,     3,
       2,     3,     5,     4,     5,     4,     3,     3,     3,     4,
       6,     5,     5,     6,     4,     4,     2,     3,     3,     4,
       3,     4,     1,     2,     1,     4,     3,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     2,     3,     1,
       2,     1,     1,     1,     2,     7,     5,     6,     7,     6,
       7,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     1,     2
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
      
#line 1780 "y.tab.c" /* yacc.c:1646  */
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
#line 423 "Compiler.y" /* yacc.c:1906  */


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






















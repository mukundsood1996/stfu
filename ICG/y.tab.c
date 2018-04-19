/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "Compiler.y"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define LIMIT 1024
	void yyerror(const char*);
	int yylex();
	int temp = 0;
	int quad_size = 0;
	int trip_size = 0;
	int stmt = 0;
	int create_stmt_no();
	void display_triple();
/*
	struct Symbol {
		char name[LIMIT];
		char type[LIMIT];
		char value[LIMIT];
	}symbol_table[LIMIT];
	
	struct Quadraple {
		char operator[LIMIT];
		char operand1[LIMIT];
		char operand2[LIMIT];
		char result[LIMIT];
	}quadraple_table[LIMIT];
*/
	struct Triple {
		int stmt_no;
		char operator[LIMIT];
		char operand1[LIMIT];
		char operand2[LIMIT];
	}triple_table[LIMIT];

	struct Stack {
		char *items[LIMIT];
		int top;
	}stack;
/*	void add_quadraple(char [], char [], char [], char []);*/
	void add_triple(int, char [], char [], char []);
/*	void arithmetic_quad(char []);*/
/*	void display_quadraple();*/
	void push(char *);
	char *pop();
#line 46 "Compiler.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union
{
	int ival;
	char string[128];
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 78 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define HASH 257
#define INCLUDE 258
#define DEFINE 259
#define STDIO 260
#define STDLIB 261
#define MATH 262
#define STRING 263
#define TIME 264
#define IDENTIFIER 265
#define INTEGER_LITERAL 266
#define STRING_LITERAL 267
#define HEADER_LITERAL 268
#define FLOAT_LITERAL 269
#define INC_OP 270
#define DEC_OP 271
#define LE_OP 272
#define GE_OP 273
#define EQ_OP 274
#define NE_OP 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define CHAR 278
#define INT 279
#define FLOAT 280
#define VOID 281
#define MAIN 282
#define STRUCT 283
#define FOR 284
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    1,    1,    2,    2,    2,    2,    2,    3,    3,    3,
    3,    3,    5,    5,    5,    5,    5,    6,    6,    7,
    7,    8,    8,    8,    8,    9,    9,    9,   10,   10,
   10,   10,   10,   11,   11,   11,   12,   12,   13,   13,
   14,   14,   14,    4,    4,   15,   16,   16,   18,   18,
   19,   19,   17,   17,   17,   17,   20,   20,   20,   21,
   21,   22,   22,   23,   23,   24,   24,   25,   25,   25,
   26,   26,   26,   27,   27,   30,   30,   31,   31,   28,
   28,   29,   29,   29,   29,    0,    0,   32,   32,   32,
};
static const YYINT yylen[] = {                            2,
    3,    5,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    3,    1,    3,    3,    2,    2,    1,    2,    1,
    1,    1,    3,    3,    3,    1,    3,    3,    1,    3,
    3,    3,    3,    1,    3,    3,    1,    5,    1,    3,
    1,    1,    1,    1,    3,    1,    2,    3,    1,    3,
    3,    1,    1,    1,    1,    1,    4,    5,    2,    1,
    2,    2,    3,    2,    1,    1,    3,    2,    3,    1,
    1,    1,    1,    2,    3,    1,    2,    1,    1,    1,
    2,    6,    7,    6,    7,    1,    2,    5,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    0,   54,    0,   53,    0,    0,   90,   89,    0,   56,
   86,    0,    0,    0,    0,   87,    0,   47,    0,   49,
    1,    0,    0,    0,   55,    0,    0,   60,    0,    0,
    0,   48,    3,    4,    5,    6,    7,    0,    0,    0,
   64,   57,   61,    0,    0,   62,    0,   66,    8,    9,
   11,   10,    0,   20,   21,   13,    0,    0,    0,    0,
    0,    0,    0,   39,   51,   50,    2,    0,   88,   58,
    0,   22,   46,   68,    0,   63,    0,   44,   16,   17,
    0,    0,   42,   43,   41,    0,   19,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   80,   74,    0,   78,   79,   71,   72,   73,    0,   76,
   69,   67,   12,    0,   14,   15,   40,   23,   24,   25,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   81,   75,   77,   45,    0,    0,    0,   38,    0,    0,
    0,    0,    0,    0,   84,    0,   82,    0,   85,   83,
};
static const YYINT yydgoto[] = {                          6,
    7,   38,   56,  103,   57,   58,   59,   60,   61,   62,
   63,   64,   78,   86,   74,    8,    9,   19,   20,   10,
   27,   28,   29,   47,   48,  105,  106,  107,  108,  109,
  110,   11,
};
static const YYINT yysindex[] = {                        13,
 -243,    0, -265,    0, -119,   13,    0,    0,  -51,    0,
    0,  -58,  -15,  -87,  110,    0,   14,    0,  -35,    0,
    0,  107,   40,  110,    0,  110,   20,    0,  -37,  197,
 -210,    0,    0,    0,    0,    0,    0,   -1,    2,   52,
    0,    0,    0,   33,  197,    0,  -28,    0,    0,    0,
    0,    0,  197,    0,    0,    0,   -5,  -55,  197,  141,
  -32,  -42,   -7,    0,    0,    0,    0,  -40,    0,    0,
  197,    0,    0,    0,  -57,    0,   79,    0,    0,    0,
   75, -136,    0,    0,    0,  197,    0,  197,  197,  197,
  197,  197,  197,  197,  197,  197,  197,  197,  197,  111,
    0,    0,  -21,    0,    0,    0,    0,    0,  -33,    0,
    0,    0,    0,  197,    0,    0,    0,    0,    0,    0,
  141,  141,  -32,  -32,  -32,  -32,  -42,  -42,  -11,   -6,
    0,    0,    0,    0,  197,  164,  164,    0,  172,  245,
  -13,  113,  -13,  145,    0,  -13,    0,  -13,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,  -16,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   41,    0,    0,   30,    0,    0,    0,
    0,    0,    0,    0,    0,  -30,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   63,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    7,   35,    0,   43,
   80,  138,    1,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   68,   74,  100,  106,  112,  132,  140,  161,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    0,    9,    0,  268,    0,  166,  301,  207,
    0,  -31,   66,    0,   84,    5,  310,    0,  130,    0,
  143,   31,  159,    0,  118,  154,  148,  -73,    0,    0,
   91,  200,
};
#define YYTABLESIZE 514
static const YYINT yytable[] = {                         53,
   45,   22,   54,   15,   55,   85,   53,   18,   31,   54,
   91,   55,   92,   73,   12,   75,   13,   95,  101,   96,
   45,   46,  114,   32,   23,  101,   53,   65,   65,   54,
   76,   55,  114,   53,   81,   24,   54,  131,   55,   73,
   82,   37,   55,   18,   37,  101,  135,   18,   18,   18,
   18,   18,  101,   18,   17,   99,  137,   43,   37,   37,
   67,   77,  139,  140,   18,   18,   18,   18,   18,   18,
   43,   22,  104,   52,   30,   22,   22,   22,   22,   22,
   39,   22,   68,   26,  102,   26,   26,   26,   52,   68,
   71,  132,   22,   22,   22,   65,   22,   22,   59,   59,
   26,   26,   26,  138,   26,   26,   70,  129,   27,   68,
   27,   27,   27,  104,   28,  115,   28,   28,   28,  113,
   29,   70,  114,   29,   68,   27,   27,   27,  116,   27,
   27,   28,   28,   28,  136,   28,   28,   29,   29,   29,
   32,   29,   29,   32,   42,   14,   33,  142,  144,   33,
  130,  117,   30,  146,  111,   30,  114,   32,   32,   32,
   66,   32,   32,   33,   33,   33,   40,   33,   33,   30,
   30,   30,   31,   30,   30,   31,   70,   90,   34,  134,
   35,   34,   88,   35,   41,  148,   69,   89,  114,   31,
   31,   31,  112,   31,   31,   34,   34,   35,   35,  133,
   34,   36,   35,   53,   36,   16,   54,   44,   55,   21,
    0,   53,  141,   17,   54,    0,   55,    0,   36,   36,
   83,   84,  101,   36,   49,   50,   51,   44,   52,   93,
   94,   49,   50,   51,   65,   52,   53,    2,   25,   54,
    4,   55,    5,  100,    2,   25,    0,    4,   55,    5,
  100,   49,   50,   51,    0,   52,  121,  122,   49,   50,
   51,    0,   52,    0,   79,   80,   97,   98,    0,    1,
  100,    2,   25,    0,    4,    0,    5,    0,   18,   18,
   18,   18,   18,   18,   53,  143,    0,   54,    0,   55,
    2,    3,    0,    4,  145,    5,  147,    2,   25,  149,
    4,  150,    5,  127,  128,   59,   22,   22,   22,   22,
    0,    0,   72,    0,   26,   26,   26,   26,   59,   59,
    0,   59,    0,   59,   26,    0,   87,    0,    0,    2,
   25,    0,    4,   26,    5,   26,   26,    0,   72,   27,
   27,   27,   27,    0,    0,   28,   28,   28,   28,   26,
    0,   29,   29,   29,   29,  118,  119,  120,   72,   72,
   72,   72,   72,   72,   72,   72,   33,   34,   35,   36,
   37,   32,   32,   32,   32,    0,    0,   33,   33,   33,
   33,    0,    0,   30,   30,   30,   30,    2,   25,    0,
    4,    0,    5,  123,  124,  125,  126,    0,    0,    0,
    0,    0,   72,   31,   31,   31,   31,    0,    0,    0,
    0,   34,   34,   35,   35,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   49,   50,
   51,    0,   52,    0,   36,   36,   49,   50,   51,    0,
   52,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   49,   50,   51,    0,   52,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   49,
   50,   51,    0,   52,
};
static const YYINT yycheck[] = {                         40,
   58,   60,   43,  123,   45,   61,   40,   59,   44,   43,
   43,   45,   45,   45,  258,   44,  282,   60,   59,   62,
   58,   59,   44,   59,   40,   59,   40,   58,   59,   43,
   59,   45,   44,   40,   40,  123,   43,   59,   45,   71,
   46,   41,   59,   37,   44,   59,   58,   41,   42,   43,
   44,   45,   59,   47,  265,   63,  130,   27,   58,   59,
   62,   53,  136,  137,   58,   59,   60,   61,   62,   63,
   40,   37,   68,   44,   61,   41,   42,   43,   44,   45,
   41,   47,  123,   41,  125,   43,   44,   45,   59,  123,
   58,  125,   58,   59,   60,   30,   62,   63,   58,   59,
   58,   59,   60,  135,   62,   63,   44,   99,   41,  123,
   43,   44,   45,  109,   41,   41,   43,   44,   45,   41,
   41,   59,   44,   44,  123,   58,   59,   60,  265,   62,
   63,   58,   59,   60,  130,   62,   63,   58,   59,   60,
   41,   62,   63,   44,  125,  265,   41,  139,  140,   44,
   40,   86,   41,   41,   71,   44,   44,   58,   59,   60,
   31,   62,   63,   58,   59,   60,   24,   62,   63,   58,
   59,   60,   41,   62,   63,   44,  125,   37,   41,  114,
   41,   44,   42,   44,   26,   41,   39,   47,   44,   58,
   59,   60,   75,   62,   63,   58,   59,   58,   59,  109,
   63,   41,   63,   40,   44,    6,   43,  265,   45,  268,
   -1,   40,   41,  265,   43,   -1,   45,   -1,   58,   59,
  276,  277,   59,   63,  265,  266,  267,  265,  269,  272,
  273,  265,  266,  267,  265,  269,   40,  278,  279,   43,
  281,   45,  283,  284,  278,  279,   -1,  281,  265,  283,
  284,  265,  266,  267,   -1,  269,   91,   92,  265,  266,
  267,   -1,  269,   -1,  270,  271,  274,  275,   -1,  257,
  284,  278,  279,   -1,  281,   -1,  283,   -1,  272,  273,
  274,  275,  276,  277,   40,   41,   -1,   43,   -1,   45,
  278,  279,   -1,  281,  141,  283,  143,  278,  279,  146,
  281,  148,  283,   97,   98,  265,  272,  273,  274,  275,
   -1,   -1,   45,   -1,  272,  273,  274,  275,  278,  279,
   -1,  281,   -1,  283,   15,   -1,   59,   -1,   -1,  278,
  279,   -1,  281,   24,  283,   26,   27,   -1,   71,  272,
  273,  274,  275,   -1,   -1,  272,  273,  274,  275,   40,
   -1,  272,  273,  274,  275,   88,   89,   90,   91,   92,
   93,   94,   95,   96,   97,   98,  260,  261,  262,  263,
  264,  272,  273,  274,  275,   -1,   -1,  272,  273,  274,
  275,   -1,   -1,  272,  273,  274,  275,  278,  279,   -1,
  281,   -1,  283,   93,   94,   95,   96,   -1,   -1,   -1,
   -1,   -1,  135,  272,  273,  274,  275,   -1,   -1,   -1,
   -1,  274,  275,  274,  275,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  265,  266,
  267,   -1,  269,   -1,  274,  275,  265,  266,  267,   -1,
  269,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  265,  266,  267,   -1,  269,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  265,
  266,  267,   -1,  269,
};
#define YYFINAL 6
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 284
#define YYUNDFTOKEN 319
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"'%'",0,0,"'('","')'","'*'","'+'","','","'-'","'.'","'/'",0,0,0,0,0,0,0,0,
0,0,"':'","';'","'<'","'='","'>'","'?'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"HASH","INCLUDE","DEFINE","STDIO","STDLIB",
"MATH","STRING","TIME","IDENTIFIER","INTEGER_LITERAL","STRING_LITERAL",
"HEADER_LITERAL","FLOAT_LITERAL","INC_OP","DEC_OP","LE_OP","GE_OP","EQ_OP",
"NE_OP","ADD_ASSIGN","SUB_ASSIGN","CHAR","INT","FLOAT","VOID","MAIN","STRUCT",
"FOR",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : translation_unit",
"headers : HASH INCLUDE HEADER_LITERAL",
"headers : HASH INCLUDE '<' libraries '>'",
"libraries : STDIO",
"libraries : STDLIB",
"libraries : MATH",
"libraries : STRING",
"libraries : TIME",
"primary_expression : IDENTIFIER",
"primary_expression : INTEGER_LITERAL",
"primary_expression : FLOAT_LITERAL",
"primary_expression : STRING_LITERAL",
"primary_expression : '(' expression ')'",
"postfix_expression : primary_expression",
"postfix_expression : postfix_expression '(' ')'",
"postfix_expression : postfix_expression '.' IDENTIFIER",
"postfix_expression : postfix_expression INC_OP",
"postfix_expression : postfix_expression DEC_OP",
"unary_expression : postfix_expression",
"unary_expression : unary_operator unary_expression",
"unary_operator : '+'",
"unary_operator : '-'",
"multiplicative_expression : unary_expression",
"multiplicative_expression : multiplicative_expression '*' unary_expression",
"multiplicative_expression : multiplicative_expression '/' unary_expression",
"multiplicative_expression : multiplicative_expression '%' unary_expression",
"additive_expression : multiplicative_expression",
"additive_expression : additive_expression '+' multiplicative_expression",
"additive_expression : additive_expression '-' multiplicative_expression",
"relational_expression : additive_expression",
"relational_expression : relational_expression '<' additive_expression",
"relational_expression : relational_expression '>' additive_expression",
"relational_expression : relational_expression LE_OP additive_expression",
"relational_expression : relational_expression GE_OP additive_expression",
"equality_expression : relational_expression",
"equality_expression : equality_expression EQ_OP relational_expression",
"equality_expression : equality_expression NE_OP relational_expression",
"conditional_expression : equality_expression",
"conditional_expression : equality_expression '?' expression ':' conditional_expression",
"assignment_expression : conditional_expression",
"assignment_expression : unary_expression assignment_operator assignment_expression",
"assignment_operator : '='",
"assignment_operator : ADD_ASSIGN",
"assignment_operator : SUB_ASSIGN",
"expression : assignment_expression",
"expression : expression ',' assignment_expression",
"constant_expression : conditional_expression",
"declaration : type_specifier ';'",
"declaration : type_specifier init_declarator_list ';'",
"init_declarator_list : init_declarator",
"init_declarator_list : init_declarator_list ',' init_declarator",
"init_declarator : IDENTIFIER '=' assignment_expression",
"init_declarator : IDENTIFIER",
"type_specifier : VOID",
"type_specifier : CHAR",
"type_specifier : INT",
"type_specifier : struct_specifier",
"struct_specifier : STRUCT '{' struct_declaration_list '}'",
"struct_specifier : STRUCT IDENTIFIER '{' struct_declaration_list '}'",
"struct_specifier : STRUCT IDENTIFIER",
"struct_declaration_list : struct_declaration",
"struct_declaration_list : struct_declaration_list struct_declaration",
"struct_declaration : specifier_qualifier_list ';'",
"struct_declaration : specifier_qualifier_list struct_declarator_list ';'",
"specifier_qualifier_list : type_specifier specifier_qualifier_list",
"specifier_qualifier_list : type_specifier",
"struct_declarator_list : struct_declarator",
"struct_declarator_list : struct_declarator_list ',' struct_declarator",
"struct_declarator : ':' constant_expression",
"struct_declarator : IDENTIFIER ':' constant_expression",
"struct_declarator : IDENTIFIER",
"statement : compound_statement",
"statement : expression_statement",
"statement : iteration_statement",
"compound_statement : '{' '}'",
"compound_statement : '{' block_item_list '}'",
"block_item_list : block_item",
"block_item_list : block_item_list block_item",
"block_item : declaration",
"block_item : statement",
"expression_statement : ';'",
"expression_statement : expression ';'",
"iteration_statement : FOR '(' expression_statement expression_statement ')' statement",
"iteration_statement : FOR '(' expression_statement expression_statement expression ')' statement",
"iteration_statement : FOR '(' declaration expression_statement ')' statement",
"iteration_statement : FOR '(' declaration expression_statement expression ')' statement",
"translation_unit : external_declaration",
"translation_unit : translation_unit external_declaration",
"external_declaration : INT MAIN '(' ')' compound_statement",
"external_declaration : declaration",
"external_declaration : headers",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 225 "Compiler.y"
void yyerror(const char *str)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", str);
}
int main(){
	stack.top = -1;
	yyparse();
	printf("success\n");
	display_triple();
/*
	if(!yyparse())
	{
		printf("Successful\n");
		display_quadraple();
	}
	else
		printf("Unsuccessful\n");
*/
	return 0;
}
void push(char *str)
{
	stack.items[++stack.top] = (char*)malloc(LIMIT);
	strcpy(stack.items[stack.top], str);
}
char *pop()
{
	if (stack.top <= -1) {
		printf("\nError in evaluating expression\n");
		exit(0);
	}
	char *str = (char*)malloc(LIMIT);
	strcpy(str, stack.items[stack.top--]);
	free(stack.items[stack.top+1]);
	return str;
}
/*
void add_quadraple(char op[10], char op2[10],char op1[10], char res[10])
{
	strcpy(quadraple_table[quad_size].operator, op);
	strcpy(quadraple_table[quad_size].operand2, op2);
	strcpy(quadraple_table[quad_size].operand1, op1);
	strcpy(quadraple_table[quad_size++].result, res);
}
void display_quadraple()
{
	printf("ID\t\tRESULT\t\tOPERATOR\tOPERAND1\tOPERAND2\n");
	int i = 0;
	for(; i < quad_size; i++) 
		printf("\n%3d\t%12s\t%12s\t%12s\t%12s\n", i, quadraple_table[i].result, quadraple_table[i].operator, quadraple_table[i].operand1, quadraple_table[i].operand2);
}


void arithmetic_quad(char op[5])
{
	char num[5];
	char num2[5];
	strcpy(num2, "t");
	sprintf(num, "%d", temp++);
	strcat(num2, num);
	add_quadraple(op, pop(), pop(), num2);
	push(num2);
}
*/
void add_triple(int stmt_no, char operator[10],char op1[10], char op2[10])
{
	triple_table[trip_size].stmt_no = stmt_no;
	strcpy(triple_table[trip_size].operator, operator);
	strcpy(triple_table[trip_size].operand2, op2);
	strcpy(triple_table[trip_size++].operand1, op1);
}
int create_stmt_no()
{
	return ++stmt;
}
int get_stmt_no()
{
	return stmt;
}
void display_triple()
{
	printf("NO.\tOPERATOR\tOPERAND1\tOPERAND2\n");
	int i = 0;
	for(; i < trip_size; i++) 
		printf("\n(%d)\t%5s\t%15s\t%15s\n", triple_table[i].stmt_no, triple_table[i].operator, triple_table[i].operand1, triple_table[i].operand2);
}

#line 577 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 8:
#line 72 "Compiler.y"
	{push(yystack.l_mark[0].string);}
break;
case 9:
#line 73 "Compiler.y"
	{push(yystack.l_mark[0].string);}
break;
case 10:
#line 74 "Compiler.y"
	{push(yystack.l_mark[0].string);}
break;
case 23:
#line 95 "Compiler.y"
	{add_triple(create_stmt_no(), "*", pop(), pop());
							char temp[LIMIT];
							sprintf(temp, "(%d)", get_stmt_no());
							push(temp);}
break;
#line 798 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}

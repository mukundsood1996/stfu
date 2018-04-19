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
extern YYSTYPE yylval;

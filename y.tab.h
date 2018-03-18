/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

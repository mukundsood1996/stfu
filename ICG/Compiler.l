%{
	#include <stdio.h>
	#include "y.tab.h"

	//#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno;

	extern void yyerror(const char *);  /* prints grammar violation message */

	extern int sym_type(const char *);  /* returns type from symbol table */

	#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

	static void comment(void);

	static int check_type(void);

%}

%option yylineno

D   		[0-9]
L   		[a-zA-Z_]
A   		[a-zA-Z_0-9]
WS  		[ \t\v\n\f]


%%
"/*"		{ comment(); }
"//"[^\n]*	{ /* Consume Comment */ }

	/* Data Types */
int		{ return(INT); }
float		{ return(FLOAT); }
char		{ return(CHAR); }
void		{ return(VOID); }
main		{ return(MAIN); }

	/* User Defined Data Types */
struct		{ return(STRUCT); }

	/* Headers */
"#"		{ return HASH; }
include		{ return INCLUDE; }
define		{ return DEFINE; }

	/* C Libraries */
"math.h"	{ return MATH; }
"stdio.h"	{ return STDIO; }
"stdlib.h"	{ return STDLIB; }
"string.h"	{ return STRING; }
"time.h"	{ return TIME; }

	/* Control Structures */
for		{ return(FOR); }

	/* User Defined Data Types, Identifiers */
{L}{A}*						{ strcpy(yylval.string,yytext); return IDENTIFIER;}
{L}{A}*\.{L}{A}*				{ strcpy(yylval.string,yytext); return IDENTIFIER;}
{D}+						{ strcpy(yylval.string,yytext); return INTEGER_LITERAL;}
{D}+\.{D}+					{ strcpy(yylval.string,yytext); return FLOAT_LITERAL;}
\"{A}+(".h"|".c")\"				{return HEADER_LITERAL;}
L?\"(\\.|[^\\"])*\"	{ return(STRING_LITERAL); }

	/* Assignment Operators */
"+="		{return(ADD_ASSIGN); }
"-="		{return(SUB_ASSIGN); }


	/* Relational Operators */
"++"		{return(INC_OP); }
"--"		{return(DEC_OP); }
"<="		{return(LE_OP); }
">="		{return(GE_OP); }
"=="		{return(EQ_OP); }
"!="		{return(NE_OP); }

	/* Basic Syntax */
";"		{return(';'); }
"{"	{return('{'); }
"}"	{return('}'); }
","		{return(','); }
":"		{return(':'); }
"="		{return('='); }
"("		{return('('); }
")"		{return(')'); }
("["|"<:")	{return('['); }
("]"|":>")	{return(']'); }
"."		{return('.'); }
"&"		{return('&'); }
"!"		{return('!'); }
"~"		{return('~'); }
"-"		{return('-'); }
"+"		{return('+'); }
"*"		{return('*'); }
"/"		{return('/'); }
"%"		{return('%'); }
"<"		{return('<'); }
">"		{return('>'); }
"^"		{return('^'); }
"|"		{return('|'); }
"?"		{return('?'); }


{WS}+		{ /* whitespace separates tokens */}
	
.		{ printf("No Match, Invalid Expression %s\n", yytext); }
%%

int yywrap(void)
{
	return 1;
}


static void comment(void)
{
    int c;

    while ((c = input()) != 0)
        if (c == '*')
        {
            while ((c = input()) == '*')
                ;

            if (c == '/')
                return;

            if (c == 0)
                break;
        }
    yyerror("unterminated comment");
}

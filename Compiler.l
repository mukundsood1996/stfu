%{
	#include <stdio.h>
	#include "y.tab.h"

	extern void yyerror(const char *);  /* prints grammar violation message */

	extern int sym_type(const char *);  /* returns type from symbol table */

	#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

	static void comment(void);
	static int check_type(void);
%}

O   [0-7]
D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
WS  [ \t\v\n\f]

%%
"/*"		{ comment(); }
"//"[^\n]*	{ /* Consume Comment */ }

	/* Data Types */
int		{ return(INT); }
signed		{ return(SIGNED); }
unsigned	{ return(UNSIGNED); }
short		{ return(SHORT); }
long		{ return(LONG); }
float		{ return(FLOAT); }
double		{ return(DOUBLE); }
char		{ return(CHAR); }
void		{ return(VOID); }
static		{ return(STATIC); }
typedef		{ return(TYPEDEF); }
const		{ return(CONST); }
inline		{ return(INLINE); }

	/* User Defined Data Types */
struct		{ return(STRUCT); }
sizeof		{ return(SIZEOF); }

	/* Program Flow Statements */
break		{ return(BREAK); }
continue	{ return(CONTINUE); }
return		{ return(RETURN); }


	/* Control Structures */
if		{ return(IF); }
else		{ return(ELSE); }
for		{ return(FOR); }

	/* User Defined Data Types, Identifiers */
{L}{A}*					{ return check_type(); }

	/* Constants, Numbers, Literals */
{HP}{H}+{IS}?				{ return I_CONSTANT; }
{NZ}{D}*{IS}?				{ return I_CONSTANT; }
"0"{O}*{IS}?				{ return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"		{ return I_CONSTANT; }

{D}+{E}{FS}?				{ return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?			{ return F_CONSTANT; }
{D}+"."{E}?{FS}?			{ return F_CONSTANT; }
{HP}{H}+{P}{FS}?			{ return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?			{ return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?			{ return F_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{ return STRING_LITERAL; }

	/* Assignment Operators */
"+="		{return(ADD_ASSIGN); }
"-="		{return(SUB_ASSIGN); }
"*="		{return(MUL_ASSIGN); }
"/="		{return(DIV_ASSIGN); }
"%="		{return(MOD_ASSIGN); }
"&="		{return(AND_ASSIGN); }
"^="		{return(XOR_ASSIGN); }
"|="		{return(OR_ASSIGN); }

	/* Relational Operators */
"++"		{return(INC_OP); }
"--"		{return(DEC_OP); }
"->"		{return(PTR_OP); }
"&&"		{return(AND_OP); }
"||"		{return(OR_OP); }
"<="		{return(LE_OP); }
">="		{return(GE_OP); }
"=="		{return(EQ_OP); }
"!="		{return(NE_OP); }

	/* Basic Syntac */
";"		{return(';'); }
("{"|"<%")	{return('{'); }
("}"|"%>")	{return('}'); }
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


static int check_type(void)
{
    switch (sym_type(yytext))
    {
	    case TYPEDEF_NAME:                /* previously defined */
		return TYPEDEF_NAME;
	    default:                          /* includes undefined */
		return IDENTIFIER;
    }
}


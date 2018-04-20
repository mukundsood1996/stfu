%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define LIMIT 1024

//	extern int lineno = 0;
	void yyerror(const char*);
	int yylex();
	int temp_no = 0;
	int label = 0;
	FILE *outfile;

	void arithmetic_gen(char op[5]);
	void display_stack();
	void push(char *);
	char *pop();

	struct Stack {
		char *items[LIMIT];
		int top;
	}stack;

%}
%union
{
	char string[128];
}
%token HASH INCLUDE DEFINE STDIO STDLIB MATH STRING TIME
%token	IDENTIFIER INTEGER_LITERAL STRING_LITERAL HEADER_LITERAL FLOAT_LITERAL
%token	INC_OP DEC_OP LE_OP GE_OP EQ_OP NE_OP
%token	ADD_ASSIGN SUB_ASSIGN
%token	CHAR INT FLOAT VOID MAIN
%token	STRUCT
%token	FOR 

%start translation_unit
%%
headers
	: HASH INCLUDE HEADER_LITERAL 
	| HASH INCLUDE '<' libraries '>'
	;
libraries
	: STDIO
	| STDLIB
	| MATH
	| STRING
	| TIME
	;
primary_expression
	: IDENTIFIER	{push($1.string); $$ = $1;}
	| INTEGER_LITERAL {push($1.string); $$ = $1;}
	| FLOAT_LITERAL {push($1.string); $$ = $1;}
	| STRING_LITERAL {push($1.string); $$ = $1;}	
	| '(' expression ')' {$$=$1;}
	;
postfix_expression
	: primary_expression	{$$=$1;}
	| postfix_expression '(' ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression INC_OP {push($1.string); push("1"); arithmetic_gen("+"); fprintf(outfile, "%s = %s\n", pop(), pop());}
	| postfix_expression DEC_OP {push($1.string); push("1"); arithmetic_gen("-"); fprintf(outfile, "%s = %s\n", pop(), pop());}
	;
unary_expression
	: postfix_expression 	{$$=$1;}
	| '+' unary_expression {char temp[5]; strcpy(temp, pop()); push("0"); push(temp); arithmetic_gen("+");}
	| '-' unary_expression {char temp[5]; strcpy(temp, pop()); push("0"); push(temp); arithmetic_gen("-");}
	;
multiplicative_expression
	: unary_expression
	| multiplicative_expression '*' unary_expression {arithmetic_gen("*");}
	| multiplicative_expression '/' unary_expression {arithmetic_gen("/");}
	| multiplicative_expression '%' unary_expression {arithmetic_gen("%");}
	;
additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression {arithmetic_gen("+");}
	| additive_expression '-' multiplicative_expression {arithmetic_gen("/");}
	;
relational_expression
	: additive_expression
	| relational_expression '<' additive_expression {arithmetic_gen("<");}
	| relational_expression '>' additive_expression {arithmetic_gen(">");}
	| relational_expression LE_OP additive_expression {arithmetic_gen("<=");}
	| relational_expression GE_OP additive_expression {arithmetic_gen(">=");}
	;
equality_expression
	: relational_expression 
	| equality_expression EQ_OP relational_expression {arithmetic_gen("==");}
	| equality_expression NE_OP relational_expression {arithmetic_gen("!=");}
	;
conditional_expression
	: equality_expression 
//	| equality_expression {fprintf(outfile, "if not %s goto L%d\n", pop(), ++label);} '?' expression {fprintf(outfile, "goto L%d\n", ++label);} ':' {fprintf(outfile, "L%d :\n", label-1);} conditional_expression {fprintf(outfile, "L%d :\n", label);}
	;
assignment_expression
	: conditional_expression
	| unary_expression '=' equality_expression {fprintf(outfile, "if not %s goto L%d\n", pop(), ++label);} '?' expression {fprintf(outfile, "%s = %s\n", $1.string, pop());fprintf(outfile, "goto L%d\n", ++label);} ':'  conditional_expression {fprintf(outfile, "L%d :\n%s = %s\n", label-1, $1.string, pop()); pop(); fprintf(outfile, "L%d :\n", label);}
	| unary_expression '=' assignment_expression  {fprintf(outfile, "%s = %s\n", pop(), pop());}
	| unary_expression ADD_ASSIGN assignment_expression  {arithmetic_gen("+"); fprintf(outfile, "%s = %s\n", $1.string, pop());}
	| unary_expression SUB_ASSIGN assignment_expression  {arithmetic_gen("-"); fprintf(outfile, "%s = %s\n", $1.string, pop());}
	;
expression
	: assignment_expression 
	| expression ',' assignment_expression
	;
constant_expression
	: conditional_expression	/* with constraints */
	;
declaration
	: type_specifier ';'
	| type_specifier init_declarator_list ';'
	;
init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;
init_declarator
	: IDENTIFIER '=' assignment_expression {fprintf(outfile, "%s = %s\n", $1.string, pop());}
//	| IDENTIFIER '=' equality_expression {fprintf(outfile, "if not %s goto L%d\n", pop(), ++label);} '?' expression {fprintf(outfile, "%s = %s\n", $1.string, pop());fprintf(outfile, "goto L%d\n", ++label);} ':'  conditional_expression {fprintf(outfile, "L%d :\n%s = %s\n", label-1, $1.string, pop()); pop(); fprintf(outfile, "goto L%d\n", label);}
	| IDENTIFIER
	;
type_specifier
	: VOID
	| CHAR
	| INT
	| struct_specifier
	;
struct_specifier
	: STRUCT '{' struct_declaration_list '}'
	| STRUCT IDENTIFIER '{' struct_declaration_list '}'
	| STRUCT IDENTIFIER
	;
struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;
struct_declaration
	: specifier_qualifier_list ';'	
	| specifier_qualifier_list struct_declarator_list ';'
	;
specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	;
struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;
struct_declarator
	: ':' constant_expression
	| IDENTIFIER ':' constant_expression
	| IDENTIFIER
	;
statement
	: compound_statement
	| expression_statement
	| iteration_statement
	;
compound_statement
	: '{' '}' 
	| '{' block_item_list '}'
	;
block_item_list
	: block_item
	| block_item_list block_item
	;
block_item
	: declaration
	| statement
	;
expression_statement
	: ';'
	| expression ';'
	;
iteration_statement
//	: FOR '(' expression_statement {fprintf(outfile, "L%d :\n", ++label);} expression_statement {fprintf(outfile, "if not %s goto L%d\n", pop(), ++label);} ')' statement {fprintf(outfile, "goto L%d\n", label-1);} 		
	: FOR '(' expression_statement {fprintf(outfile, "L%d :\n", ++label);} expression_statement {fprintf(outfile, "if not %s goto L%d\ngoto L%d\nL%d : \n", pop(), ++label, ++label, ++label);} expression {fprintf(outfile, "goto L%d\n", label-3);}')' {fprintf(outfile, "L%d :\n", label-1);} statement {fprintf(outfile, "goto L%d\nL%d: \n", label-2, label);}
	;
translation_unit
	: external_declaration
	| translation_unit external_declaration
	;
external_declaration
	: INT MAIN '(' ')' compound_statement
	| declaration
	| headers 	
	;
%%
void yyerror(const char *str)
{
	fflush(stdout);
	fprintf(stderr, "%s at line\n", str);
}
int main(){
	stack.top = -1;
	outfile = fopen("output_file.txt", "w");
	yyparse();
	printf("success\n");
	int i = 0;
	fclose(outfile);
	system("cat output_file.txt");
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

void arithmetic_gen(char op[5])
{
	char temp[5];
	sprintf(temp,"t%d",temp_no++);
  	fprintf(outfile,"%s = %s %s %s\n",temp,stack.items[stack.top-1],op,stack.items[stack.top]);
	pop(); pop(); push(temp);
}

void display_stack()
{
	int i;
	for(i=0; i<=stack.top; i++)
		printf("%s ", stack.items[i]);
		printf("\n");
}


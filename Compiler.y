%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define LIMIT 1024
	void yyerror(const char*);
	int yylex();

	int temp = 0;
	int quad_size = 0;

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

	struct Stack {
		char *items[LIMIT];
		int top;
	}stack;

	void add_quadraple(char [], char [], char [], char []);
	void arithmetic_quad(char []);
	void display_quadraple();
	void push(char *);
	char *pop();


%}

%union
{
	int ival;
	char string[128];
}

%token HASH INCLUDE DEFINE STDIO STDLIB MATH STRING TIME

%token	IDENTIFIER INTEGER_LITERAL STRING_LITERAL HEADER_LITERAL

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
	: IDENTIFIER	{push($1.string);}
	| INTEGER_LITERAL {push($1.string);}
	| STRING_LITERAL		
	| '(' expression ')'
	;

postfix_expression
	: primary_expression
	| postfix_expression '(' ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

unary_expression
	: postfix_expression
	| unary_operator unary_expression
	;

unary_operator
	: '+'
	| '-'
	;

multiplicative_expression
	: unary_expression {push($1.string);}
	| multiplicative_expression '*' unary_expression	{arithmetic_quad("*");}
	| multiplicative_expression '/' unary_expression {arithmetic_quad("/");}
	| multiplicative_expression '%' unary_expression  {arithmetic_quad("%");}
	;

additive_expression
	: multiplicative_expression {push($1.string);}
	| additive_expression '+' multiplicative_expression {arithmetic_quad("+");}
	| additive_expression '-' multiplicative_expression
{arithmetic_quad("-");}
	;

relational_expression
	: additive_expression {push($1.string);}
	| relational_expression '<' additive_expression {arithmetic_quad("<");}
	| relational_expression '>' additive_expression
{arithmetic_quad(">");}
	| relational_expression LE_OP additive_expression
{arithmetic_quad("<=");}
	| relational_expression GE_OP additive_expression
{arithmetic_quad(">=");}
	;

equality_expression
	: relational_expression {push($1.string);}
	| equality_expression EQ_OP relational_expression
{arithmetic_quad("==");}
	| equality_expression NE_OP relational_expression
{arithmetic_quad("!=");}
	;

conditional_expression
	: equality_expression 
	| equality_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression {push($1.string);}
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='
	| ADD_ASSIGN
	| SUB_ASSIGN
	;

expression
	: assignment_expression {push($1.string);}
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
	: IDENTIFIER '=' assignment_expression {
		add_quadraple("=", "", pop(), $1.string);		
		}
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
	: FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	| FOR '(' declaration expression_statement ')' statement	
	| FOR '(' declaration expression_statement expression ')' statement
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
	fprintf(stderr, "*** %s\n", str);
}
int main(){
	stack.top = -1;
	if(!yyparse())
	{
		printf("Successful\n");
		display_quadraple();
	}
	else
		printf("Unsuccessful\n");

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
	return str;
}

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


%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	void yyerror(const char*);
	int yylex();


%}


%token HASH INCLUDE DEFINE STDIO STDLIB MATH STRING TIME

%token	IDENTIFIER INTEGER_LITERAL STRING_LITERAL HEADER_LITERAL

%token	INC_OP DEC_OP LE_OP GE_OP EQ_OP NE_OP

%token	MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN

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
	: IDENTIFIER
	| INTEGER_LITERAL
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
	: unary_expression
	| multiplicative_expression '*' unary_expression
	| multiplicative_expression '/' unary_expression
	| multiplicative_expression '%' unary_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

relational_expression
	: additive_expression
	| relational_expression '<' additive_expression
	| relational_expression '>' additive_expression
	| relational_expression LE_OP additive_expression
	| relational_expression GE_OP additive_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

conditional_expression
	: equality_expression
	| equality_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='
	| ADD_ASSIGN
	| SUB_ASSIGN
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
	: IDENTIFIER '=' assignment_expression
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
	: specifier_qualifier_list ';'	/* for anonymous struct/union */
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
	if(!yyparse())
		printf("Successful\n");
	else
		printf("Unsuccessful\n");
	
	return 0;
}

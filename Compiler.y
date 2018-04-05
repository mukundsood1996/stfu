%{
	#define YYDEBUG 1
	#define VAR_LIMIT 50
	#define STACK_SIZE 100
	#include<stdio.h>
	#include <stdlib.h>
	#include <string.h>
	void yyerror(const char*);
	int yylex();

	int ctr = 0;


	typedef struct symbol
	{
		char var_name[256];
		char type[4];
		char *value;
	}symbol;	

	int top = -1;
	
	struct symbol_table
	{
		int last_inserted;
		symbol symbol_list[VAR_LIMIT];	
	};

	symbol *init_attribute(char *var_name, char *type, char *value);
	struct symbol_table stack[STACK_SIZE];
	int search_stack(char *var_entry);
	int push(char *var_name, int flag, char *type, char *value);
	int pop();

%}

%union 
{
	int i;              /* Constant integer value */
    float fp;               /* Constant floating point value */
    char *str;              /* Ptr to constant string (strings are malloc'd) */
    char *name;
};


%token HASH INCLUDE DEFINE STDIO STDLIB MATH STRING TIME

%token	IDENTIFIER <fp>FLOAT_CONST <i>INT_CONST <str>STRING_LITERAL SIZEOF HEADER_LITERAL

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
	| FLOAT_CONST			{/* Make new entry */printf("%f\n",$1);}
	| INT_CONST				{/* Make new entry */printf("%d\n",$1);}
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
	| INC_OP unary_expression
	| DEC_OP unary_expression
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
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
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
	: declarator '=' assignment_expression					{/* Make new entry */printf("%s\n",$<name>1);}
	| declarator 							
	;

type_specifier
	: VOID
	| CHAR
	| INT
	| FLOAT
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
	| declarator ':' constant_expression
	| declarator
	;

declarator
	: IDENTIFIER
	;

statement
	: compound_statement
	| expression_statement
	| iteration_statement
	;

compound_statement
	: '{' new_scope '}' 
	| '{'  new_scope block_item_list '}'
	;
	
new_scope
	: 
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

symbol *init_attribute(char *var_name , char *type, char *value)
{
	symbol *record = malloc(sizeof(symbol));

	strcpy(record->var_name, var_name);
	strcpy(record->type, type);
	record->value = value;
	
	return record;
}
int push(char *var_name, int flag, char *type, char *value)
{
	// if stack is full
	if(top == VAR_LIMIT - 1)
	{
		return -1;
	}
	// insert in new scope
	else if(flag == 1)
	{
		top++;
		symbol *temp = init_attribute(var_name, type, value);
		stack[top].symbol_list[++(stack[top].last_inserted)] = temp;			
		return top;	
	}
	// insert in existing scope
	else
	{
		if( search_stack(var_name) == -1)
		{
			printf("Variable Definition Already Exists!");
		}
		
		symbol *temp = init_attribute(var_name, type, value);
		stack[top].symbol_list[++(stack[top].last_inserted)] = temp;
		
		return top;
	}
}

int search_stack(char *var_entry)
{
	int i;
	for(i = top; i >= 0; i--)
	{
		int j;
		int len_scope = stack[i].last_inserted;
		for(j = 0; j <= len_scope; j++)
		{
			if( !strcmp(stack[i].symbol_list[j]->var_name, var_entry) )
				return -1;
		}
	}
	return 0;
}

int pop()
{
	// if stack is empty
	if(top == -1)
	{
		return -1;
	}
	memset(&stack[top], stack[top].last_inserted * sizeof(struct symbol_table), 0);
	stack[top].last_inserted = -1;
	top--;
	return top;
}


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

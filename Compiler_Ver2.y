%{
	#define YYDEBUG 1
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	
	void yyerror(const char*);
	int yylex();
	int isDefined(char);
	void insert(char, int);

	// Global variables to keep track of the most recent variables scope and type
	int scope = 0;
	char type[4] = "none";

	// Structure for each symbol in the symbol table
	typedef struct sym_tab_entry{
		char name[32];
		char type[4];
		int scope;
		int lineno;

		struct sym_tab_entry *next;
	} symbol;

	// Symbol for head node
	symbol *head = NULL, *current = NULL;
%}

%token HASH INCLUDE DEFINE STDIO STDLIB MATH STRING TIME

%token	IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL SIZEOF

%token	PTR_OP INC_OP DEC_OP LE_OP GE_OP EQ_OP NE_OP

%token	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN

%token	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN

%token	XOR_ASSIGN OR_ASSIGN

%token	TYPEDEF_NAME

%token	TYPEDEF STATIC

%token	CONST

%token	CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID MAIN

%token	STRUCT

%token	IF ELSE FOR 

%token CONTINUE BREAK RETURN

%start translation_unit

%%

headers
	: HASH INCLUDE STRING_LITERAL
	| HASH INCLUDE '<' libraries '>'
	| HASH DEFINE I_CONSTANT
	| HASH DEFINE F_CONSTANT
	;

libraries
	: STDIO
	| STDLIB
	| MATH
	| STRING
	| TIME
	;

primary_expression
	: IDENTIFIER 		{ insert((char)$1, @1.first_line); }
	| I_CONSTANT		{ insert((char)$1, @1.first_line); }
	| F_CONSTANT		{ insert((char)$1, @1.first_line); }
	| STRING_LITERAL
	| '(' expression ')'
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER 					{ insert((char)$1, @1.first_line); }
	| postfix_expression PTR_OP IDENTIFIER 					{ insert((char)$1, @1.first_line); }
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| '(' type_name ')' '{' initializer_list '}'
	| '(' type_name ')' '{' initializer_list ',' '}'
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
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

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
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
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression	/* with constraints */
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers
	| storage_class_specifier
	| type_specifier declaration_specifiers
	| type_specifier
	| CONST declaration_specifiers
	| CONST
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator '=' initializer
	| declarator
	;

storage_class_specifier
	: TYPEDEF	/* identifiers must be flagged as TYPEDEF_NAME */
	| STATIC
	;

type_specifier
	: VOID 				{ strcpy(type, "v"); }
	| CHAR 				{ strcpy(type, "c"); }
	| SHORT 			{ strcpy(type, "sh"); }
	| INT 				{ strcpy(type, "i"); }
	| LONG 				{ strcpy(type, "l"); }
	| FLOAT 			{ strcpy(type, "f"); }
	| DOUBLE			{ strcpy(type, "d"); }
	| SIGNED			{ strcpy(type, "sg"); }
	| UNSIGNED			{ strcpy(type, "usg"); }
	| struct_specifier		{ strcpy(type, "strt"); }
	| TYPEDEF_NAME			{ strcpy(type, "tydf"); }	/* after it has been defined as such */
	;

struct_specifier
	: STRUCT '{' struct_declaration_list '}'
	| STRUCT IDENTIFIER { insert((char)$1, @1.first_line); } '{' struct_declaration_list '}'
	| STRUCT IDENTIFIER { insert((char)$1, @1.first_line); }
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
	| CONST specifier_qualifier_list
	| CONST
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
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER 						{ printf("abc %s", $1); insert((char)$1, @1.first_line); }
	| '(' declarator ')'
	| direct_declarator '[' ']'
	| direct_declarator '[' '*' ']'
	| direct_declarator '[' STATIC CONST assignment_expression ']'
	| direct_declarator '[' STATIC assignment_expression ']'
	| direct_declarator '[' CONST '*' ']'
	| direct_declarator '[' CONST STATIC assignment_expression ']'
	| direct_declarator '[' CONST assignment_expression ']'
	| direct_declarator '[' CONST ']'
	| direct_declarator '[' assignment_expression ']'
	| direct_declarator '(' parameter_list ')'
	| direct_declarator '(' ')'
	| direct_declarator '(' identifier_list ')'
	;

pointer
	: '*' CONST pointer
	| '*' CONST
	| '*' pointer
	| '*'
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER 				{ insert((char)$1, @1.first_line); }
	| identifier_list ',' IDENTIFIER 	{ insert((char)$1, @1.first_line); }
	;

type_name
	: specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list
	;

abstract_declarator
	: pointer direct_abstract_declarator
	| pointer
	| direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' '*' ']'
	| '[' STATIC CONST assignment_expression ']'
	| '[' STATIC assignment_expression ']'
	| '[' CONST STATIC assignment_expression ']'
	| '[' CONST assignment_expression ']'
	| '[' CONST ']'
	| '[' assignment_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' '*' ']'
	| direct_abstract_declarator '[' STATIC CONST assignment_expression ']'
	| direct_abstract_declarator '[' STATIC assignment_expression ']'
	| direct_abstract_declarator '[' CONST assignment_expression ']'
	| direct_abstract_declarator '[' CONST STATIC assignment_expression ']'
	| direct_abstract_declarator '[' CONST ']'
	| direct_abstract_declarator '[' assignment_expression ']'
	| '(' ')'
	| '(' parameter_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_list ')'
	;

initializer
	: '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	| assignment_expression
	;

initializer_list
	: designation initializer
	| initializer
	| initializer_list ',' designation initializer
	| initializer_list ',' initializer
	;

designation
	: designator_list '='
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER 				{ insert((char)$1, @1.first_line); }
	;

statement
	: compound_statement 	{ scope++; } 
	| expression_statement
	| iteration_statement
	| jump_statement
	;

compound_statement
	: '{' '}'				{ scope--; }
	| '{'  block_item_list '}'		{ scope--; }
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
	: FOR '(' expression_statement expression_statement ')'  statement 
	| FOR '(' expression_statement expression_statement expression ')' statement 	
	| FOR '(' declaration expression_statement ')' statement 						
	| FOR '(' declaration expression_statement expression ')' statement 			
	;

jump_statement
	: CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: INT MAIN '(' ')' compound_statement	{ scope++; } 
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
	
	symbol* temp = head;

	while(temp->next != NULL)
		printf("Symbol: %s, %s, %d, %d", temp->name, temp->type, temp->scope, temp->lineno);


	return 0;
}

int isDefined(char name){
	symbol* temp = head;

	while(temp->next != NULL){
		if(strcmp(temp->name, (char*)name) == 0)
			if(temp->scope == scope)
				return 1;
	}

	return 0;
}

void insert(char name, int lineno){

	printf("Hey Baby %d", lineno);

	symbol* temp = (symbol*)malloc(sizeof(symbol));

	printf("%s", (char*)name);
	
	/*strcpy(temp->name, (char*)name);
	strcpy(temp->type, type);
	temp->scope = scope;
	temp->lineno = lineno;
	temp->next = NULL;	

	printf("%s, %s", temp->name, temp->type);

	if(head == NULL){
		head = temp;	
		current = head;
	}

	else{
		if(!isDefined(name)){
			current->next = temp;
			current = temp;
		}
		else{
			printf("Error symbol already exists, please revise code!");
			exit(0);
		}
	}

	*/

}

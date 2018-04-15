%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define LIMIT 1024
	#define MAX_SYMBOLS 100	// defines max no of record in each symbol table
	#define MAX_SCOPE 10		// defines max no of scopes allowed 
	#define NEWSCOPE 1
	#define OLDSCOPE 0
	#define MAX_MEMBER 10
	#define TYPE 6				// type can be int float void ....
	#define MAX_NO_OF_STRUCT 10
	#define STRUCT_FLAG 2
	
	int nested_struct_start_index;
	int c = 0;
	int global_flag = NEWSCOPE;
	void yyerror(const char*);
	int yylex();
	
	struct symbol {
		char name[LIMIT];
		char type[LIMIT];
		char value[LIMIT];
	};
	
	struct struct_data{
		char struct_name[LIMIT];
		char member_type[MAX_MEMBER][TYPE];
		char member_name[MAX_MEMBER][LIMIT];
		int index_to_insert_member;				// to know at which index do we have to insert new member
	};
	
	struct stack_for_symbol_tables{
		int index_to_insert;
		int struct_index_to_insert;
		struct struct_data struct_defined[MAX_NO_OF_STRUCT];
		struct symbol symbol_table[MAX_SYMBOLS];
	}symbol_table_stack[MAX_SCOPE];
	
	int struct_reference_used = 0;
	int top_stack_for_symbol_tables = -1;
	void fun(char *result ,char *arg1,char *arg2,char *arg3);
	int push_my(char *type,char *name,char *value,int flag);
	void struct_member_name(char* struct_name,int struct_index_to_insert);
	int pop_my();
	int search_my(char *name,int flag);
	void display();
	void display_struct();
%}

%union
{
	int ival;
	char string[128];
}

%token HASH INCLUDE DEFINE STDIO STDLIB MATH STRING TIME

%token	IDENTIFIER INTEGER_LITERAL FLOAT_LITERAL STRING_LITERAL HEADER_LITERAL

%token	INC_OP DEC_OP LE_OP GE_OP EQ_OP NE_OP

%token	ADD_ASSIGN SUB_ASSIGN

%token	CHAR INT FLOAT VOID MAIN

%token	STRUCT

%token	FOR 

%type <string> multiplicative_expression unary_expression init_declarator_list init_declarator declaration type_specifier assignment_expression IDENTIFIER additive_expression relational_expression equality_expression conditional_expression expression primary_expression postfix_expression struct_specifier struct_declaration_list struct_declaration specifier_qualifier_list struct_declarator_list struct_declarator 

%start translation_unit

%%

headers
	: HASH INCLUDE HEADER_LITERAL 		{/*printf("61\n");*/}
	| HASH INCLUDE '<' libraries '>'	{/*printf("62\n");*/}
	;

libraries
	: STDIO		{/*printf("66\n");*/}
	| STDLIB	{/*printf("67\n");*/}
	| MATH		{/*printf("68\n");*/}
	| STRING	{/*printf("69\n");*/}
	| TIME		{/*printf("70\n");*/}
	;

primary_expression
	: IDENTIFIER	{/*printf("74\n");*/}
	| INTEGER_LITERAL {/*printf("65\n");*/}
	| FLOAT_LITERAL		{}
	| STRING_LITERAL	{/*printf("76\n");*/}	
	| '(' expression ')'	{/*printf("77\n");*/strcpy($$,$2);}
	;

postfix_expression
	: primary_expression					{/*printf("81\n");*/}
	| postfix_expression '(' ')'			{/*printf("82\n");*/}
	| postfix_expression '.' IDENTIFIER		{/*printf("83\n");*/}
	| postfix_expression INC_OP				{/*printf("84\n");*/}
	| postfix_expression DEC_OP				{/*printf("85\n");*/}
	;

unary_expression
	: postfix_expression				{/*printf("89\n");*/}
	| unary_operator unary_expression	{/*printf("90\n");*/}
	;

unary_operator
	: '+'		{/*printf("94\n");*/}
	| '-'		{/*printf("95\n");*/}
	;

multiplicative_expression
	: unary_expression {/*printf("99\n");*/}
	| multiplicative_expression '*' unary_expression	{
															//printf("100\n");
															fun($$,$1,$2.string,$3);
														}
	| multiplicative_expression '/' unary_expression	{
															/*printf("101\n");*/
															fun($$,$1,$2.string,$3);
													 	}
	| multiplicative_expression '%' unary_expression  	{
															/*printf("102\n");*/
															fun($$,$1,$2.string,$3);
														}
	;

additive_expression
	: multiplicative_expression {/*printf("106\n");printf("%s \n",$$);*/}
	| additive_expression '+' multiplicative_expression {
															/*printf("101\n");*/
															fun($$,$1,$2.string,$3);
													 	}
	| additive_expression '-' multiplicative_expression	{
															/*printf("101\n");*/
															fun($$,$1,$2.string,$3);
													 	}
	;

relational_expression
	: additive_expression 								{/*printf("112\n");printf("%s \n",$$);*/}
	| relational_expression '<' additive_expression 	{
															/*printf("113\n");*/
															fun($$,$1,$2.string,$3);
														}
	| relational_expression '>' additive_expression		{
															/*printf("114\n");*/
															fun($$,$1,$2.string,$3);
														}
	| relational_expression LE_OP additive_expression	{/*printf("115\n");*/}
	| relational_expression GE_OP additive_expression	{/*printf("116\n");*/}
	;

equality_expression
	: relational_expression 							{/*printf("120\n");printf("%s \n",$$);*/}
	| equality_expression EQ_OP relational_expression	{/*printf("121\n");*/}
	| equality_expression NE_OP relational_expression	{/*printf("122\n");*/}
	;

conditional_expression
	: equality_expression 												{/*printf("126\n");printf("%s \n",$$);*/}
	| equality_expression '?' expression ':' conditional_expression		{/*printf("127\n");*/}
	;

assignment_expression
	: conditional_expression {/*printf("131\n");printf("%s \n",$$);*/}
	| unary_expression assignment_operator assignment_expression	{/*printf("132\n");*/}
	;

assignment_operator
	: '='			{/*printf("136\n");*/}
	| ADD_ASSIGN	{/*printf("137\n");*/}
	| SUB_ASSIGN	{/*printf("138\n");*/}
	;

expression
	: assignment_expression 				{/*printf("142\n");printf("%s \n",$$);*/}
	| expression ',' assignment_expression	{/*printf("143\n");*/}
	;

constant_expression
	: conditional_expression	/* with constraints */	{/*printf("147\n");*/}
	;

declaration
	: type_specifier ';'		{
									if(!strcmp($1,"struct"))
										display_struct();
										//printf("151\n");
								}
	| type_specifier init_declarator_list ';'	{
													if(!strcmp($1,"struct"))
														display_struct();
													//printf("152\n");
													//display_struct();
													//printf("%s \n",$1);
													//printf("%s \n",$2);
													char *type = $1;
													if(index($2,'_') != NULL)
													{
														char *_ = index($2, '_');
														int _index = (int)(_ - $2);
														char name[_index];
														int value_length = strlen($2) - _index;
														char value[value_length];
														strncpy(name,$2,_index);
														name[_index] = '\0';
														strncpy(value,$2+_index+1,value_length);
														//printf("VALUE %s length %d\n",value,strlen(value));
														value[value_length-1] = '\0';
														//printf("VALUE %s length %d\n",value,strlen(value));
														push_my(type,name,value,global_flag);
													}
													else if(!strcmp($1,"struct"))
													{
														//int struct_index_to_insert = symbol_table_stack[top_stack_for_symbol_tables].struct_index_to_insert;
														//struct_member_name($2,struct_index_to_insert-1);
													}
													else
													{
														//printf("good night");
														char name[strlen($2)+1];
														strcpy(name,$2);
														//name[strlen($2)] = '\0';
														//printf("hi\n");
														push_my(type,name,"",global_flag);
													}
												}
	;

init_declarator_list
	: init_declarator							{/*printf("156\n");*/}
	| init_declarator_list ',' init_declarator	{/*printf("157\n");*/}
	;

init_declarator
	: IDENTIFIER '=' assignment_expression 	{
												//printf("161\n");
												memcpy($$+strlen($$), "_", 2);
												memcpy($$+strlen($$), $3, strlen($3));
											}
	| IDENTIFIER							{
												strncpy($$,$1,strlen($1) - 1);$$[strlen($$)] = '\0';
												//printf("162\n");
											}	
	;

type_specifier
	: VOID 					{}
	| CHAR 					{}
	| INT 					{}
	| FLOAT					{}
	| struct_specifier		{/*printf("Struct_specifier %s\n",$1);*/}
	;

struct_specifier
	: STRUCT '{' struct_declaration_list '}'				{/*printf("174\n");*/}
	| STRUCT IDENTIFIER '{' nested_struct struct_declaration_list '}'		{push_my("",$2,"",STRUCT_FLAG);/*strcpy($$,$1.string);printf("175\n");*/}
	| STRUCT IDENTIFIER										{struct_reference_used = 1;/*printf("176\n");*/}
	;
nested_struct
	:				{
						if(top_stack_for_symbol_tables != -1)
						{
							int struct_index_to_insert = symbol_table_stack[top_stack_for_symbol_tables].struct_index_to_insert;
							nested_struct_start_index = symbol_table_stack[top_stack_for_symbol_tables].struct_defined[struct_index_to_insert].index_to_insert_member;
						}
					}
	;
struct_declaration_list
	: struct_declaration							{/*printf("%s \n",$1);printf("180\n");*/}
	| struct_declaration_list struct_declaration	{/*printf("181\n");*/}
	;

struct_declaration	
	: specifier_qualifier_list ';'							{/*printf("185\n");*/}
	| specifier_qualifier_list struct_declarator_list ';'	{push_my($1,$2,"",STRUCT_FLAG);/*printf("%s \n",$1);printf("%s \n",$2);printf("186\n");*/}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list				{/*printf("190\n");*/}
	| type_specifier										{/*strcpy($$,$1);printf("%s \n",$1);printf("191\n");*/}
	;

struct_declarator_list
	: struct_declarator									{/*strcpy($$,$1);printf("%s \n",$1);printf("195\n");*/}
	| struct_declarator_list ',' struct_declarator		{/*printf("196\n");*/}
	;

struct_declarator
	: ':' constant_expression					{/*printf("200\n");*/}
	| IDENTIFIER ':' constant_expression		{/*printf("201\n");*/}
	| IDENTIFIER								{/*strcpy($$,$1);printf("%s \n",$1);printf("202\n");*/}
	;

statement
	: compound_statement		{/*printf("206\n");*/}
	| expression_statement		{/*printf("207\n");*/}
	| iteration_statement		{/*printf("208\n");*/}
	;

compound_statement
	: '{' '}' 											{/*printf("212\n");*/}
	| '{' new_scope block_item_list '}' new_scope_end	{/*printf("213\n");*/}
	;
new_scope
	:		{/*printf("216\n");*/ global_flag = NEWSCOPE;}	
	;
new_scope_end
	:		{/*printf("219\n");*/global_flag = OLDSCOPE;display();printf("\n");pop_my();}
	;
block_item_list
	: block_item					{/*printf("222\n");*/}
	| block_item_list block_item	{/*printf("223\n");*/}
	;

block_item
	: declaration	{/*printf("227\n");*/}
	| statement		{/*printf("228\n");*/}
	;

expression_statement
	: ';'				{/*printf("232\n");*/}
	| expression ';'	{/*printf("233\n");*/}
	;

iteration_statement
	: FOR '(' expression_statement expression_statement ')' statement				{/*printf("237\n");*/}
	| FOR '(' expression_statement expression_statement expression ')' statement	{/*printf("238\n");*/}
	| FOR '(' declaration expression_statement ')' statement						{/*printf("239\n");*/}
	| FOR '(' declaration expression_statement expression ')' statement				{/*printf("240\n");*/}
	;

translation_unit
	: external_declaration						{/*printf("244\n");*/}
	| translation_unit external_declaration		{/*printf("245\n");*/}
	;

external_declaration
	: INT MAIN '(' ')' compound_statement	{/*printf("249\n");*/}	
	| declaration 							{/*printf("250\n");*/}
	| headers 								{/*printf("251\n");*/}
	;

%%

void yyerror(const char *str)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", str);
}
int main(){
	if(!yyparse())
	{
		printf("Successful\n");
	}
	else
		printf("Unsuccessful\n");

	return 0;
}


void struct_member_name(char* struct_name,int struct_index_to_insert)
{
	//printf("In struct_member_name function %s\n",symbol_table_stack[top_stack_for_symbol_tables].struct_defined[struct_index_to_insert].struct_name);
	int index_to_insert_member = symbol_table_stack[top_stack_for_symbol_tables].struct_defined[struct_index_to_insert].index_to_insert_member;
	int i;
	//printf("nested_struct_start_index %d\n",nested_struct_start_index);
	for(i=0;i<index_to_insert_member;i++)
	{
		strcat(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[struct_index_to_insert].member_name[i],".");
		strcat(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[struct_index_to_insert].member_name[i],struct_name);
	}
	//printf("nested struct name %s\n",symbol_table_stack[top_stack_for_symbol_tables].struct_defined[struct_index_to_insert].member_name[i-1]);
}

int search_my(char *name,int flag)
{
	//printf("Hello, I'm in search_my()");
	/*
	printf("-------------Inside Search--------------- \n");
	printf("Global_flag %d\n",flag);
	printf("Name %s\n",name);
	printf("index_to_insert %d\n",symbol_table_stack[top_stack_for_symbol_tables].index_to_insert);
	printf("Symbol table's top Varaible Name %s\n",symbol_table_stack[top_stack_for_symbol_tables].symbol_table[0].name);
	printf("-------------Inside Search--------------- \n");
	*/
	if(!flag)
	{
		int length = symbol_table_stack[top_stack_for_symbol_tables].index_to_insert;
		int i = 0;
		while(i<length)
		{
			//printf("stuck here");
			if(!strcmp(name,symbol_table_stack[top_stack_for_symbol_tables].symbol_table[i].name))
				return -1;
			i++;
		}
	}

	return 1;
}
/*
int push_my(char *type,char *name,char *value,int flag){
	printf("Entered\n");
	printf("Flag: %d\n", flag);
	printf("Name: %s\n", name);
	printf("Type: %s\n", type);
	printf("Value: %s\n", value);	
}
*/
int push_my(char *type,char *name,char *value,int flag)
{
	if(top_stack_for_symbol_tables == MAX_SCOPE)
		printf("Cannot have more than %d Scope in a program",MAX_SCOPE);
	else
	{
		if(top_stack_for_symbol_tables != -1 && search_my(name,flag) == -1)
		//if(0)
		{
			printf("Cannot have multiple decleration for same variable %s\n",name);
			return -1;	
		}
		else
		{
			if(flag == NEWSCOPE)
			{
				top_stack_for_symbol_tables++;
				global_flag = OLDSCOPE;
			}
			if(flag != STRUCT_FLAG)
			{
				int index_to_insert = symbol_table_stack[top_stack_for_symbol_tables].index_to_insert;
				if(symbol_table_stack[top_stack_for_symbol_tables].index_to_insert <= MAX_SYMBOLS)
				{
					strcpy(symbol_table_stack[top_stack_for_symbol_tables].symbol_table[index_to_insert].name,name);
					strcpy(symbol_table_stack[top_stack_for_symbol_tables].symbol_table[index_to_insert].type,type);
					strcpy(symbol_table_stack[top_stack_for_symbol_tables].symbol_table[index_to_insert].value,value);
					symbol_table_stack[top_stack_for_symbol_tables].index_to_insert += 1;
					//printf("Name %s\n",symbol_table_stack[top_stack_for_symbol_tables].symbol_table[0].name);
					//printf("Value %s\n",symbol_table_stack[top_stack_for_symbol_tables].symbol_table[0].value);
					//printf("Type %s\n",symbol_table_stack[top_stack_for_symbol_tables].symbol_table[0].type);
				}
				else
				{
					printf("Cannot have more than %d Symbols in each scope",MAX_SYMBOLS);
					return -1;
				}
			}
			else
			{
				if(global_flag == NEWSCOPE)
				{
					++top_stack_for_symbol_tables;
					global_flag = OLDSCOPE;
					//printf("inside struct\n");
				}
				int *struct_index_to_insert = &symbol_table_stack[top_stack_for_symbol_tables].struct_index_to_insert;
				//int *index_to_insert_member = &symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].index_to_insert_member;
				if(strlen(type) != 0 && strlen(name) != 0)
				{
					//printf("Struct member name %s\n",name);
					//printf("Struct member type %s\n",type);
					int *index_to_insert_member;
					if(struct_reference_used == 0 && !strcmp(type,"struct")) 
					{
						{
							//printf("!!!!!!!!!!!!!\n");
							*struct_index_to_insert -= 1;
							symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].struct_name[0] = '\0';
							index_to_insert_member = &symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].index_to_insert_member;
							int i;
							//printf("nested_struct_start_index %d\n",nested_struct_start_index);
							char new_name[2*LIMIT];
							for(i=nested_struct_start_index;i<*index_to_insert_member;i++)
							{
								strcpy(new_name,name);
								strcat(new_name,".");
								strcat(new_name,symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_name[i]);
								//printf("new name %s\n"new_name);
								strcpy(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_name[i],new_name);
								//strcat(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_name[i],".");
								//strcat(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_name[i],name);
							}
							//printf("nested struct name %s\n",symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_name[i-1]);
							//printf("nested struct name %s\n",symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_type[i-1]);
						}
					}
					else
					{
					index_to_insert_member = &symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].index_to_insert_member;
					//printf("struct_index_to_insert %d\n",*struct_index_to_insert);
					
					//printf("index_to_insert_member %d\n",*index_to_insert_member);
					strcpy(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_type[*index_to_insert_member],type);
					strcpy(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_name[*index_to_insert_member],name);
					*index_to_insert_member += 1;
					struct_reference_used = 0;
					}
				}
				else
				{
					//printf("Struct name %s\n",name);
					strcpy(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].struct_name,name);
					*struct_index_to_insert += 1;
				}
			}
			return 0;
		}
	}
}

int pop_my()
{
	if(top_stack_for_symbol_tables == -1)
	{
		printf("No Scope Present");
		return -1;
	}
	else
	{
		top_stack_for_symbol_tables--; // need to clear stack top before decrementing
		return 0;
	}
}

void display_struct()
{
	int i = 0;
	int j;
	if(top_stack_for_symbol_tables != -1)
	{
		int struct_index_to_insert = symbol_table_stack[top_stack_for_symbol_tables].struct_index_to_insert;
		for(i=0;i<struct_index_to_insert;i++)
		{
			//printf("Structure name %s\n",symbol_table_stack[top_stack_for_symbol_tables].struct_defined[i].struct_name);
			int index_to_insert_member = symbol_table_stack[top_stack_for_symbol_tables].struct_defined[i].index_to_insert_member;
			//printf("index_to_insert_member %d\n",index_to_insert_member);
			for(j=0;j<index_to_insert_member;j++)
			{
				printf("Type: %s NAME: %s ",symbol_table_stack[top_stack_for_symbol_tables].struct_defined[i].member_type[j],symbol_table_stack[top_stack_for_symbol_tables].struct_defined[i].member_name[j]);
			}
			printf("\n");
		}
	}
}


void display()
{
	int i = 0;
	if(top_stack_for_symbol_tables != -1)
	{
		int length = symbol_table_stack[top_stack_for_symbol_tables].index_to_insert;
		for(i=0;i<length;i++)
		{
			printf("TYPE : %s\tNAME : %s\tVALUE : %s\n",symbol_table_stack[top_stack_for_symbol_tables].symbol_table[i].type,symbol_table_stack[top_stack_for_symbol_tables].symbol_table[i].name,symbol_table_stack[top_stack_for_symbol_tables].symbol_table[i].value);
		}
	}
}

void fun(char *result ,char *arg1,char *arg2,char *arg3)
{
	if((arg1[0] >= 65 && arg1[0] <= 90) || (arg3[0] >= 60 && arg3[0] <= 90) || (arg1[0] >= 97 && arg1[0] <= 122) || (arg3[0] >= 97 && arg3[0] <= 122))
	{
		char *p[128];
		strncpy(result,arg1,strlen(arg1));
		strncpy(result+strlen(result),arg2,2);
		strncpy(result+strlen(result),arg3,strlen(arg3));
		//printf("In If -> Result for %s * %s : %s\n",arg1,arg3,result);
	}
	else
	{
		float temp; 
		if(!strcmp(arg2,"*"))
			temp = atof(arg1) * atof(arg3);
		else if(!strcmp(arg2,"/"))
			temp = atof(arg1) / atof(arg3);
		else if(!strcmp(arg2,"%"))
			temp = atoi(arg1) % atoi(arg3);
		else if(!strcmp(arg2,"+"))
			temp = atof(arg1) + atof(arg3);
		else if(!strcmp(arg2,"-"))
			temp = atof(arg1) - atof(arg3);
		else if(!strcmp(arg2,"<"))
			temp = atof(arg1) < atof(arg3);
		else if(!strcmp(arg2,">"))
			temp = atof(arg1) > atof(arg3);
		else if(!strcmp(arg2,"="))
		{
		}
		gcvt(temp,6,result);
		//printf("In Else -> Result for %s * %s : %s\n",arg1,arg3,result);
	}	
}

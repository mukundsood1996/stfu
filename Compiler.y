%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include<ctype.h>
	#define LIMIT 1024
	#define MAX_SYMBOLS 100			// defines max no of record in each symbol table
	#define MAX_SCOPE 10			// defines max no of scopes allowed 
	#define NEWSCOPE 1				// denoted new scope
	#define OLDSCOPE 0				// denotes old scope
	#define MAX_MEMBER 10			// max number of member in struct
	#define TYPE_LENGTH 6			// length of type int float void ....
	#define MAX_NO_OF_STRUCT 10		// max_no of structure which can be defined in a scope
	#define STRUCT_FLAG 2			// Flag to know struct which is declared
	
	
	
	/* the start index for the member of nested struct in the parent struct  initialized at nested_struct rule */ 
	int nested_struct_start_index;
	
	int c = 0;
	int scope = NEWSCOPE;
	void yyerror(const char*);
	int yylex();
	
	struct symbol {
		char name[LIMIT];
		char type[LIMIT];
		char value[LIMIT];
	};
	
	struct struct_data{
		char struct_name[LIMIT];
		char member_type[MAX_MEMBER][TYPE_LENGTH];
		char member_name[MAX_MEMBER][LIMIT];
		int index_to_insert_member;				// to know at which index do we have to insert new member
	};
	
	struct stack_for_symbol_tables{
		int index_to_insert;
		int struct_index_to_insert;
		struct struct_data struct_defined[MAX_NO_OF_STRUCT];
		struct symbol symbol_table[MAX_SYMBOLS];
	}symbol_table_stack[MAX_SCOPE];
	
	/* used if know if struct is used as member to declare a variable of its type
	   1 means used 
	*/
	int struct_reference_used = 0;
	
	int top_stack_for_symbol_tables = -1;
	
	// called to perform all artihmatic operations
	void fun(char *result ,char *arg1,char *arg2,char *arg3);
	
	/* called to push the varaibles in the current scope */
	int push_my(char *type,char *name,char *value,int flag);
	
	// not used yet
	void struct_member_name(char* struct_name,int struct_index_to_insert);
	/* to pop the scope */
	int pop_my();
	
	/* to check if the varaible of current scope is declared or not
	   return value 1 if not else -1; 
	*/
	int search_my(char *name,int flag);
	
	/* to display the current scope */
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

%type <string> multiplicative_expression unary_expression init_declarator_list init_declarator declaration type_specifier assignment_expression IDENTIFIER additive_expression relational_expression equality_expression conditional_expression expression primary_expression postfix_expression struct_specifier struct_declaration_list struct_declaration specifier_qualifier_list struct_declarator_list struct_declarator '+' '-' '<' '>' '%' '*' '/'

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
	| postfix_expression '.' IDENTIFIER		{char temp[LIMIT];strcpy(temp,$1);strcat(temp,".");strcat(temp,$3); strcpy($$,temp); /*printf("83\n");*/}
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
															fun($$,$1,$2,$3);
														}
	| multiplicative_expression '/' unary_expression	{
															/*printf("101\n");*/
															fun($$,$1,$2,$3);
													 	}
	| multiplicative_expression '%' unary_expression  	{
															/*printf("102\n");*/
															fun($$,$1,$2,$3);
														}
	;

additive_expression
	: multiplicative_expression {/*printf("106\n");printf("%s \n",$$);*/}
	| additive_expression '+' multiplicative_expression {
															/*printf("101\n");*/
															fun($$,$1,$2,$3);
													 	}
	| additive_expression '-' multiplicative_expression	{
															/*printf("101\n");*/
															fun($$,$1,$2,$3);
													 	}
	;

relational_expression
	: additive_expression 								{/*printf("112\n");printf("%s \n",$$);*/}
	| relational_expression '<' additive_expression 	{
															/*printf("113\n");*/
															fun($$,$1,$2,$3);
														}
	| relational_expression '>' additive_expression		{
															/*printf("114\n");*/
															fun($$,$1,$2,$3);
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
													/* display struct member in cuurent scope only if $1 = "struct" */
													if(!strcmp($1,"struct"))
														display_struct();
													//printf("$$ %s\n",$$);
													//printf("152\n");
													//display_struct();
													//printf("%s \n",$1);
													//printf("$2 %s\n",$2);
													char *type = $1;
													
													/* if the $2 has '_' character then varaible has value associated it*/
													if(index($2,'?') != NULL)
													{
														
														/* to get the index of '_' in $2 */
														char *_ = index($2, '?');
														
														/* to get the no of characher in the name string */
														int _index = (int)(_ - $2);
														
														/* to get the no of characher in the value string */
														int value_length = strlen($2) - _index;
														
														char name[_index];
														strncpy(name,$2,_index);
														name[_index] = '\0';
														
														char value[value_length];
														strncpy(value,$2+_index+1,value_length);
														//printf("VALUE %s length %d\n",value,strlen(value));
														value[value_length] = '\0';
														
														//printf("VALUE %s length %d\n",value,strlen(value));
														push_my(type,name,value,scope);
													}
													else if(!strcmp($1,"struct"))
													{
														//int struct_index_to_insert = symbol_table_stack[top_stack_for_symbol_tables].struct_index_to_insert;
														//struct_member_name($2,struct_index_to_insert-1);
													}
													
													/* if varaible is declared without default value */
													else
													{
														//printf("good night");
														char name[strlen($2)+1];
														strcpy(name,$2);
														//name[strlen($2)] = '\0';
														//printf("hi\n");
														push_my(type,name,"",scope);
													}
												}
	;

init_declarator_list
	: init_declarator							{/*printf("156\n");*/}
	| init_declarator_list ',' init_declarator	{/*printf("157\n");*/}
	;

init_declarator
	: IDENTIFIER '=' assignment_expression 	{
												/*assigning value to init_declarator of form " 													  'var_name'_'var_default_value' */
												 
												//printf("161\n");
												//printf("$$ %s %d\n",$$,strlen($$));
												
												strncpy($$+strlen($$), "?", 2);
												$$[strlen($$)] = '\0';
												//printf("$$ %s\n",$$);
												//printf("$3 %s\n",$3);
												strncpy($$+strlen($$), $3, sizeof($3));
												//$$[strlen($$)] = '\0';
												//printf("$$ %s\n",$$);
											}
	| IDENTIFIER							{
												/*assigning value to init_declarator of form " 													  'var_name' */
												
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
	| STRUCT IDENTIFIER '{' nested_struct struct_declaration_list '}'		
													{
														/* struct_flag is to tell the decleration is of structure 
														   and value is "" beacuse this push is used to put only the name of 															   struct declared in current scope*/ 
														push_my("",$2,"",STRUCT_FLAG);
														/*strcpy($$,$1.string);printf("175\n");*/
													}
	| STRUCT IDENTIFIER								{
														/* initialized to denote the member used in the struct decleration 															   is struct */
														struct_reference_used = 1;
														/*printf("176\n");*/
													}
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
	:		{/*printf("216\n");*/ scope = NEWSCOPE;}	
	;
new_scope_end
	:		{/*printf("219\n");*/scope = OLDSCOPE;display();printf("\n");pop_my();}
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
	printf("scope %d\n",flag);
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
				scope = OLDSCOPE;
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
				if(scope == NEWSCOPE)
				{
					++top_stack_for_symbol_tables;
					scope = OLDSCOPE;
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
	/*
	int i = 0;
	int flag = 0;
	if(arg1[i] == '(')
	{
		i+=1;
		flag = 1;
	}
	*/
	int arg1_length = strlen(arg1);
	int arg3_length = strlen(arg3);
	int i=arg1_length-1;
	int j = 0;
	if((isdigit(arg1[i]) | arg1[i] == '.') || (isdigit(arg3[j])  | arg3[j] == '.'))
	{
		float temp; 
		//if(!strcmp(arg2,"*"))
		{
			//printf("result %s arg1 %s arg2 %s arg3 %s\n",result,arg1,arg2,arg3);
			//int arg1_length = strlen(arg1);
			//int arg3_length = strlen(arg3);
			//int i=arg1_length-1;
			//int j = 0;
			while((i >= 0) && (isdigit(arg1[i]) | arg1[i] == '.'))
			{
				//printf("stuck\n");
				i--;
			}
			
			while((j < arg3_length) && (isdigit(arg3[j])  | arg3[j] == '.'))
			{
				//printf("stuck\n");
				j++;
			}
			
			if(i+1 <= arg1_length-1 && j-1 >= 0)
			{
				//printf("i %d\n",i);
				char temp_arg3[j];
				strncpy(temp_arg3,arg3,j);
				//printf("j %d\n",j-1);
				//printf("arg1 %s \n",arg1+(i+1));
				//printf("arg3 %s \n",temp_arg3);
				if(!strcmp(arg2,"*"))
					temp = atof(arg1+(i+1)) * atof(temp_arg3);
				else if(!strcmp(arg2,"/"))
					temp = atof(arg1+(i+1)) / atof(temp_arg3);
				else if(!strcmp(arg2,"%"))
					temp = atoi(arg1+(i+1)) % atoi(temp_arg3);
				else if(!strcmp(arg2,"+"))
					temp = atof(arg1+(i+1)) + atof(temp_arg3);
				else if(!strcmp(arg2,"-"))
					temp = atof(arg1+(i+1)) - atof(temp_arg3);
				else if(!strcmp(arg2,"<"))
					temp = atof(arg1+(i+1)) < atof(temp_arg3);
				else if(!strcmp(arg2,">"))
					temp = atof(arg1+(i+1)) > atof(temp_arg3);
				char buf[128];
				gcvt(temp,6,buf);
				/*
				if(!strcmp(buf,"inf"))
				{
					printf("Error\n");
					exit(0);
				}
				*/
				//buf[strlen(buf)] = '\0';
				strcat(buf,arg3+j);
				//printf("result %s\n",result);
				//printf("arg1 %s \n",arg1);
				//printf("arg2 %s \n",arg2);
				//printf("arg3 %s \n",arg3);
				//printf("buf %s\n",buf);
				//printf("arg1+i+1 %s\n",arg1+i+1);
				//printf("arg1 %s\n",arg1);
				strncpy(arg1+i+1,buf,sizeof(buf));
				//arg1[strlen(arg1)] = '\0';
				
				//printf("\n");
				strcpy(result,arg1);
				//printf("arg1 %s \n",arg1);
				//printf("result %s \n",result);
				//strcat(result,buf);
				return;
			}
			else
			{
				strncpy(result,arg1,sizeof(arg1));
				strcat(result,arg2);
				//result[strlen(result)] = '\0';
				strcat(result,arg3);
				result[strlen(result)] = '\0';
				//printf("res %s\n",result);
				return;
			}
			//temp = atof(arg1) * atof(arg3);
		}
		/*
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
		result[strlen(result)] = '\0';
		printf("In Else -> Result for %s * %s : %s\n",arg1,arg3,result);
		*/
	}
	else
	{
		char *p[128];
		strncpy(result,arg1,sizeof(arg1));
		//strcat(result,arg1);
		result[strlen(result)] = '\0';
		//printf("result 1 %s\n",result);
		//printf("arg2 %s\n",arg2);
		//strncpy(result+strlen(result),arg2,2);
		strcat(result,arg2);
		result[strlen(result)] = '\0';
		//printf("result 2 %s \n",result);
		//printf("arg3 %s \n",arg3);
		//strncpy(result+strlen(result),arg3,strlen(arg3));
		strcat(result,arg3);
		result[strlen(result)] = '\0';
		//printf("In If -> Result for %s * %s : %s\n",arg1,arg3,result);
	}	
}

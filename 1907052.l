%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int identifier = 0,keyword = 0,user_func = 0,datatype = 0,loop = 0,cndstatement = 0,statement = 0;

struct Symbol {
    char name[256];
};

struct Symbol symbol_table[1000];
int symbol_count = 0;

int isSymbolDeclared(char* name) {
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(symbol_table[i].name, name) == 0) {
            return 1;
        }
    }
    return 0; 
}

%}
D_type "purno"|"vogno"|"string"

identifier [a-zA-Z_][0-9a-zA-Z_]*

digit [0-9]

arith_op "+"|"-"|"*"|"/"|"^"

un_op "++"|"--"

lg_op "and"|"or"|"not"

rel_op "<"|">"|"<="|">="|"=="|"!="

assign_op "="|"+="|"-="|"/="|"*="

lb_func "cin>>"|"cout<<"|"cin >>"|"cout <<"

us_func "func"

con_state "if"|"else"|"else if"

lop "loop "[0-9]+".."[0-9]+

purno (-|\+)?[0-9]+

vogno [+-]?[0-9]+[.][0-9]+|[+-]?[.][0-9]+|[1-9]+e[+-][0-9]+

key "break"|"continue"|"return"|"void"|"main"

par "("|")"|"{"|"}"|"["|"]"



%%
[/][/](.*|\n)*[/][/]  printf("Multi Line Comment ");
[#][#](.*|" ")*	printf("Single Line Comment ");
[;]	{
	printf(";");
	statement++;
}
["].*["]	{
	printf("Literal");
}
{D_type} {
	printf("Datatype ");
	datatype++;
}


{key} {
	printf("keyword ");
	keyword++;
}
{par} {
	printf("Parenthesis ");
	
}

{arith_op} {
	printf("arithmatic_operator ");
	
}
{un_op} {
	printf("unary_operator ");
	
}
{lg_op} {
	printf("logical_operator ");
	
}
{rel_op} {
	printf("relational_operator ");
	
}
{assign_op} {
	printf("assignment_operator ");
	
}
{lb_func} {
	printf("library_function : ");
	
}
{us_func} {
	printf("user_function ");
	user_func++;
}
{lop} {
	printf("Loop ");
	loop++;
}  
{con_state} {
	printf("conditional_statement ");
	cndstatement++;
}

{purno} {
	
	printf("Integer ");
}
{vogno} {
	
	printf("Float ");
}

{identifier} {
	printf("identifier ");
	identifier++; 
	
}

%%

int yywrap()
{
	return 1;
}

int main()
{
	yyin=freopen("input.txt","r",stdin);
	//yyout=freopen("output.txt","w",stdout);
	yylex();

	printf("\nNumber of tokens:\n");
	printf("\nIdentfiers = %d\nStatements = %d\nUser function = %d\nDatatype = %d\nLoop = %d\nConditional statement = %d\nKeywords = %d\n",identifier,statement,user_func,datatype,loop,cndstatement,keyword);

	

}

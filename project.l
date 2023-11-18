%{
#include "project.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int varindex(char *var);
extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern FILE *yyout;
yylineno=1;

%}

IDENTIFIER [a-zA-Z_][0-9a-zA-Z_]*
DIGIT [0-9]
header		"import"[ ]*+[^\n]+[.h][ ]*


%%
[/][/](.*|\n)*[/][/]  printf("Multi Line Comment ");
[#][#](.*|" ")*	printf("Single Line Comment ");
"purno"               { return INT; }
"vogno"             { return FLOAT;}
"main"				{return START;}
"string"            {return STRING;}

"if"    {return IF;}
"else"    {return EF;}
"for"    {return FOR;}
"while" {return WHILE;}

"OddEven"  	   {return ODDEVEN;}
"fact"  	   {return FACT;}


":"             { return COLON; }
"switch"        { return SWITCH;}
"default"       { return DEFAULT;}
"value"		    { return VALUE;}
"up"            { return UP;}
"down"          { return DOWN;}
"case"          { return CASE;}
"Def"           { return DEF;}

[[]        { return '['; }
[]]        { return ']'; }
[{]        { return '{'; }
[}]        { return '}'; }
[(]        { return '('; }
[)]        { return ')'; }
[;]        { return ENDED;}


"="      {return '=';}
"+"      {return '+';}
"-"      {return '-';}
"*"      {return '*'; }
"/"      {return '/';}
"^"     {return '^'; }
"%"      {return '%'; }


"=="    {return ASSIGN;}
"<"      {return LT;}
">"      {return GT;}
"<="    {return KOMEQ;}
">="    {return BSIEQ;}
"++"    {return INC; }
"--"    {return DEC;}   
","      {return ',';}
[ \t]*	;
[\n]    {yylineno++;}

\"(\\.|[^"\\])*\" {yylval.ch = strdup(yytext);return STRING;}

[+-]?[0-9]*[.][0-9]+([eE][+-]?[0-9]+)? {yylval.floating = atof(yytext); return DOUBLE;}

"#include" { return IMPORT; }
{IDENTIFIER}".h" { return HEADER; }

{IDENTIFIER} {
			yylval.ch = strdup(yytext);
 			return VARIABLE;
 			}

"-"?{DIGIT}+ {
	yylval.dim=atoi(yytext);
	return NUMBER;
	}




%%

int yywrap()
{
	return 1;
}

int main()
{
	yyin = freopen("inproject.txt","r",stdin);
	//yyout = freopen("outproject.txt","w",stdout);
	yyparse();

}

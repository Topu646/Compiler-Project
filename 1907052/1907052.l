%{
#include "1907052.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex();
extern int yyparse();


%}

IDENTIFIER [a-zA-Z_][0-9a-zA-Z_]*
DIGIT [0-9]


%%
[/][/](.*|\n)*[/][/]  printf("Multi Line Comment\n");
[#][#](.*|" ")*	printf("Single Line Comment \n");

"purno"               { return INT; }
"vogno"             { return FLOAT;}
"main"				{return START;}
"string"            {return STRING;}

"if"    {return IF;}
"else"    {return EF;}
"for"    {return FOR;}
"while" {return WHILE;}
"sin"			   {return SIN;}
"cos"            {return COS;}
"tan"            {return TAN;}
"ln"			   {return LN;}
"log10" 		   {return LOG10;}
"OddEven"  	   {return ODDEVEN;}
"fact"  	   {return FACT;}


":"             { return COLON; }
"switch"        { return SWITCH;}
"default"       { return DEFAULT;}
"print"		    { return PRINT;}
"up"            { return UP;}
"down"          { return DOWN;}
"case"          { return CASE;}
"func"           { return DEF;}

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
[\n]    {}

\"(\\.|[^"\\])*\" {yylval.ch = strdup(yytext);return STRINGS;}

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


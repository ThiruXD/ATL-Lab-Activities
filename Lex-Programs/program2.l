// Lex Program for Removing Comments from a C Program

%{
#include<stdio.h>
%}

%%
"//".* { /* Ignore single line comments */ }
"/*"([^*]|\*+[^*/])*"\*/" { /* Ignore multi-line comments */ }
.|\n                    { fprintf(yyout, "%s", yytext); }
%%

int main() {
    yyin = fopen("input.c", "r");
    yyout = fopen("output.c", "w");
    yylex();
    return 0;
}
int yywrap() { return 1; }

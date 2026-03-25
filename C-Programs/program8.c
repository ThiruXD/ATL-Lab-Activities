// Lex + Yacc Program to Implement Control Statements Parser

#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "while(a<b){a++;}";
    if(strncmp(input, "while", 5) == 0 && strchr(input, '(') && strchr(input, '{'))
        printf("Valid While Loop Syntax\n");
    else
        printf("Syntax Error\n");
    return 0;
}
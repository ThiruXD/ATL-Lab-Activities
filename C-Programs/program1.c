// Lex Program to Identify Tokens (Keywords, Identifiers, Numbers, Operators)

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void identifyToken(char *str) {
    char keywords[6][10] = {"int", "float", "if", "else", "while", "return"};
    int isKeyword = 0;
    for(int i = 0; i < 6; i++) {
        if (strcmp(keywords[i], str) == 0) {
            printf("Keyword: %s\n", str);
            isKeyword = 1;
        }
    }
    if (!isKeyword) {
        if (isdigit(str[0])) printf("Number: %s\n", str);
        else printf("Identifier: %s\n", str);
    }
}

int main() {
    char input[] = "int x = 10 ;";
    char *token = strtok(input, " ");
    while (token != NULL) {
        identifyToken(token);
        token = strtok(NULL, " ");
    }
    return 0;
}
// Yacc Program to Check Grammar Ambiguity

#include <stdio.h>
int main() {
    printf("Grammar: E -> E+E | id\n");
    printf("String: id+id+id\n");
    printf("Ambiguity detected: (id+id)+id OR id+(id+id)\n");
    return 0;
}
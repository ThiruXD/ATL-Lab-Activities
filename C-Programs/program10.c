// Code Generation Program Using Yace (Simple Expression → Assembly)

#include <stdio.h>

int main() {
    char op = '+', v1 = 'A', v2 = 'B';
    printf("Expression: %c %c %c\n", v1, op, v2);
    printf("Assembly Code:\n");
    printf("MOV R0, %c\n", v1);
    printf("ADD R0, %c\n", v2);
    printf("STR R0, RESULT\n");
    return 0;
}
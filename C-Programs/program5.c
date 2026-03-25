// Yace Program for Arithmetic Expression Evaluation (with Lex Tokenizer)

#include <stdio.h>
// Simple recursive descent parser for: E -> E + T | T
int main() {
    int a, b;
    char op;
    printf("Enter expression (e.g., 5 + 3): ");
    scanf("%d %c %d", &a, &op, &b);
    if(op == '+') printf("Result: %d\n", a+b);
    else if(op == '*') printf("Result: %d\n", a*b);
    return 0;
}
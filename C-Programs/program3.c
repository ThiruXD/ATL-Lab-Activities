// Lex Program to Count Lines, Words, and Characters (like wc)

#include <stdio.h>

int main() {
    int l=0, w=0, c=0;
    char ch;
    while ((ch = getchar()) != EOF) {
        c++;
        if (ch == '\n') l++;
        if (ch == ' ' || ch == '\t' || ch == '\n') w++;
    }
    printf("Lines: %d, Words: %d, Characters: %d\n", l, w, c);
    return 0;
}
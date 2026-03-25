// Lex Program for Removing Comments from a C Program

#include <stdio.h>

int main() {
    FILE *f1 = fopen("input.c", "r"), *f2 = fopen("output.c", "w");
    char c;
    while ((c = fgetc(f1)) != EOF) {
        if (c == '/') {
            if ((c = fgetc(f1)) == '/') while ((c = fgetc(f1)) != '\n'); // Single line
            else if (c == '*') { // Multi-line
                while (1) {
                    while (fgetc(f1) != '*');
                    if (fgetc(f1) == '/') break;
                }
            }
        } else fputc(c, f2);
    }
    return 0;
}
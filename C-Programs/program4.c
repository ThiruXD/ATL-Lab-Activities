// Lex Program to Validate Regular Expressions

#include <stdio.h>
#include <regex.h>

int main() {
    regex_t regex;
    int val = regcomp(&regex, "^[a-z]+[0-9]*$", 0); // Regex: starts with letters, ends with numbers
    val = regexec(&regex, "user123", 0, NULL, 0);
    if (!val) printf("Valid Expression\n");
    else printf("Invalid\n");
    return 0;
}
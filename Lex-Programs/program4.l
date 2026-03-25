// Lex Program to Validate Regular Expressions

%%
[a-z0-9._%+-]+@[a-z0-9.-]+\.[a-z]{2,} { printf("Valid Email\n"); }
[0-9]{10}                             { printf("Valid Mobile Number\n"); }
.|\n                                  { printf("Invalid Input\n"); }
%%

int main() { yylex(); return 0; }
int yywrap() { return 1; }
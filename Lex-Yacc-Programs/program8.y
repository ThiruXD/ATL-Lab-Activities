// Lex + Yacc Program to Implement Control Statements Parser

%token WHILE ID NUM RELOP
%%
stmt: WHILE '(' cond ')' '{' body '}' { printf("Valid While Loop\n"); }
cond: ID RELOP ID | ID RELOP NUM ;
body: /* assignments etc */ ;
%%
// Yacc Program for Constructing Abstract Syntax Tree (AST)

struct node { char op; struct node *left, *right; };
/* Inside Yacc rules */
E: E '+' E { $$ = makeNode('+', $1, $3); }

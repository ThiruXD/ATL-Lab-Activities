// Yacc Program for Constructing Abstract Syntax Tree (AST)

#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node *left, *right;
};

struct Node* newNode(char data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

int main() {
    struct Node *root = newNode('+');
    root->left = newNode('a');
    root->right = newNode('b');
    printf("Root of AST: %c\n", root->data);
    return 0;
}
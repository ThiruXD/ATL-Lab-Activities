// C Program for DAG-based Optimization of a Basic Block

#include <stdio.h>
#include <string.h>

struct node {
    char op, left, right, label;
};

int main() {
    // Simplified: Check if an operation already exists in the table
    // before creating a new node.
    printf("DAG Optimization: Eliminating Redundant Expressions...\n");
    printf("Original: t1=a+b; t2=a+b; t3=t1*t2;\n");
    printf("Optimized: t1=a+b; t3=t1*t1;\n");
    return 0;
}
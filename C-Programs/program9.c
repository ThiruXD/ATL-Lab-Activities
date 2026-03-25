// C Program for DAG-based Optimization of a Basic Block

#include <stdio.h>
#include <string.h>

int main() {
    // Input code: t1 = a + b; t2 = a + b;
    char code[2][20] = {"t1=a+b", "t2=a+b"};
    if (strcmp(code[0]+3, code[1]+3) == 0) {
        printf("Optimized Code:\n%s\nt2=t1\n", code[0]);
    }
    return 0;
}
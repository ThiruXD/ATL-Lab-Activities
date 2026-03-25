// Code Generation Program Using Yace (Simple Expression → Assembly)

E: E '+' E { 
    printf("LOAD R0, %d\n", $1);
    printf("ADD R0, %d\n", $3); 
}
// comparação entre os loops while e do while

#include <stdio.h>

int main(void){
    int i = 0, j = 0;

    printf("While loop\n");
    while (i > 10){ // nunca executa a instrução
        printf("%d ", i);
        i++;
    }
    printf("\n");

    printf("Do while loop\n");
    do{ // executa a instrução ao menos uma vez
        printf("%d ", j);
        j++;
    } while (j > 10);

    return 0;
}
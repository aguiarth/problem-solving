// Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10

#include <stdio.h>

int main() {

    int n, i;

    printf("Valor inteiro: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("\n%d x %d = %d", n, i, i * n);
    }

    return 0;

}
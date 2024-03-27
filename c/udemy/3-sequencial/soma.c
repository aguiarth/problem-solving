// Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes números

#include <stdio.h>

int main() {

    int x, y, soma;

    printf("Primeiro valor: ");
    scanf("%d", &x);
    printf("Segundo valor: ");
    scanf("%d", &y);

    soma = x + y;

    printf("A soma dos números %i e %i é %i", x, y, soma);

    return 0;
}
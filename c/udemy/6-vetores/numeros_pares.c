// Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na tela todos os números pares, e também a quantidade de números pares.

#include <stdio.h>

int main() {

    int n, pares = 0;

    printf("Quantos valores? ");
    scanf("%d", &n);

    int vet[n];

    for (int i = 0; i < n; i++){
        printf("Digite um número: ");
        scanf("%d", &vet[i]);
    }

    printf("Lista de pares: \n");
    for (int i = 0; i < n; i++){
        if (vet[i] % 2 == 0){
            pares += 1;
            printf("%d  ", vet[i]);
        }
    }
    printf("\nQuantidade de pares = %d", pares);

    return 0;

}
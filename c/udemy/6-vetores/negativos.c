// Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos

#include <stdio.h>

int main() {

    int n;

    printf("Quantos valores? ");
    scanf("%d", &n);

    int vet[n];

    for (int i=0; i<n; i++) {
        printf("Valor: ");
        scanf("%d", &vet[i]);
    }

    printf("Valores negativos:\n");

    for (int i=0; i<n; i++) {
        if (vet[i] < 0) {
            printf("%d\n", vet[i]);
        }
    }

    return 0;

}
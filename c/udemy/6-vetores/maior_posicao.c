// Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento, considerando a primeira posição como 0 (zero).

#include <stdio.h>

int main() {

    int n, pos;

    printf("Quantos valores? ");
    scanf("%d", &n);

    double vet[n], maior;

    for (int i = 0; i < n; i++){
        printf("Digite um número: ");
        scanf("%lf", &vet[i]);
        maior = vet[0];
    }

    for (int i = 0; i < n; i++){
        if (vet[i] > maior){
            maior = vet[i];
            pos = i;
        }   
    }

    printf("Maior elemento: %.2lf\n", maior);
    printf("Posição do maior elemento: %d\n", pos);

    return 0;

}
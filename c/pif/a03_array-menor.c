// 1180 - Menor e Posição
// Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor, mostrando esta informação.

#include <stdio.h>

int main(){

    int N, menor, pos;

    printf("Tamanho do vetor? ");
    scanf("%d",&N);
    int X[N];

    for (int i=0; i<N; i++){
        printf("Valores:\n");
        scanf("%d ", &X[i]);
    }
    menor = X[0];
    
    for (int i=0; i<N; i++){
        if (X[i] <= menor){
            menor = X[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posição: %d\n", pos);

    return 0;
}
// Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida, mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos os elementos do vetor que estejam abaixo da média, com uma casa decimal cada. 

#include <stdio.h>

int main(){

    int n;

    printf("Quantos valores? ");
    scanf("%d",&n);

    double vet[n], soma=0.0, media;

    for (int i=0; i<n; i++){
        scanf("%lf", &vet[i]);
        soma+=vet[i];
    }

    media = soma / n;
    printf("\nMÉDIA = %.3lf\n", media);

    printf("Valores abaixo da média:\n");
    for (int i=0; i<n; i++){
        if (vet[i] < media){
            printf("%.1lf\n", vet[i]);
        }
    }

    return 0;
}
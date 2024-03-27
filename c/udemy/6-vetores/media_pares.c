// Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for digitado, mostrar a mensagem "NENHUM NUMERO PAR" 

#include <stdio.h>

int main(){

    int n, soma=0, cont_pares=0;
    double media;

    printf("Quantos valores? ");
    scanf("%d", &n);

    int vet[n];

    for (int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    for (int i=0; i<n; i++){
        if (vet[i] % 2 == 0){
            soma += vet[i];
            cont_pares++;
        }
    }

    if (cont_pares == 0){
        printf("\nNENHUM NUMERO PAR");
    } else {
        media = soma / (double)cont_pares;
        printf("\nMÉDIA DOS PARES = %.1lf", media);
    }

    return 0;

}
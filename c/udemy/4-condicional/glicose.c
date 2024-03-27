// Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa e depois mostrar na tela a classificação desta glicose de acordo com a tabela de referência

#include <stdio.h>

int main() {

    double glicose;

    printf("Medida da glicose: ");
    scanf("%lf", &glicose);

    if (glicose <= 100){
        printf("Normal");
    }
    else if (glicose > 100 && glicose <= 140){
        printf("Elevado");
    }
    else {
        printf("Diabetes");
    }

    return 0;
}
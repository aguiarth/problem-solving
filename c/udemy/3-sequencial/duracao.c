// Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no formato horas:minutos:segundos

#include <stdio.h>

int main() {

    int h, min, seg, duracao, resto;

    printf("Tempo em segundos: ");
    scanf("%d", &duracao);

    h = duracao / 3600;
    resto = duracao % 3600;

    min = resto / 60;
    seg = resto % 60;

    printf("%d:%d:%d", h, min, seg);

    return 0;

}
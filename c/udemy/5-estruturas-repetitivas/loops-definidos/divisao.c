// (adaptado de URI 1116) Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.

#include <stdio.h>

int main() {

    int n;
    double x, y;

    printf("Quantos casos? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Numerador: ");
        scanf("%lf", &x);
        printf("Denominador: ");
        scanf("%lf", &y);

        if (y == 0){
            printf("DIVISAO IMPOSSIVEL\n");
        } else {
            printf("Resultado = %.2lf\n", x/y);
        }
    }

    return 0;

}
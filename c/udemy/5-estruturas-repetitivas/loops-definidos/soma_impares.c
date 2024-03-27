// (adaptado de URI 1071) Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números impares entre eles

#include <stdio.h>

int main(){

    int x, y, troca, soma;

    printf("Valor de X: ");
    scanf("%d", &x);
    printf("Valor de Y: ");
    scanf("%d", &y);

    if (y < x){
        troca = x;
        x = y;
        y = troca;
    }

    soma = 0;

    for (int i= x+1; i < y; i++){
        if (i % 2 != 0){
            soma += i;
        }
    }

    printf("\nSoma dos ímpares = %d", soma);

    return 0;

}
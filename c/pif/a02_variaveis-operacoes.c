// operações aritméticas simples em C

#include <stdio.h>

int main(void){

    int a, b, soma = 0, modulo;
    float dividir;
    float c, d;

    scanf("%d %d", &a, &b);
    soma = a + b;
    modulo = a % b;
    dividir = a / b;

    printf("A soma de a e b é iqual a %d \n", soma);
    printf("O resto da divisão de a e b é iqual a %d\n", modulo);
    printf("A divisão de a e b é iqual a %.2f\n", dividir);

    scanf("%f %f", &c, &d);
    dividir = c / d;
    printf("A divisão de c e d é iqual a %.2f\n", dividir);

    return 0;
}
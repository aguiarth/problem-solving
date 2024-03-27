// Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três números lidos. Em caso de empate, mostrar apenas uma vez

#include <stdio.h>

int main(){

    int a, b, c, menor;

    printf("Valor de A: ");
    scanf("%d",&a);
    printf("Valor de B: ");
    scanf("%d",&b);
    printf("Valor de C: ");
    scanf("%d",&c);

    if ((a < b) && (a < c)){
        menor = a;
    }
    else if ((b <= a) && (b <= c)){
        menor = b;
    }
    else{
        menor = c;
    }

    printf("Menor valor = %d\n", menor);

    return 0;
}
// (adaptado de URI 1067) Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.

#include <stdio.h>

int main() {

    int x;

    printf("Valor de X: ");
    scanf("%d", &x);

    for (int i=1; i<=x; i++){
        if (i % 2 != 0){
            printf("%d\n", i);
        }
    }

    return 0;

}
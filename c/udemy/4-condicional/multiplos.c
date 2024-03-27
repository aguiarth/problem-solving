//  (adaptado de URI 1044) Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os números podem ser digitados em qualquer ordem

#include <stdio.h>

int main() {

    int n1, n2;

    printf("Digite dois números inteiros:\n");
    scanf("%d %d", &n1, &n2);

    if (n1 % n2 == 0 || n2 % n1 == 0){
        printf("Múltiplos");
    }
    else{
        printf("Não são múltiplos");
    }

    return 0;
}
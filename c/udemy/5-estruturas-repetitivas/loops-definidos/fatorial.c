// (adaptado de URI 1153) Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o fatorial de N

#include <stdio.h>

int main() {

    int n, fat = 1;

    printf("Digite um valor (max 15): ");
    scanf("%d", &n);

    printf("Fatorial de %d = %d ", n, n);

    for (int i=n-1; i>=1; i--) {
        printf("x %d ", i);
        fat *= n--;
    }

    printf("= %d\n", fat);

    return 0;

}
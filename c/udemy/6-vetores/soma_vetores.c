// Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima o vetor C gerado.

#include <stdio.h>

int main() {

    int n;

    printf("Quantos valores? ");
    scanf("%d", &n);

    int a[n], b[n], c[n];

    printf("Valores de A:\n");
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Valores de B:\n");
    for (int i=0; i<n; i++) {
        scanf("%d", &b[i]);
    }

    for (int i=0; i<n; i++) {
        c[i] = a[i] + b[i];
    }

    printf("Vetor resultante C:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;

}
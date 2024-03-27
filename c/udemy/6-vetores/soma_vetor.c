/* Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida: 
- Imprimir todos os elementos do vetor 
- Mostrar na tela a soma e a média dos elementos do vetor */

#include <stdio.h>

int main() {
    int n;
    double soma, media;

    printf("Quantos valores? ");
    scanf("%d", &n);

    double vet[n];
    soma = 0;

    for (int i=0; i<n; i++) {
        printf("Digite um número: ");
        scanf("%lf", &vet[i]);
        soma += vet[i];
    }

    media = soma / n;

	printf("VALORES = ");

    for (int i=0; i<n; i++) {
        printf("%.1lf  ", vet[i]);
    }

    printf("\nSOMA = %.2lf\n", soma);
	printf("MEDIA = %.2lf\n", media);

    return 0;
    
}
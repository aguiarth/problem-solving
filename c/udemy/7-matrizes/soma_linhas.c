// Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.

#include <stdio.h>

int main(){
    int m, n;
    double somalinha;

    printf("Quantas linhas na matriz? ");
    scanf("%d", &m);
    printf("Quantas colunas na matriz? ");
    scanf("%d", &n);

    double matriz[m][n], vetor[m];

    for (int i=0; i<m; i++) {
        printf("Elementos da %da linha\n", i + 1);

        for (int j=0; j<n; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (int i=0; i<m; i++) {
        somalinha = 0;

        for (int j=0; j<n; j++) {
            somalinha = somalinha + matriz[i][j];
        }
        vetor[i] = somalinha;
    }

    printf("VETOR GERADO:\n");

    for (int i=0; i<m; i++) {
        printf("%.1lf\n", vetor[i]);
    }

    return 0;
}
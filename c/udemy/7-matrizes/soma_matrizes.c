// Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada

#include <stdio.h>

int main(){

    int m, n;

    printf("Linhas das matrizes (max 10): ");
    scanf("%d", &m);
    printf("Colunas das matrizes (max 10): ");
    scanf("%d", &n);

    int a[m][n], b[m][n], c[m][n];

    printf("\nValores da matriz A:\n");
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nValores da matriz B:\n");
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nMatriz C:\n");
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
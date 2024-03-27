// Matriz de Toeplitz - matriz onde todos os elementos em cada diagonal principal são iguais

#include <stdio.h>

int main() {
    int n;

    printf("Digite a ordem da matriz de Toeplitz: ");
    scanf("%d", &n);

    int matriz[n][n];

    printf("Digite os elementos da primeira linha separados por espaço: ");
    for (int j = 0; j < n; j++) {
        scanf("%d", &matriz[0][j]);
    }

    // Preenchendo a matriz de Toeplitz
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = (j > 0) ? matriz[i - 1][j - 1] : matriz[i - 1][n - 1];
        }
    }

    // Imprimindo a matriz de Toeplitz
    printf("Matriz de Toeplitz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

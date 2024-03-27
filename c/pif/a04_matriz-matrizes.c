// Matriz Espiral - matriz onde os elementos são organizados em forma de espiral

#include <stdio.h>

int main() {
    int n;

    printf("Digite a ordem da matriz espiral: ");
    scanf("%d", &n);

    int matriz[n][n];

    int valor = 1;
    int linha = 0, coluna = 0;
    int limite_sup = n - 1, limite_inf = 0, limite_esq = 0, limite_dir = n - 1;

    // Preenchendo a matriz espiral
    while (valor <= n * n) {
        // Direita
        for (coluna = limite_esq; coluna <= limite_dir; coluna++) {
            matriz[linha][coluna] = valor++;
        }
        linha++;
        limite_inf++;

        // Baixo
        for (linha = limite_inf; linha <= limite_sup; linha++) {
            matriz[linha][coluna - 1] = valor++;
        }
        coluna--;
        limite_dir--;

        // Esquerda
        for (coluna = limite_dir - 1; coluna >= limite_esq; coluna--) {
            matriz[linha - 1][coluna] = valor++;
        }
        linha--;
        limite_sup--;

        // Cima
        for (linha = limite_sup - 1; linha >= limite_inf; linha--) {
            matriz[linha][coluna + 1] = valor++;
        }
        coluna++;
        limite_esq++;
    }

    // Imprimindo a matriz espiral
    printf("Matriz Espiral:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

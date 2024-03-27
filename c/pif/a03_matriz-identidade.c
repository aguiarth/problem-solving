// matriz identidade em C
// diagonal principal é tudo 1, demais elementos 0

#include <stdio.h>

int main() {

    int n = 3;
    int matriz_identidade[n][n];
    int i, j;

    // Preencher a matriz
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) // diagonal principal
                matriz_identidade[i][j] = 1;
            else
                matriz_identidade[i][j] = 0;
        }
    }

    // Imprimir a matriz
    printf("Matriz Identidade %dx%d:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matriz_identidade[i][j]);
        }
        printf("\n");
    }

    return 0;
}

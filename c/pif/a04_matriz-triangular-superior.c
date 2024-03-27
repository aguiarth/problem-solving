// Matriz Triangular Superior - todos os elementos abaixo da diagonal principal são zero

#include <stdio.h>

int main() {
    int matriz[3][3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) { // início -> j == i
            matriz[i][j] = i * 3 + j + 1;
        }
    }
    // Imprime a matriz triangular superior
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Matriz Zero - todos os elementos são 0

#include <stdio.h>

int main() {
    int matriz[3][3] = {0};
    // Imprime 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

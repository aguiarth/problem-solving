// Matriz Diagonal - todos os elementos fora da diagonal principal são zero

#include <stdio.h>

int main() {
    int matriz[3][3] = {0}; 

    for (int i = 0; i < 3; i++) {
        matriz[i][i] = i + 1;
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}


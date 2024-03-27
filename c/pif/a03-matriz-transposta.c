#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matriz[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transposta[COLS][ROWS];
    int i, j;

    // Transposta da matriz
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz original:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transposta:\n");
    for (i = 0; i < COLS; i++) {
        for (j = 0; j < ROWS; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
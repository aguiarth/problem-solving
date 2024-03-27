// script para soma ou subtração de matrizes em C

#include <stdio.h>

int main() {
    int matrizA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrizB[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultadoSoma[3][3];
    int resultadoSubtracao[3][3];

    // Soma das matrizes
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultadoSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Subtração das matrizes
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultadoSubtracao[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }

    printf("Matriz A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma das matrizes:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", resultadoSoma[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtracao das matrizes:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", resultadoSubtracao[i][j]);
        }
        printf("\n");
    }

    return 0;
}

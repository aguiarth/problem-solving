// Multiplicação de matrizes em C

#include <stdio.h>

int main() {
    int linhasA, colunasA, linhasB, colunasB;

    // Entrada de dados
    printf("Digite o número de linhas da primeira matriz: ");
    scanf("%d", &linhasA);
    printf("Digite o número de colunas da primeira matriz: ");
    scanf("%d", &colunasA);

    printf("Digite o número de linhas da segunda matriz: ");
    scanf("%d", &linhasB);
    printf("Digite o número de colunas da segunda matriz: ");
    scanf("%d", &colunasB);

    // Verificando se a multiplicação é possível
    if (colunasA != linhasB) {
        printf("As matrizes não podem ser multiplicadas porque o número de colunas da primeira matriz não é igual ao número de linhas da segunda matriz.\n");
        return 0;
    }

    // Definindo as matrizes
    int matrizA[linhasA][colunasA], matrizB[linhasB][colunasB], resultado[linhasA][colunasB];

    // Entrada de dados para a primeira matriz
    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasA; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    // Entrada de dados para a segunda matriz
    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < linhasB; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    // Realizando a multiplicação de matrizes
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < colunasA; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    // Imprimindo o resultado da multiplicação
    printf("Resultado da multiplicação das matrizes:\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}

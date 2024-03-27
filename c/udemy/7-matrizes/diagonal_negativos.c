// Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores negativos da matriz

#include <stdio.h>

int main() {
    int n, neg=0;

    printf("Ordem da matriz (max 10): ");
    scanf("%d", &n);

    int mat[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);

            if (mat[i][j] < 0){
                neg++;
            }
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");
    for (int i = 0; i < n; i++){
        printf("%d ", mat[i][i]);
    }

    printf("\nQuantidade de valores negativos: %d\n", neg);

    return 0;
}
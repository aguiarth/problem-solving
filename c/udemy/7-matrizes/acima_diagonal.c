// Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N contendo números inteiros. Mostrar a soma dos elementos acima da diagonal principal. Um exemplo de números acima da diagonal principal é mostrado ao lado (no caso as células com fundo cinza).

#include <stdio.h>

int main(){

    int n, soma=0;

    printf("Ordem da matriz (max 10): ");
    scanf("%d", &n);

    int mat[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);

            if (i < j){
                soma += mat[i][j];
            }
        }
    }

    printf("\nSoma dos elementos acima da diagonal principal: %d", soma);

    return 0;
}
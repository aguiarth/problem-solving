// Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.

#include <stdio.h>

int main(){

    int m, n;
    printf("Linhas e colunas da matriz (max 10): ");
    scanf("%d %d",&m, &n);

    int mat[m][n];

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d",&mat[i][j]);
        }
    }

    printf("\nNegativos:\n");

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            if (mat[i][j] < 0){
                printf("%d\n",mat[i][j]);
            }
        }
    }

    return 0;
}
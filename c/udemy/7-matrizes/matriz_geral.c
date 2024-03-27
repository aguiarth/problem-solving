// Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as seguintes ações:
// a) calcular e imprimir a soma de todos os elementos positivos da matriz.
// b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
// c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
// d) imprimir os elementos da diagonal principal da matriz.
// e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir a matriz alterada.

#include <stdio.h>
#include <math.h>

int main(){
    
    int n, indice;

    printf("Ordem da matriz (max 10): ");
    scanf("%d", &n);

    double mat[n][n], soma_positivos = 0.0;

    // entrada de dados
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }

    // imprimir a matriz
    printf("\nMatriz digitada:\n");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%.1lf ", mat[i][j]);
        }
        printf("\n");
    }

    // soma dos positivos
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (mat[i][j] > 0){
                soma_positivos += mat[i][j];
            }
        }
    }
    printf("\nSoma dos positivos = %.1lf\n", soma_positivos);

    // ler índice e imprimir linha
    printf("\nEscolha uma linha (primeira = 0): ");
    scanf("%d", &indice);

    printf("Linha escolhida: ");
    for (int i=0; i<n; i++){
        printf("%.1lf ", mat[indice][i]);
    }
    printf("\n");

    // ler índice e imprimir coluna
    printf("\nEscolha uma coluna (primeira = 0): ");
    scanf("%d", &indice);

    printf("Coluna escolhida: ");
    for (int i=0; i<n; i++){
        printf("%.1lf ", mat[i][indice]);
    }
    printf("\n");

    // diagonal principal
    printf("\nDiagonal principal: ");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i == j){
                printf("%.1lf ", mat[i][j]);
            }
        }
    }
    printf("\n");

    // matriz alterada
    printf("\nMatriz alterada:\n");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (mat[i][j] < 0){
                mat[i][j] = pow(mat[i][j], 2);
            }
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("%.2lf ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
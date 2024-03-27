// Matriz de Vandermonde - os elementos de cada linha são uma progressão geométrica

#include <stdio.h>
#include <math.h>

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas e colunas da matriz: ");
    scanf("%d", &linhas);
    colunas = linhas;

    int matriz[linhas][colunas];

    int primeiro_elemento, razao;
    printf("Digite o primeiro elemento da progressão geométrica: ");
    scanf("%d", &primeiro_elemento);
    printf("Digite a razão da progressão geométrica: ");
    scanf("%d", &razao);

    // Preenchendo a matriz de Vandermonde
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = primeiro_elemento * pow(razao, j);
        }
        primeiro_elemento *= razao; // Atualiza o primeiro elemento para a próxima linha
    }

    // Imprimindo a matriz de Vandermonde
    printf("Matriz de Vandermonde:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

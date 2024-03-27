// peça as dimensões e valores de uma matriz ao usuário
// faça a soma dos elementos da primeira coluna com a primeira linha e imprima o resultado

#include <stdio.h>

int main(){

    int m, n;
    double soma_l=0, soma_c=0;

    printf("Dimensões da matriz: ");
    scanf("%d %d", &m, &n);

    double M[m][n];

    for (int i=0; i < m; i++){
        for (int j=0; j < n; j++){
            printf("elemento [%d][%d]: ", i, j);
            scanf("%lf", &M[i][j]);

            if (i == 0){ // linhas
                soma_l += M[i][j];
            }
            if (j == 0){ // colunas
                soma_c += M[i][j];
            }
        }
    }

    printf("Soma dos elementos da primeira linha: %.2lf\n", soma_l);
    printf("Soma dos elementos da primeira coluna: %.2lf\n", soma_c);
    printf("Resultado da soma da primeira linha com a primeira coluna: %.2lf\n", soma_l + soma_c);

    return 0;
    
}
// 1. receba 3 inteiros do usuário a, b, c
// 2. receba a matriz M de tamanho a x b do usuário
// 3. receba a matriz de tamanho b x c do usuário
// 4. imprima a matriz K = M x N

#include <stdio.h>

int main(){

    int a, b, c;

    printf("Valores a, b, e c: \n");
    scanf("%d %d %d", &a, &b, &c);

    int M[a][b], N[b][c], K[a][c];

    printf("\nMATRIZ A:\n");
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &M[a][b]);
        }
    }

    printf("\nMATRIZ B:\n");
    for (int i=0; i<b; i++){
        for (int j=0; j<c; j++){
            printf("Elemento [%d][%d]: ", b, c);
            scanf("%d", &N[b][c]);
        }
    }

    printf("\nMATRIZ K = M X N =\n");
    for (int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            K[i][j] = 0;
            for (int k=0; k<b;k++){
                K[i][j] = M[i][k] * N[k][j];
            }
        }
    }

    for(int i=0; i<a; i++){
        for (int j=0; j<c; j++){
            printf("%d ", K[i][j]);
        }
        printf("\n");
    }

    return 0;

}
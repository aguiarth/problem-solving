#include <stdio.h>

int main(void){
    int a[3][2]={
    {2,3},
    {5,7},
    {1,6}
    };
    int b[2][2]={
    {4,7},
    {9,8}
    };
    int c[3][2];
    //linhas de a i
    //colunas de b j 
    //meio igual k
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            c[i][j] = 0;
            for(k=0;k<2;k++){
                c[i][j] = c[i][j] + (a[i][k]*b[k][j]);
            }
        }
    }
    int m,n;
    for(m=0;m<3;m++){
        for(n=0;n<2;n++){
            printf("%d ",c[m][n]);
        }
        printf("\n");
    }
}
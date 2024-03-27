#include <stdlib.h>
#include <stdio.h>

int main (void){
    int x;
    scanf("%d",&x);
    int vetor[x];
    int vetor2[x];
    for(int i=0;i<x;i++){
        scanf("%d",&vetor[i]);
    }
    for(int i=0;i<x;i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");
    int vezes;
    scanf("%d",&vezes);
    int posicao = 0;
    for(int i=vezes-1;i<x;i++){
        vetor2[posicao] = vetor[i];
        posicao++;
    }
    int marco;
    marco = posicao;
    for(int i=0;i<(x-marco);i++){
        vetor2[posicao] = vetor[i];
        posicao++;
    }
    for(int i=0;i<x;i++){
        printf("%d ",vetor2[i]);
    }
}
// Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número de homens

#include <stdio.h>

int main() {

    int n, homens;
    double maior, menor, media;

    printf("Quantas pessoas? ");
    scanf("%d", &n);

    double alturas[n];
    char gen[n];

    for (int i = 0; i < n; i++){
        printf("Digite altura e gênero da %dª pessoa:\n", i+1);
        scanf("%lf", &alturas[i]);
        scanf("%s", &gen[i]);
    }

    maior = alturas[0];
    menor = alturas[0];

    for (int i=0; i<n; i++){
        if (alturas[i] >= maior){
            maior = alturas[i];
        } if (alturas[i] <= menor){
            menor = alturas[i];
        }
    }



    return 0;

}
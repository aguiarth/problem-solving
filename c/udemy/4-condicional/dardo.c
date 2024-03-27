// No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir. Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual foi a maior

#include <stdio.h>

int main(){

    double d1, d2, d3, maior;

    printf("Digite as 3 tentativas:\n");
    scanf("%lf %lf %lf", &d1, &d2, &d3);

    if (d1 > d2 && d1 > d3){
        maior = d1;
    }
    else if (d2 >= d3 && d2 >= d1){
        maior = d2;
    }
    else {
        maior = d3;
    }

    printf("Maior tentativa = %.2lf\n", maior);

    return 0;
}
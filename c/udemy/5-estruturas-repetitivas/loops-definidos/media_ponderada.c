// (adaptado de URI 1079) Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida pela soma dos pesos.

#include <stdio.h>

int main(){

    int n;
    double a, b, c, media;

    printf("Casos teste: ");
    scanf("%d",&n);

    for (int i=0; i<n; i++){
        printf("Digite 3 números:\n");
        scanf("%lf %lf %lf", &a, &b, &c);

        media = (a*2 + b*3 + c*5) / 10;
        printf("Média: %.1lf\n", media);
    }

    return 0;

}
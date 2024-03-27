// (adaptado de URI 1041) Leia os valores das coordenadas X e Y de um ponto no plano cartesiano. A seguir, determine qual o quadrante ao qual pertence o ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.

#include <stdio.h>

int main(){

    double x, y;

    printf("Coordenada X: ");
    scanf("%lf", &x);
    printf("Coordenada Y: ");
    scanf("%lf", &y);

    if (x > 0 && y > 0){
        printf("Q1\n");
    }
    else if (x < 0 && y > 0){
        printf("Q2\n");
    }
    else if (x < 0 && y < 0){
        printf("Q3\n");
    }
    else if (x > 0 && y < 0){
        printf("Q4\n");
    }
    else if (x == 0 && y == 0){
        printf("Origem\n");
    }
    else if (x == 0 && y != 0){
        printf("Eixo X\n");
    }
    else if (x != 0 && y == 0){
        printf("Eixo Y\n");
    }

    return 0;

}
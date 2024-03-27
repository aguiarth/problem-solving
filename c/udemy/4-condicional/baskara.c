// Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula de Bhaskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais, conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem

#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, delta, x1, x2;

    printf("Valor de A: ");
    scanf("%lf", &a);
    printf("Valor de B: ");
    scanf("%lf", &b);
    printf("Valor de C: ");
    scanf("%lf", &c);

    delta = pow(b, 2) - (4 * a * c);
    
    if (delta > 0){
        x1 = (-b + sqrt(delta))/ (2 * a);
        x2 = (-b - sqrt(delta))/ (2 * a);
        printf("\nPrimeira raiz: %.4lf", x1);
        printf("\nSegunda raiz: %.4lf", x2);
    }
    else if (delta == 0){
        x1 = (-b + sqrt(delta))/ (2 * a);
        printf("\nRaiz real única: %.4lf", x1);
    }
    else{
        printf("\nSem raiz real");
    }

    return 0;

}
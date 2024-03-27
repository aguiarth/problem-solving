// Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados com quatro casas decimais): 
// a) a área do quadrado que tem lado A 
// b) a área do triângulo retângulo que base A e altura B 
// c) a área do trapézio que tem bases A e B, e altura C

#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c, quad, tri, trap;

    printf("Valor de A: ");
    scanf("%lf", &a);
    printf("Valor de B: ");
    scanf("%lf", &b);
    printf("Valor de C: ");
    scanf("%lf", &c);

    quad = a * a;
    tri = (a * b) / 2;
    trap = ((a + b) * c)/2;
    printf("\nÁrea do quadrado com lado A: %.4lf", quad);
    printf("\nÁrea do triângulo: %.4lf", tri);
    printf("\nÁrea do trapézio: %.4lf", trap);
    
    return 0;

}
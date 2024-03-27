// Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos.

#include <stdio.h>
#include <math.h>

int main() {

    double base, altura, area, peri, diag;

    printf("Base: ");
    scanf("%lf", &base);

    printf("Altura: ");
    scanf("%lf", &altura);

    area = base * altura;
    peri = 2 * base + 2 * altura;

    diag = sqrt(pow(base, 2) + pow(altura, 2));

    printf("\nÁrea = %.4lf", area);
    printf("\nPerímetro = %.4lf", peri);
    printf("\nDiag = %.4lf", diag);

    return 0;
}
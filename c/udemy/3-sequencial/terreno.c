// Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida, o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com duas casas decimais.

#include <stdio.h>

int main() {

    double largura, comp, metro, area, valor;

    printf("Largura do terreno: ");
    scanf("%lf", &largura);

    printf("Comprimento do terreno: ");
    scanf("%lf", &comp);

    printf("Valor do metro quadrado: ");
    scanf("%lf", &metro);

    area = largura * comp;
    valor = area * metro;

    printf("\nÁrea do terreno: %.2lf\n", area);
    printf("Valor do terreno: R$ %.2lf", valor);

    return 0;
}
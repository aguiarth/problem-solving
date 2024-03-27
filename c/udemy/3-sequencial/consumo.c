// Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo médio do carro, com três casas decimais.

#include <stdio.h>

int main() {

    double dist, comb, consumo;

    printf("Kms percorridos pelo carro: ");
    scanf("%lf", &dist);

    printf("Quanto combustivel gasto? ");
    scanf("%lf", &comb);

    consumo = dist / comb;

    printf("Consumo do carro: %.3lf", consumo);

    return 0;
}
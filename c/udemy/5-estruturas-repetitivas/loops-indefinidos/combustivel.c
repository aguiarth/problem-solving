// (adaptado de URI 1134) Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem como as quantidades de cada combustível

#include <stdio.h>

int main() {

    int alcool = 0, gasolina = 0, diesel = 0, resposta;

    printf("Digite um código - [1] Álcool [2] Gasolina [3] Diesel [4] Fim: ");
    scanf("%d", &resposta);

    while (resposta != 4) {

        if (resposta == 1) {
            alcool += 1;
        }
        else if (resposta == 2) {
            gasolina += 1;
        }
        else if (resposta == 3) {
            diesel += 1;
        }

        printf("Digite um código - [1] Álcool [2] Gasolina [3] Diesel [4] Fim: ");
        scanf("%d", &resposta);
    }

    printf("MUITO OBRIGADO");
    printf("\nContagem de pessoas:");
    printf("\n%d - álcool", alcool);
    printf("\n%d - gasolina", gasolina);
    printf("\n%d - diesel", diesel);

    return 0;

}
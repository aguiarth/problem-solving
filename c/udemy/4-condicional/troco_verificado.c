// Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o valor restante conforme exemplo.

#include <stdio.h>

int main() {

    int quant;
    double unidade, troco, valor, falta;

    printf("Valor do produto: ");
    scanf("%lf", &unidade);
    printf("Quantidade de unidades: ");
    scanf("%d", &quant);
    printf("Valor dado pelo cliente: ");
    scanf("%lf", &valor);

    if (valor < unidade * quant){
        falta = (unidade * quant) - valor;
        printf("Valor insuficiente - faltam R$ %.2lf", falta);
    }
    else{
        troco = valor - (unidade * quant);
        printf("Troco = R$ %.2lf", troco);
    }

    return 0;
}
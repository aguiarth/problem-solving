// Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve mostrar o valor do troco a ser devolvido ao cliente.

#include <stdio.h>

int main() {

    double preco, unidades, valor, troco;

    printf("Preço unitário do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade de unidades: ");
    scanf("%lf", &unidades);
    printf("Valor dado pelo cliente: ");
    scanf("%lf", &valor);

    troco = valor - (preco * unidades);

    printf("Troco = R$ %.2lf", troco);

    return 0;
}
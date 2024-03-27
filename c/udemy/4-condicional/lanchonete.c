// Uma lanchonete possui vários produtos. Cada produto possui um código e um preço. Você deve fazer um programa para ler o código e a quantidade comprada de um produto (suponha um código válido), e daí informar qual o valor a ser pago, com duas casas decimais, conforme tabela de produtos ao lado

#include <stdio.h>

int main(){

    int cod, qtd;
    double valor;

    printf("Codigo do produto: ");
    scanf("%d", &cod);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    if (cod == 1){
        valor = 5.00 * qtd;
    }
    else if (cod == 2){
        valor = 3.50 * qtd;
    }
    else if (cod == 3){
        valor = 4.80 * qtd;
    }
    else if (cod == 4){
        valor = 8.90 * qtd;
    }
    else if (cod == 5){
        valor = 7.32 * qtd;
    }

    printf("Valor a pagar: %.2lf\n", valor);

    return 0;
}
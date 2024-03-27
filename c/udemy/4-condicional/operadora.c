// Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago

#include <stdio.h>

int main(){

    int min;
    double conta;

    printf("Quantos minutos foram consumidos? ");
    scanf("%d",&min);

    if (min > 100){
        conta = 50 + ((min - 100) * 2);
    }
    else {
        conta = 50;
    }
    printf("CONTA = R$ %.2lf", conta);

    return 0;
}
// (adaptado de URI 1048) Uma empresa vai conceder um aumento percentual de salário aos seus funcionários dependendo de quanto cada pessoa ganha, conforme tabela dada. Fazer um programa para ler o salário de uma pessoa, daí mostrar qual o novo salário desta pessoa depois do aumento, quanto foi o aumento e qual foi a porcentagem de aumento.

#include <stdio.h>

int main() {

    double salario, novo_salario, aumento;
    int pct;

    printf("Digite o salário atual: ");
    scanf("%lf", &salario);

    if (salario <= 1000.00){
        novo_salario = salario * 1.2;
        pct = 20;
    }
    else if (salario > 1000.00 && salario <= 3000.00){
        novo_salario = salario * 1.15;
        pct = 15;
    }
    else if (salario > 3000.00 && salario <= 8000.00){
        novo_salario = salario * 1.1;
        pct = 10;
    }
    else {
        novo_salario = salario * 1.05;
        pct = 5;
    }

    aumento = novo_salario - salario;

    printf("Novo salário = R$%.2lf\n", novo_salario);
    printf("Aumento = R$%.2lf\n", aumento);
    printf("Porcentagem = %d %%\n", pct);

    return 0;
}
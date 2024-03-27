// (adaptado de URI 1074) Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida. Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir apenas NULO

#include <stdio.h>

int main() {

    int n, x;

    printf("Quantidade a ser digitada: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Valor: ");
        scanf("%d", &x);

        if (x == 0) {
            printf("NULO\n");
        }
        else {
            if (x % 2 == 0) {
                printf("PAR");
            }
            else {
                printf("ÍMPAR");
            }

            if(x > 0) {
                printf(" POSITIVO\n");
            }
            else {
                printf(" NEGATIVO\n");
            }
        }
    }

    return 0;

}
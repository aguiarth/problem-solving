// (adaptado de URI 1159) O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X , se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação: 4+6+8+10+12, enquanto que se o valor de entrada for 11, por exemplo, a saída deve ser 80, que é a soma de 12+14+16+18+20.

#include <stdio.h>

int main() {

    int x, soma;

    printf("Valor de x: ");
    scanf("%d", &x);

    while (x != 0){

        if (x % 2 != 0){
            x += 1;
        }

        soma = x * 5 + 20;
        printf("Soma: %d\n", soma);

        printf("Valor de x: ");
        scanf("%d", &x);

    }

    return 0;

}
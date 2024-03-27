#include <stdio.h>

int main() {
    int a, b, temp, soma = 0;

    printf("Valor 1: ");
    scanf("%d", &a);
    printf("Valor 2: ");
    scanf("%d", &b);

    if (a == b) {
        printf("Valores iguais!\n");
        printf("Soma: %d", a);
    }
    else {
        if (a > b) {
            // as 3 linhas a seguir trocam de lugar o menor e o maior valor
            temp = a;
            a = b;
            b = temp;
        } else {
            temp = a;
            a = b;
            b = temp;
        }
        printf("Maior: %d\n", b);

        for (int i = a; i <= b; i++) {
            soma += i;
        }

        printf("Soma: %d\n", soma);
    }

    return 0;
}

// (adaptado de URI 1072) Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida. Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo

#include <stdio.h>

int main() {

    int n, x, dentro = 0, fora = 0;

    printf("Quantos valores a serem lidos? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){

        printf("Valor: ");
        scanf("%d", &x);

        if (x >= 10 && x <= 20){
            dentro += 1;
        } else{
            fora += 1;
        }
    }

    printf("\n%d DENTRO", dentro);
    printf("\n%d FORA", fora);

    return 0;

}


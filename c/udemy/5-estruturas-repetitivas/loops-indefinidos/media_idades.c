// Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez, mostrar a mensagem "IMPOSSIVEL CALCULAR".

#include <stdio.h>

int main() {
    int idade, soma = 0, pessoas = 0;
    double media;

    printf("Idade:\n");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("IMPOSSIVEL CALCULAR");
    } else {
        while (idade >= 0) {
            soma += idade;
            pessoas += 1;

            printf("Idade:\n");
            scanf("%d", &idade);
        }

        if (pessoas > 0) {
            media = (double) soma / pessoas;
            printf("Média: %.2lf anos", media);
        } else {
            printf("Nenhuma idade válida foi inserida.");
        }
    }

    return 0;
}

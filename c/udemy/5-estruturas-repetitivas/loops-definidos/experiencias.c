// (adaptado de URI 1094) Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto

#include <stdio.h>

int main() {

    int n, soma=0, quant=0, coelhos=0, ratos=0, sapos=0;
    char tipo;

    printf("Quantidade de casos de teste: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nCobaias do teste: ");
        scanf("%d", &quant);
        soma += quant;
        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo); // Adicionando espaço em branco antes de %c para ignorar espaços em branco

        if (tipo == 'C'){
            coelhos += quant;
        }
        else if (tipo == 'R'){
            ratos += quant;
        }
        else if (tipo == 'S'){
            sapos += quant;
        }
    }

    double percentual_coelhos = (double)coelhos / soma * 100;
    double percentual_ratos = (double)ratos / soma * 100;
    double percentual_sapos = (double)sapos / soma * 100;

    printf("\nTotal de cobaias: %d\n", soma);
    printf("Total de coelhos: %d - %.2f%% do total\n", coelhos, percentual_coelhos);
    printf("Total de ratos: %d - %.2f%% do total\n", ratos, percentual_ratos);
    printf("Total de sapos: %d - %.2f%% do total\n", sapos, percentual_sapos);

    return 0;

}
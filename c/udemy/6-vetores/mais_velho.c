// Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome da pessoa mais velha.

#include <stdio.h>
#include <string.h>

int main() {

    int n, pos_maior, maior_idade;

    printf("Quantas pessoas? ");
    scanf("%d", &n);

    int idades[n];
    char nomes[n][50];

    for (int i=0; i<n; i++) {
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        scanf("%s ", &nomes[i][0]);
        
        printf("Idade: ");
        scanf("%d", &idades[i]);
    }

    maior_idade = idades[0];
    pos_maior = 0;

    for (int i=0; i<n; i++) {
        if (idades[i] > maior_idade) {
            maior_idade = idades[i];
            pos_maior = i;
        }
    }

    printf("Pessoa mais velha: %s\n", nomes[pos_maior]);

    return 0;

}
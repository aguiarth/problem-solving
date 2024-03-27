// Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os nomes e a idade média entre essas pessoas, com uma casa decimal

#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    int idade1, idade2;
    char nome1[50], nome2[50];
    double media;

    printf("Idade - pessoa 1: ");
    scanf("%i", &idade1);
    printf("Nome - pessoa 1: ");
    limpar_entrada();
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // Remove o caractere de nova linha

    printf("Idade - pessoa 2: ");
    scanf("%i", &idade2);
    printf("Nome - pessoa 2: ");
    limpar_entrada();
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    media = (idade1 + idade2)/2;

    printf("A idade média de %s e %s é de %.1lf anos", nome1, nome2, media);

    return 0;
}
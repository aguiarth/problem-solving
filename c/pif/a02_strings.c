// lendo e escrevendo strings em C

#include <stdio.h>

int main(void){

    char nome[30]; // string com 30 caracteres
    printf("Digite seu nome, por favor: ");
    scanf("%s", nome);

    printf("Bom dia, %s\n", nome);
    return 0;
}
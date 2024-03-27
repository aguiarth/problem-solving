// operações básicas em arrays

#include <stdio.h>

int main() {
    // Declarando e inicializando um array
    int array[5] = {10, 20, 30, 40, 50};

    // Acessando elementos do array
    printf("Elemento na posição 0: %d\n", array[0]);
    printf("Elemento na posição 2: %d\n", array[2]);

    // Alterando um elemento do array
    array[3] = 45;
    printf("Elemento na posição 3 (alterado): %d\n", array[3]);

    // Percorrendo e imprimindo todos os elementos do array
    printf("Elementos do array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Calculando o tamanho do array
    int tamanho = sizeof(array) / sizeof(array[0]);
    printf("Tamanho do array: %d\n", tamanho);

    // Calculando a soma de todos os elementos do array
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    printf("Soma dos elementos do array: %d\n", soma);

    return 0;
}

// Matriz de Hilbert - matriz quadrada em que cada elemento é a inversa da soma de seus índices de linha e coluna mais um

#include <stdio.h>

int main() {
    int ordem;

    printf("Digite a ordem da matriz de Hilbert: ");
    scanf("%d", &ordem);

    double matriz[ordem][ordem];

    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            matriz[i][j] = 1.0 / (i + j + 1);
        }
    }

    printf("Matriz de Hilbert:\n");
    for (int i = 0; i < ordem; i++) {
        for (int j = 0; j < ordem; j++) {
            printf("%.6f\t", matriz[i][j]); // Ajuste de precisão para melhor visualização
        }
        printf("\n");
    }

    return 0;
}

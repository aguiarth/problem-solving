// diferenças entre pré-incremento e pós-incremento

#include <stdio.h>

int main() {
    int i = 5;

    printf("Valor de i antes do incremento: %d\n", i);
    printf("Usando pré-incremento (++i): %d\n", ++i); // i é incrementado para 6 antes de ser usado
    printf("Valor de i após pré-incremento: %d\n\n", i);

    i = 5; // Resetando o valor de i

    printf("Valor de i antes do incremento: %d\n", i);
    printf("Usando pós-incremento (i++): %d\n", i++); // i é usado como 5 e depois incrementado para 6
    printf("Valor de i após pós-incremento: %d\n", i);

    return 0;
}

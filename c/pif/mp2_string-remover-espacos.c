// removendo espaços em branco de uma string

#include <stdio.h>
#include <string.h>

// Função para remover espaços em branco de uma string
void removerEspacos(char *str) {
    int i, j;
    for (i = 0; str[i] != '\0'; ++i) {
        while (str[i] == ' ') {
            for (j = i; str[j] != '\0'; ++j) {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }
}

int main() {
    char str[100];

    printf("Digite uma string com espaços em branco: ");
    fgets(str, sizeof(str), stdin);

    // Removendo o caractere de nova linha no final
    str[strcspn(str, "\n")] = '\0';

    // Remover espaços em branco
    removerEspacos(str);

    printf("String sem espaços em branco: %s\n", str);

    return 0;
}

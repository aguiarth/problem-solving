// remove vowels from a string

#include <stdio.h>

// opção 1
int remove_vowels(char *string) {
    int count = 0;
    // primeiro - colocar tudo minúsculo
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] = string[i] + 'a' - 'A';
        }

        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
            string[i] == 'o' || string[i] == 'u') {
            count++;
            }
    }
    return count;
}

// opção 2
int remove_vowels_2(char *string) {
    int count = 0;
    char *referencia = "aAeEiIoOuU";
    for (int i = 0; string[i] != '\0'; i++) {
        for (int j = 0; referencia[j]; j++) {
            if (string[i] == referencia[j]) {
                count++;
            }
        }
    }
    return count;
}

// opção 3
int remove_vowels_3(char *string) {
    int count = 0, k = 0, found = 0;
    char *referencia = "aAeEiIoOuU";
    for (int i = 0; string[i] != '\0'; i++) {
        found = 0;  
        for (int j = 0; referencia[j]; j++) {
            if (string[i] == referencia[j]) {
                count++;
                found = 1;
                break;
            } 
        }
        if (!found) {
            string[k] = string[i];
            k++;
        }  
    }
    string[k] = '\0';
    return count;
}

int main(void) {
    char input[50];

    printf("Digite uma palavra: \n");
    scanf("%s", input);

    printf("Número de vogais (1) = %d\n", remove_vowels(input));
    printf("Número de vogais (2) = %d\n", remove_vowels_2(input));
    printf("Número de vogais (3) = %d\n", remove_vowels_3(input));
    printf("String modificada: %s\n", input);
    return 0;
}
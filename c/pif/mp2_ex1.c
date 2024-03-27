// Exercicio 1
// 1. receba uma FRASE menor que 100 caracteres do usuário e coloque em uma string: str
// 2. receba 3 inteiros do usuário: A, B e C
// 3. modifique str pulando A caracteres para direita, B caracteres para esquerda e C caracteres para direita
// 4. imprima str
// 5. receba novamentye 3 inteiros do usuário: A, B e C
// 6. DESFAÇA as operações do passo 3
// 7. imprima str

#include <stdio.h>
#include <string.h>

int main(){

    int A, B, C;
    char str[100], ch = getchar();
    int i = 0;

    // 1 - recebendo a frase
    while (ch !='\n' && i < 100){
        str[i] = ch;
        i++;
        ch = getchar();
    }
    str[i] = '\0';


    // 2 - inteiros A, B, C
    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &A, &B, &C);

    // 3. modificar str pulando A caracteres para direita, B caracteres para esquerda e C caracteres para direita
    i = 0;
    while (str[i] != '\0'){
        if (A > 0){
            str[i] += A; // A caracteres para a direita
            if (str[i] > 'z'){
                str[i] -= 26;
            }
        }
        i++;
    }
    str[i] = '\0';

    i = 0;
    while (str[i] != '\0'){
        if (B > 0){
            str[i] -= B; // B caracteres para a esquerda
            if (str[i] > 'z'){
                str[i] -= 26;
            }
        }
        i++;
    }
    str[i] = '\0';

    i = 0;
    while (str[i] != '\0'){
        if (C > 0){
            str[i] += C; // C caracteres para a direita
            if (str[i] > 'z'){
                str[i] -= 26;
            }
        }
        i++;
    }
    str[i] = '\0';

    printf("Frase modificada: %s\n", str);
    
    printf("Digite 3 novos valores inteiros: ");
    scanf("%d %d %d", &A, &B, &C);

    i = 0;
    while (str[i] != '\0'){
        if (A > 0){
            str[i] += A; // A caracteres para a direita
            if (str[i] > 'z'){
                str[i] -= 26;
            }
        }
        i++;
    }
    str[i] = '\0';

    i = 0;
    while (str[i] != '\0'){
        if (B > 0){
            str[i] -= B; // B caracteres para a esquerda
            if (str[i] > 'z'){
                str[i] -= 26;
            }
        }
        i++;
    }
    str[i] = '\0';

    i = 0;
    while (str[i] != '\0'){
        if (C > 0){
            str[i] += C; // C caracteres para a direita
            if (str[i] > 'z'){
                str[i] -= 26;
            }
        }
        i++;
    }
    str[i] = '\0';

    printf("Frase modificada: %s\n", str);

    return 0;
}
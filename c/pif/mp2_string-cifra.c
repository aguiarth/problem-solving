#include <stdio.h>

int main(void){

    char str[100], str2[100], ch = getchar();// ch inicia com o 1° caracter

    int a, b, c, i = 0, A, B, C;

// 1. receba uma FRASE menor que 100 caracteres do usuário e coloque em uma string: str
    while(ch!='\n' && i<100){//lê até que o usuário der enter
        str[i] = ch; // guarda cada caracter na string str
        i++;
        ch = getchar();
    }
    str[i] = '\0';
// 2. receba 3 inteiros do usuário: A, B e C
    scanf("%d %d %d", &a, &b, &c);

// 3. modifique str pulando A caracteres para direita,B caracteres para esquerda e C caracteres para direita
    i = 0;
    while(ch!='\0' && i<100){// lê até o final da string
        str[i] += a;
        str[i] -= b;
        str[i] += c;
        i++;
    }
// 4. imprima str
    printf("primeira mudança: %s\n", str);

// 5. receba novamente 3 inteiros do usuário: A, B e C
    scanf("%d %d %d", &A, &B, &C);
    i = 0;//para começa no primeiro char

    while(str[i]!='\0' && i<100){//mudando novamente a string
        str2[i] = str[i];
        str2[i] += A;
        str2[i] -= B;
        str2[i] += C;
        i++;
    }
    printf("segunda mudança: %s\n", str2);

// 6. DESFAÇA as operações do passo 3
    i = 0;
    while(str[i]!='\0' && i<100){
        str[i] -= a;
        str[i] += b;
        str[i] -= c;
        i++;
    }
// 7. imprima str
    printf("palavra inicial: %s\n", str);

}
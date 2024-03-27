#include <stdio.h>

int main(void){
// Receba uma string do usuário e mude todas as vogais para a vogal ´i´
    char str[100], ch = getchar(), vogais[7] ={'a','A','E','e','o','O','U','u'};
    int i = 0;

    while(ch!='\n' && i<100){
        str[i] = ch;
        // verifica se char é uma vogal
        for(int j = 0; j<8; j++){
            if(str[i]==vogais[j]){
                str[i] = 'i';
            }
        }
    }
    ch = getchar();
    i++;
    
    str[i] = '\0';
    printf("%s", str);
    return 0;
}
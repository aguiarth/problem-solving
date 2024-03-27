// receba 3 strings do usuário e imprima essas strings em ordem alfabética

#include <stdio.h>

int main(){

    char stra[100], strb[100], strc[100], ch = getchar();
    int i=0;

    while (stra[i] != '\0' && i < 100){
        stra[i] = ch;
        i++;
        ch = getchar();
    }
    stra[i] = '\0';

    while (strb[i] != '\0' && i < 100){
        strb[i] = ch;
        i++;
        ch = getchar();
    }
    strb[i] = '\0';

    while (strc[i] != '\0' && i < 100){
        strc[i] = ch;
        i++;
        ch = getchar();
    }
    strc[i] = '\0';

    return 0;
}
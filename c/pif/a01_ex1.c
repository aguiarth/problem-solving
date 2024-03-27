#include <stdio.h>

int main(void) {
  // Passo 1 - Modifique o código para imprimir seu nome
  // Passo 2 - Some duas variáveis inteiras e exiba o resultado
  // Passo 3 - receba 2 inteiros do usuário

    printf("Nome - TH\n");
    int a = 4, b = 6, soma;
    soma = a + b;
    printf("Valor da soma: %d\n", a + b);
    printf("Outra soma: %d\n", soma);
    
    int val1, val2, prod;
    printf("Digite 2 valores: ");
    scanf("%d %d", &val1, &val2);
    prod = val1 * val2;
    printf("Produto: %d\n", val1*val2);
    printf("Outro produto: %d\n", prod);    

    return 0;

}
// Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com duas casas decimais

#include <stdio.h>

int main() {

    char escala;
    double temp, temp_convertida;

    printf("Qual a escala da temperatura inicial, C ou F? ");
    scanf("%c", &escala);
    printf("Temperatura: ");
    scanf("%lf", &temp);

    if (escala == 'C'){
        temp_convertida = (1.8 * temp) + 32;
        printf("Temperatura em Fahrenheit: %.2lf\n", temp_convertida);
    }
    else if (escala == 'F'){
        temp_convertida = (5.0 / 9.0) * (temp - 32); // os inteiros precisam de casa decimal senão a divisão 5/9 retorna 0
        printf("Temperatura em Celsius: %.2lf\n", temp_convertida);
    }

    return 0;
}
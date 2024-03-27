// Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com uma mensagem explicativa, conforme exemplo.

#include <stdio.h>

int main(){
    char nome[50];
    double valor, pagamento;
    int horas;

    printf("Nome: ");
    fgets(nome);

    printf("Valor por hora: ");
	scanf("%lf", &valor);

    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    pagamento = valor * horas;

    printf("O pagamento para %s deve ser %.2lf\n", nome, pagamento);

	return 0;
}
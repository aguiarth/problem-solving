# Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.

consumo = int(input('Quantos minutos foram consumidos? '))
valor_plano = 50
min_plano = 100
min_extra = 2

if consumo > min_plano:
    conta = valor_plano + ((consumo - min_plano) * min_extra)
    print(f'Valor a ser pago: R${conta:.2f}')

else:
    print(f'Valor a ser pago: R${valor_plano:.2f}')
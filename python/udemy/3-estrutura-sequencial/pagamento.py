# Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com uma mensagem explicativa, conforme exemplo.

func = input('Nome do funcionário: ')
valor = float(input('Valor recebido por hora trabalhada: '))
horas = int(input('Horas trabalhadas: '))

pagamento = valor * horas

print(f'O pagamento para {func} deve ser {round(pagamento, 2)}')

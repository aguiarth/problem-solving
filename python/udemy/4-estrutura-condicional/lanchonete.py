# (adaptado de URI 1038) Uma lanchonete possui vários produtos. Cada produto possui um código e um preço. Você deve fazer um programa para ler o código e a quantidade comprada de um produto (suponha um código válido), e daí informar qual o valor a ser pago, com duas casas decimais, conforme tabela de produtos apresentada.
# Usar apenas estruturas condicionais, sem listas ou dicionários.

cod = int(input('Código do produto: '))
quant = int(input('Quantidade: '))

if cod == 1:
    valor = quant * 5
elif cod == 2:
    valor = quant * 3.5
elif cod == 3:
    valor = quant * 4.8
elif cod == 4:
    valor = quant * 8.9
elif cod == 5:
    valor = quant * 7.32
else:
    print('Código inválido!')

print(f'Valor a ser pago: R${valor:.2f}')
# Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve mostrar o valor do troco a ser devolvido ao cliente.

unit = float(input('Preço unitário do produto: '))
quant = int(input('Quantidade de unidades compradas deste produto: '))
valor = float(input('Valor dado pelo cliente: '))

troco = valor - (unit * quant)

print(f'O valor do troco é R${round(troco, 2)}.')
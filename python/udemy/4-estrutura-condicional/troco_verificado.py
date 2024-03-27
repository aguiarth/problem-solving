# Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o valor restante conforme exemplo.

unit = float(input('Preço unitário do produto: '))
quant = float(input('Quantidade comprada: '))
valor = float(input('Valor recebido: '))

if valor >= (unit * quant):
    troco = valor - (unit * quant)
    print(f'Troco: R$ {troco:.2f}')
else:
    falta = (unit * quant) - valor
    print(f'O valor oferecido é insuficiente. Faltam R${falta:.2f} para efetuar a compra.')
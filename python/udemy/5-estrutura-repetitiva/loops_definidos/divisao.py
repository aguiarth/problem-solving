#  (adaptado de URI 1116) Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.

n = int(input('Quantos casos você vai digitar? '))

for i in range(n):
    x = float(input('Numerador: '))
    y = float(input('Denominador: '))
    print(f'DIVISÃO = {x/y:.2f}' if y != 0 else 'DIVISÃO IMPOSSÍVEL')


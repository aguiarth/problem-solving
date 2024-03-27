# (adaptado de URI 1044) Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os números podem ser digitados em qualquer ordem.

x = int(input('Primeiro número inteiro: '))
y = int(input('Segundo número inteiro: '))

if (x % y == 0) or (y % x == 0):
    print('são múltiplos')
else:
    print('não são múltiplos')
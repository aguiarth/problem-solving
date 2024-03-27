# Fazer um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula de Baskara, calcular e mostrar os valores das raízes x1 e x2 da equação com quatro casas decimais, conforme exemplo. Se a equação não possuir raízes reais, mostrar uma mensagem.

import math

a = float(input('coeficiente A: '))
b = float(input('coeficiente B: '))
c = float(input('coeficiente C: '))

delta = (b**2) - (4*a*c)

if a == 0 or delta < 0:
    print('A equação não possui raízes reais.')

elif delta > 0:
    x1 = (-b + math.sqrt(delta))/ (2 * a)
    x2 = (-b - math.sqrt(delta))/ (2 * a)
    print(f'Primeira raiz real: {round(x1, 4)}')
    print(f'Segunda raiz real: {round(x2, 4)}')

elif delta == 0:
    x = (-b + math.sqrt(delta))/2
    print(f'Raiz real única: {round(x, 4)}')    
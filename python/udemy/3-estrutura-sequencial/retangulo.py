# Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos.

import math

base = float(input('Base do retângulo: '))
altura = float(input('Altura do retângulo: '))

area = base * altura
perimetro = 2 * (base + altura)
diagonal = math.sqrt(base**2 + altura**2)

print(f'Área: {area}, perímetro: {perimetro}, diagonal: {round(diagonal, 2)}')
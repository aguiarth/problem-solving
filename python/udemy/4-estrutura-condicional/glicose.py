# Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa e depois mostrar na tela a classificação desta glicose de acordo com a tabela de referência oferecida.

glic = float(input('Medida da glicose (mg/dl): '))

if glic <= 100:
    print('Classificação: normal')

elif 100 < glic <= 140:
    print('Classificação: elevado')

else:
    print('Classificação: diabetes')
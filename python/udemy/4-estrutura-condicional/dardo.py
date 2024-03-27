# No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir. Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual foi a maior.

print('Digite a distância de cada tentativa.')
t1 = float(input('Tentativa 1: '))
t2 = float(input('Tentativa 2: '))
t3 = float(input('Tentativa 3: '))

if t1 > t2 and t1 > t3:
    maior = t1
elif t2 >= t1 and t2 >= t3:
    maior = t2
else:
    maior = t3

print(f'Maior distância: {maior}.')
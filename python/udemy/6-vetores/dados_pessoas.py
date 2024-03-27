# Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número de homens.

n = int(input('Quantas pessoas? '))
alturas = []
generos = []

for i in range(n):
    altura = float(input(f'Altura da {i+1}ª pessoa: '))
    alturas.append(altura)
    genero = input(f'Gênero da {i+1}ª pessoa [M/F]: ').capitalize()
    generos.append(genero)

homens = 0
mulheres = 0
alturas_mulheres = 0

for i in range(n):
    if generos[i] == 'M':
        homens += 1
    else:
        mulheres += 1
        alturas_mulheres += alturas[i]

media = alturas_mulheres/mulheres

print(f'\nMenor altura: {min(alturas)}')
print(f'Maior altura: {max(alturas)}')
print(f'Média de altura das mulheres: {media:.2f}')
print(f'Número de homens: {homens}')
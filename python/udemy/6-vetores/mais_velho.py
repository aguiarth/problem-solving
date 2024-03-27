# Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome da pessoa mais velha.

nomes = []
idades = []

n = int(input('Quantas pessoas? '))

for i in range(n):
    nome = input(f'Nome da {i+1}ª pessoa: ').capitalize()
    idade = int(input(f'Idade da {i+1}ª pessoa: '))
    nomes.append(nome)
    idades.append(idade)

for i in range(len(idades)):
    if idades[i] == max(idades):
        print(f'A pessoa mais velha é {nomes[i]}')
# Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram no 1o e 2o semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou igual a 6.0 (seis).

nomes = []
notas1 = []
notas2 = []

n = int(input('Quantos alunos? '))

for i in range(n):
    nome = input(f'\nNome do {i+1}º aluno: ').capitalize()
    nota1 = float(input(f'Primeira nota do {i+1}º aluno: '))
    nota2 = float(input(f'Segunda nota do {i+1}º aluno: '))
    nomes.append(nome)
    notas1.append(nota1)
    notas2.append(nota2)

print('\nAprovados por média: \n')
for i in range(len(nomes)):
    if (notas1[i] + notas2[i])/2 >= 6:
        print(nomes[i])
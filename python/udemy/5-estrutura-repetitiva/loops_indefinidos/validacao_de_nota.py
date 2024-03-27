# (adaptado de URI 1117) Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.

n1 = float(input('Primeira nota: '))

if n1 < 0 or n1 > 10:
    while n1 < 0 or n1 > 10:
        n1 = float(input('Valor inválido! Digite a primeira nota: '))

n2 = float(input('Segunda nota: '))
if n2 < 0 or n2 > 10:
    while n2 < 0 or n2 > 10:
        n2 = float(input('Valor inválido! Digite a segunda nota: '))

media = (n1 + n2) / 2
print(f'Média do semestre: {media}')

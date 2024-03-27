# Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida, mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.

n = int(input('Quantos números? '))
vet = []

for i in range(n):
    num = float(input('Digite um número: '))
    vet.append(num)

media = sum(vet)/len(vet)
print(f'\nA média é: {media:.3f}')
print('Elementos abaixo da média: ')

for i in range(len(vet)):
    if vet[i] < media:
        print(f'{vet[i]:.1f}')
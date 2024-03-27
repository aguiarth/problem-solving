# Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na tela todos os números pares, e também a quantidade de números pares.

n = int(input('Quantidade de números: '))
vet = []
pares = 0

for i in range(n):
    num = int(input('Digite o número: '))
    vet.append(num)

print('\nNúmeros pares: ')

for i in range(len(vet)):
    if vet[i] % 2 == 0:
        print(vet[i])
        pares += 1

print(f'\nQuantidade de pares: {pares}')
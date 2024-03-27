# Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.

n = int(input('Número inteiro positivo até 10: '))
vet = []

for i in range(n):
    num = int(input('Número inteiro: '))
    vet.append(num)

for x in vet:
    if x < 0:
        print(x)
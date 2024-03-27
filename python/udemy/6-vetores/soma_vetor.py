# Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida: - Imprimir todos os elementos do vetor - Mostrar na tela a soma e a média dos elementos do vetor. Não usar método de lista para a soma.

n = int(input('Quantos números? '))
vet = []
soma = 0

# princípio da coesão - cada parte do código com uma responsabilidade específica
# por isso, um novo loop foi criado para cada finalidade
for i in range(n):
    num = float(input('Digite o número: '))
    vet.append(num)

print('VALORES = ')
for i in range(n): # ou 'for i in range(len(vet))', já que 'n = len(vet)'
    print(vet[i], ' ')

for i in range(n):
    soma += vet[i]

media = soma/n

print(f'SOMA = {soma:.2f}')
print(f'MEDIA = {media:.2f}')
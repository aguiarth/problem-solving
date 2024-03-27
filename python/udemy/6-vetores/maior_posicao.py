# Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento, considerando a primeira posição como 0 (zero).

n = int(input('Quantos números? '))
vet = []

for i in range(n):
    num = float(input('Digite um número: '))
    if num not in vet:
        vet.append(num)

maior = max(vet)
posicao_maior = vet.index(maior)

# solução do professor
# pos_maior = 0
# maior = vet[0]

# for i in range(n):
#     if vet[i] > maior:
#         maior = vet[i]
#         pos_maior = i

print(f'Maior número: {maior}')
print(f'Posição do maior número: {posicao_maior}')
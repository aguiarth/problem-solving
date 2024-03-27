# Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N contendo números inteiros. Mostrar a soma dos elementos acima da diagonal principal. Um exemplo de números acima da diagonal principal é mostrado ao lado (no caso as células com fundo cinza).

n = int(input('Ordem da matriz quadrada (máximo 10): '))
mat = [[] for _ in range(n)]
soma = 0

for i in range(n):
    for j in range(n):
        mat[i].append(float(input(f'Elemento [{i}][{j}]: ')))

for i in range(n):
    for j in range(i+1, n): # início em i+1 para incluir apenas elementos acima da diagonal principal
        soma += mat[i][j]

print(f'Soma dos elementos acima da diagonal principal: {soma}')
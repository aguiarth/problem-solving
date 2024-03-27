# Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.

m = int(input('Linhas (máximo 10): '))
n = int(input('Colunas (máximo 10): '))

mata = [[] for _ in range(m)]
matb = [[] for _ in range(m)]
matc = [[] for _ in range(m)]

print('\nDigite os valores da matriz A: ')
for i in range(m):
    for j in range(n):
        vala = float(input(f'Elemento [{i}][{j}]: '))
        mata[i].append(vala)

print('\nDigite os valores da matriz B: ')
for i in range(m):
    for j in range(n):
        valb = float(input(f'Elemento [{i}][{j}]: '))
        matb[i].append(valb)

# matriz soma C
for i in range(m):
    for j in range(n):
        valc = mata[i][j] + matb[i][j]
        matc[i].append(valc)

print('\nMatriz C resultante: ')
print(matc)
# Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.

m = int(input('Linhas da matriz (máximo 10): '))
n = int(input('Colunas da matriz (máximo 10): '))

mat = [[] for _ in range(m)]

for i in range(m):
    for j in range(n):
        valor = float(input(f'Elemento [{i}][{j}]: '))
        mat[i].append(valor)

print('Números negativos da matriz: ')
for i in range(m):
    for j in range(n):
        if mat[i][j] < 0:
            print(mat[i][j])


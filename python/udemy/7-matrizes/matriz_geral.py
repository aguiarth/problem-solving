# Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as seguintes ações: 
# a) calcular e imprimir a soma de todos os elementos positivos da matriz. 
# b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha. 
# c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna. 
# d) imprimir os elementos da diagonal principal da matriz. 
# e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir a matriz alterada.

n = int(input('Ordem da matriz (máximo 10): '))
mat = [[] for _ in range(n)]
mat_alt = [[] for _ in range(n)]
positivos = 0

for i in range(n):
    for j in range(n):
        mat[i].append(float(input(f'Elemento [{i}][{j}]: ')))

# soma positivos
for i in range(n):
    for j in range(n):
        if mat[i][j] > 0:
            positivos += mat[i][j]

print(f'\nSoma dos elementos positivos: {positivos}')

# elementos de uma linha
r = int(input('\nLinha da matriz: '))
if 0 < r <= n:
    for ele_c in mat[r]:
        print(ele_c)
else:
    print(f'A linha {r} não existe na matriz!')

# elementos de uma coluna
c = int(input('\nColuna da matriz: '))
if 0 < c <= n:
    for i in range(n):
        print(mat[i][c])
else:
    print(f'A coluna {c} não existe na matriz!')

# elementos da diagonal principal
print('\nElementos da diagonal principal: ')
for i in range(n):
    for j in range(n):
        if i == j:
            print(mat[i][j])

# matriz com elementos negativos ao quadrado
mat_alt = mat
for i in range(n):
    for j in range(n):
        if mat_alt[i][j] < 0:
            mat_alt[i][j] = mat_alt[i][j] ** 2
print(f'\nMatriz alterada: {mat_alt}')
# Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores negativos da matriz.

n = int(input('Quantas linhas e colunas da matriz (máximo 10)? '))

# Inicializar a matriz como uma lista de listas vazias
mat = [[] for _ in range(n)]

# Ler os valores da matriz
for i in range(n):
    for j in range(n):
        valor = int(input(f'Digite o valor da posição [{i},{j}]: '))
        mat[i].append(valor)

# Mostrar a diagonal principal
print("Diagonal principal:")
for i in range(n):
    print(mat[i][i], end=" ")

# Contar valores negativos - uso de expressão geradora (generator expression)
negativos = sum(1 for linha in mat for elemento in linha if elemento < 0)
print(f"\nQuantidade de valores negativos: {negativos}")

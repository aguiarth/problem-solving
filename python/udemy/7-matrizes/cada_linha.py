# Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento de cada linha. Suponha não haver empates.

n = int(input('Ordem da matriz (máximo 10): '))
mat = [[] for _ in range(n)]

for i in range(n):
    for j in range(n):
        valor = float(input(f'Elemento [{i}][{j}]: '))
        mat[i].append(valor)

print('\nMaior elemento de cada linha: ')
for i in range(n):
    maior = mat[i][0]
    for j in range(n):
        if mat[i][j] >= maior:
            maior = mat[i][j]
    print(maior)

# Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.

m = int(input('Linhas da matriz (máximo 10): '))
n = int(input('Colunas da matriz (máximo 10): '))

# Inicializar a matriz como uma lista de listas vazias 
# as linhas são sublistas e as colunas são os elementos da sublista - por isso, inicializando com "m" e não "n"
mat = [[] for _ in range(m)]

# Ler os valores da matriz
for i in range(m): # linhas
    for j in range(n): # colunas
        valor = float(input(f'Digite o valor da posição [{i},{j}]: '))
        mat[i].append(valor)

# Calcular a soma de cada linha e armazenar em um vetor
vetor_somas = [sum(linha) for linha in mat]

print("Vetor gerado:")
print(vetor_somas)
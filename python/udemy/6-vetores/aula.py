n = int(input('Quantos números você vai digitar?'))
vetor = []

# o debug é uma ótima ferramenta para acompanhar o funcionamento do código - passo a passo

for i in range(n):
	num = float(input('Digite um número: '))
	vetor.append(num)

for i in range(n):
    print(vetor[i])
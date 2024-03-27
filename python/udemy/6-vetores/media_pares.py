# Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for digitado, mostrar a mensagem "NENHUM NUMERO PAR"

n = int(input('Quantos números? '))
vet = []
soma_pares = 0
cont_pares = 0

for i in range(n):
    num = float(input(f'Digite o {i+1}º número: '))
    vet.append(num)

for i in range(len(vet)):
    if vet[i] % 2 == 0:
        soma_pares += vet[i]
        cont_pares += 1

if soma_pares != 0:
    media = soma_pares / cont_pares
    print(f'Média dos pares: {media}')
else:
    print('NENHUM NÚMERO PAR')
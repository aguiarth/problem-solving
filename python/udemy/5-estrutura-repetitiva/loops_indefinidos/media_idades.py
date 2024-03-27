# Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez, mostrar a mensagem "IMPOSSIVEL CALCULAR"


soma = 0 # acumulador - somatório das idades
cont = 0 # contador - número de pessoas

idade = int(input('Idade: '))

if idade < 0:
    print('IMPOSSÍVEL CALCULAR')

else:
    while idade >= 0:
        soma += idade
        cont += 1
        idade = int(input('Idade: '))

    if cont > 0:
        media = soma / cont
        print(f'Idade média do grupo: {media:.2f}')

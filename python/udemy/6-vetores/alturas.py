# Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos, bem como os nomes dessas pessoas caso houver.

n = int(input('quantidade de pessoas: '))
nomes = []
idades = []
alturas = []
menores = 0

for i in range(n):
    nome = input('nome: ')
    nomes.append(nome)
    idade = int(input('idade: '))
    idades.append(idade)
    altura = float(input('altura: '))
    alturas.append(altura)

    if idade < 16:
        menores += 1

print(f'Altura média das pessoas: {sum(alturas)/len(alturas):.2f}m')
print(f'Pessoas com menos de 16 anos: {(menores/len(alturas)) * 100:.2f}%')

for i in range(n):
    if idades[i] < 16:
        print(nomes[i])

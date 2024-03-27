# Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo.

n1 = input('Nome 1: ')
i1 = int(input('Idade 1: '))
n2 = input('Nome 2: ')
i2 = int(input('Idade 2: '))

media = (i1 + i2) / 2

print(f'Nomes: {n1} e {n2}')
print(f'Idade média: {round(media, 2)}')
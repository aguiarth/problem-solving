# Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três números lidos. Em caso de empate, mostrar apenas uma vez.

n1 = int(input('Primeiro número inteiro: '))
n2 = int(input('Segundo número inteiro: '))
n3 = int(input('Terceiro número inteiro: '))

if (n1 < n2) and (n1 < n3): # if a < b and a < c:
    menor = n1
elif n2 <= n1 and n2 <= n3: # elif b < c:
    menor = n2
else:
    menor = n3

print(f'Menor número: {menor}')
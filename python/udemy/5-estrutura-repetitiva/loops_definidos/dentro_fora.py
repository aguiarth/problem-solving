# (adaptado de URI 1072) Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida. Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, conforme exemplo. 

n = int(input('Quantos números você vai digitar? '))
dentro = 0
fora = 0

for i in range(n):
    x = int(input(f'Valor inteiro n. {i+1}: '))
    if x in range(10, 21):
        dentro += 1
    else:
        fora += 1

print(f'{dentro} DENTRO')
print(f'{fora} FORA')
#  (adaptado de URI 1153) Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o fatorial de N.

n = int(input('Digite um número natural até 15: '))
fat = 1
fatores = []

for i in range(n):
    fat *= i+1
    fatores.append(str(i + 1))

fatores.reverse()

print(f'Fatorial = {" * ".join(fatores)} = {fat}')
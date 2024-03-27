#  (adaptado de URI 1071) Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números impares entre eles.

x = int(input('Digite um número inteiro: '))
y = int(input('Digite outro número inteiro: '))

if x > y:
    troca = x # necessário criar essa variável, senão a ação destrói o valor de uma das variáveis originais
    x = y
    y = troca

soma = 0 # acumulador antes do loop, senão ele sempre é reiniciado
for i in range (x+1, y):
    if i % 2 != 0:
        soma += i

print(f'SOMA DOS ÍMPARES = {soma}')
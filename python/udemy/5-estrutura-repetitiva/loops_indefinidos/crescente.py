# (adaptado de URI 1113) Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O programa deve finalizar quando forem digitados dois valores iguais.

x = int(input('Primeiro valor: '))
y = int(input('Segundo valor: '))

while x != y:
    if x < y:
        print('Ordem crescente')
    else:
        print('Ordem decrescente')
    
    x = int(input('Primeiro valor: '))
    y = int(input('Segundo valor: '))
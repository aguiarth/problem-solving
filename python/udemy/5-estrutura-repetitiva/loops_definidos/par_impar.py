# (adaptado de URI 1074) Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida. Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir apenas NULO. 

n = int(input('Quantidade de números: '))

for i in range(n):
    x = int(input('Digite um número inteiro: '))
    print('PAR' if x % 2 == 0 else 'ÍMPAR')
    print('POSITIVO' if x > 0 else ('NEGATIVO' if x < 0 else 'NULO'))
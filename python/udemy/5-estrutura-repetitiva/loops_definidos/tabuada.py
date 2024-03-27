# Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo

n = int(input('Número da tabuada: '))

for i in range(10):
    produto = n * (i + 1)
    print(n, " x ", (i + 1), " = ", produto)
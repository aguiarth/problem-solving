# Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima o vetor C gerado.

a = []
b = []
c = []

n = int(input('Quantos valores em cada vetor? '))
for i in range(n):
    num = float(input(f'Valor {i+1} do vetor A: '))
    a.append(num)

for i in range(n):
    num = float(input(f'Valor {i+1} do vetor B: '))
    b.append(num)

for i in range(n):
    ele_c = a[i] + b[i]
    c.append(ele_c)

print(f'Vetor resultante: {c}')
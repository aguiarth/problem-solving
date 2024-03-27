# Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados com quatro casas decimais): 
# a) a área do quadrado que tem lado A 
# b) a área do triângulo retângulo que base A e altura B 
# c) a área do trapézio que tem bases A e B, e altura C

a = int(input('Valor de A: '))
b = int(input('Valor de B: '))
c = int(input('Valor de C: '))

# áreas
quad = a ** 2
tri = (a * b) / 2
trap = ((a + b) * c) / 2

print(f'Área do quadrado: {round(quad, 2)}')
print(f'Área do triângulo: {round(tri, 2)}')
print(f'Área do trapézio: {round(trap, 2)}')
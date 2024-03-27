# Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do círculo com três casas decimais. A fórmula da área do círculo é a seguinte: area = π. r^2 . Você pode usar o valor de π fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use diretamente o valor 3.14159.

r = float(input('Valor do raio do círculo: '))
area = 3.14159 * r**2 

print(f'A área do círculo é {round(area, 2)}')

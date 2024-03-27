# Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida, o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com duas casas decimais, conforme exemplo.

largura = float(input('Largura do terreno: '))
comprimento = float(input('Comprimento do terreno: '))
m2 = float(input('Valor do metro quadrado do terreno: '))

area = largura * comprimento
preco = m2 * area

print(f'A área do terreno é {area} e seu preço é R${preco}')
#  (adaptado de URI 1041) Leia os valores das coordenadas X e Y de um ponto no plano cartesiano. A seguir, determine qual o quadrante ao qual pertence o ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.

x = float(input('X: '))
y = float(input('Y: '))

if x == 0 and y == 0:
    print('Origem')
elif x == 0 and y != 0:
    print('Eixo X')
elif x != 0 and y == 0:
    print('Eixo Y')

# o bloco a seguir foi escrito com operadores ternários para simplificar a lógica e melhorar a legibilidade do código:
else:
    quadrante = 1 if x > 0 and y > 0 else \
                2 if x < 0 and y > 0 else \
                3 if x < 0 and y < 0 else \
                4
    print(f'O ponto ({x}, {y}) está no {quadrante}º quadrante.')
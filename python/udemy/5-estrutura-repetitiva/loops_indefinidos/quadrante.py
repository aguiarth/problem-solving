# (adaptado de URI 1115) Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma). 

x = float(input('X: '))
y = float(input('Y: '))

while x != 0 and y != 0:
    quadrante = 'Q1' if (x > 0 and y > 0) else \
                'Q2' if (x < 0 and y > 0) else \
                'Q3' if (x < 0 and y < 0) else \
                'Q4'
    print('QUADRANTE', quadrante)
    x = float(input('X: '))
    y = float(input('Y: '))

# em Python, a barra invertida (\) é usada para indicar a continuação da linha, permitindo que se mantenha a estrutura ternária em várias linhas. Isso torna o código mais legível, especialmente quando há várias condições ternárias encadeadas
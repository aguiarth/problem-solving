#  (adaptado de URI 1079) Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida pela soma dos pesos. 

n = int(input('Número de casos de teste: '))

for i in range(n):
    a = float(input(f'Valor 1 do caso {i+1}: '))
    b = float(input(f'Valor 2 do caso {i+1}: '))
    c = float(input(f'Valor 3 do caso {i+1}: '))
    
    media = (a*2 + b*3 + c*5) / 10
    print(f'MÉDIA {media:.2f}')
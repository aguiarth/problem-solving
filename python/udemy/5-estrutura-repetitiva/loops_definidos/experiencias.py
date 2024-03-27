#  (adaptado de URI 1094) Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto.

cobaias = 0
coelhos = 0
ratos = 0
sapos = 0

n = int(input('Número de casos de teste: '))

for i in range(n):
    quant = int(input('Quantidade de cobaias: '))
    cobaias += quant

    tipo = input('Tipo de cobaia - [C] Coelho, [R] Rato ou [S] Sapo: ').upper()
    if tipo == 'C':
        coelhos += quant
    elif tipo == 'R':
        ratos += quant
    elif tipo == 'S':
        sapos += quant

print('\nRELATÓRIO FINAL')
print(f'\nTotal = {cobaias} cobaias')
print(f'{coelhos} coelhos, {(coelhos/cobaias) * 100:.2f}% do total')
print(f'{ratos} ratos, {(ratos/cobaias) * 100:.2f}% do total')
print(f'{sapos} sapos, {(sapos/cobaias) * 100:.2f}% do total')
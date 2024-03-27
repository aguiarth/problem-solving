# Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo médio do carro, com três casas decimais.

dist = float(input('Distância percorrida pelo carro, em km: '))
gas = float(input('Total de combustível gasto: '))

consumo = dist / gas

print(f'O consumo do carro é de {round(consumo, 1)} km/L.')
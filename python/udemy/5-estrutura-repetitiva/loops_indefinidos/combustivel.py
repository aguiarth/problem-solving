#  (adaptado de URI 1134) Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem como as quantidades de cada combustível.

# contadores
alcool = 0
gasolina = 0
diesel = 0

cod = int(input('Informe um código [1] Álcool [2] Gasolina [3] Diesel ou digite [4] para finalizar: '))

while cod != 4:
    if 1 <= cod <= 3:
        if cod == 1:
            alcool += 1
        elif cod == 2:
            gasolina += 1
        elif cod == 3:
            diesel += 1
    else:
        print('Código inválido!')

    cod = int(input('Informe um código [1] Álcool [2] Gasolina [3] Diesel ou digite [4] para finalizar: '))

print('MUITO OBRIGADO')
print(f'Álcool: {alcool}')
print(f'Gasolina: {gasolina}')
print(f'Diesel: {diesel}')
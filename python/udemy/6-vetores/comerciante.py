# Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto, mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias proporcionaram: 
# lucro < 10% 
# 10% ≤ lucro ≤ 20% 
# lucro > 20% 
# Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como o lucro total.

n = int(input('Quantos produtos? '))
nomes = []
precos_compra = []
precos_venda = []
abaixo10 = 0
entre = 0
acima20 = 0

for i in range(n):
    nome = input(f'{i+1}º produto: ')
    compra = float(input(f'Preço de compra: '))
    venda = float(input(f'Preço de venda: '))
    nomes.append(nome)
    precos_compra.append(compra)
    precos_venda.append(venda)

for i in range(n):
    if precos_venda[i] < 1.1 * precos_compra[i]:
        abaixo10 += 1
    elif 1.1 * precos_compra[i] <= precos_venda[i] <= 1.2 * precos_compra[i]:
        entre += 1
    else:
        acima20 += 1

# solução do professor ->
# for i in range(n):
#     lucro = precos_venda[i] - precos_compra[i]
#     percentual_lucro = lucro * 100 / precos_compra[i]
#     if percentual_lucro < 10:
#         abaixo10 += 1
#     elif 10 <= percentual_lucro <= 20:
#         entre += 1
#     else:
#         acima20 += 1

print(f'\nLucro abaixo de 10%: {abaixo10} produto(s)')
print(f'Lucro entre 10% e 20%: {entre} produto(s)')
print(f'Lucro acima de 20%: {acima20} produto(s)')
print(f'Valor total de compra: R${sum(precos_compra):.2f}')
print(f'Valor total de venda: R${sum(precos_venda):.2f}')
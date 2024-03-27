# exemplo em aula - estrutura "repita até"

# a estrutura "repita até" funciona melhor do que "repita enquanto" quando o problema precisa entrar no loop pelo menos 1 vez de forma garantida.
# se o problema precisa entrar no loop pelo menos 1 vez para só depois testar se tem que voltar e repetir o loop, a estrutura "repita até" funciona melhor 


# primeira forma - repetição 'enquanto' - repete código, não é legal

c = float(input('Digite a temperatura em Celsius: '))
f = 1.8 * c + 32
print(f'Equivalente em Fahrenheit: {f}')
rep = print('\nDeseja repetir? [S/N]').upper()

while rep == 'S':
    c = float(input('Digite a temperatura em Celsius: '))
    f = 1.8 * c + 32
    print(f'Equivalente em Fahrenheit: {f}')
    rep = print('Deseja repetir? [S/N]').upper()


# segunda forma - repetição 'enquanto' - evitando repetir código

rep == 'S' # forçou a condição

while rep == 'S':
    c = float(input('Digite a temperatura em Celsius: '))
    f = 1.8 * c + 32
    print(f'Equivalente em Fahrenheit: {f}')
    rep = print('Deseja repetir? [S/N]').upper()


## terceira forma - repetição 'repita até'

while True:
    c = float(input('Digite a temperatura em Celsius: '))
    f = 1.8 * c + 32
    print(f'Equivalente em Fahrenheit: {f}')
    rep = print('Deseja repetir? [S/N]').upper()
    
    if rep != 'S':
        break
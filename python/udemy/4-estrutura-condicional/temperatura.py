# Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com duas casas decimais.

escala = input('Qual a escala fornecida, C (Celsius) ou F (Fahrenheit)? ').upper()
temp = float(input(f'Temperatura em {escala}: '))

if escala == 'F':
    celsius = 5/9 * (temp - 32)
    print(f'Temperatura em Celsius: {celsius:.2f} graus.')

elif escala == 'C':
    fahrenheit = (1.8 * temp) + 32
    print(f'Temperatura em Fahrenheit: {fahrenheit:.2f} graus.')
#  (adaptado de URI 1048) Uma empresa vai conceder um aumento percentual de salário aos seus funcionários dependendo de quanto cada pessoa ganha, conforme tabela fornecida. Fazer um programa para ler o salário de uma pessoa, daí mostrar qual o novo salário desta pessoa depois do aumento, quanto foi o aumento e qual foi a porcentagem de aumento.

sal = float(input('Salário: '))

if sal <= 1000:
    pct = 0.2
elif 1000 < sal <= 3000:
    pct = 0.15
elif 3000 < sal <= 8000:
    pct = 0.1
else:
    pct = 0.05

# as 2 linhas seguintes se aproveitam a todas as condições, por isso estão fora da estrutura condicional:
aumento = pct * sal
novo = sal + (sal * pct)

print(f'Novo salário: R$ {novo:.2f}.')
print(f'Aumento: R$ {aumento:.2f}.')
print(f'Percentual de aumento: {pct * 100}%.')

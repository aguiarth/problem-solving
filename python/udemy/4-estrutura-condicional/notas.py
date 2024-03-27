# Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem "REPROVADO", conforme exemplos.

n1 = float(input('Primeira nota do semestre: '))
n2 = float(input('Segunda nota do semestre: '))
media = (n1 + n2) / 2

print(f'NOTA FINAL: {media}')

if media < 60.00:
    print('REPROVADO')
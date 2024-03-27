# (adaptado de URI 1046) Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas. 

inicio = int(input('Hora inicial do jogo: '))
fim = int(input('Hora final do jogo: '))

if fim > inicio:
    duracao = fim - inicio
else:
    duracao = (24 - inicio) + fim

print(f'A duração do jogo foi de {duracao} hora(s).')
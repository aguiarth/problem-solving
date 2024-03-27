# Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no formato horas:minutos:segundos.

segs = int(input('Duração de tempo em segundos: '))

horas = segs // 3600
resto = segs % 3600

minutos = resto // 60
segundos = resto % 60

print(f'A duração {segs}s corresponde a {horas}h:{minutos}min:{segundos}s.')
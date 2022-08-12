n = int(input())
horas_seg = 3600
horas = (n // horas_seg)
minutos = (n - (horas_seg * horas)) // 60
segundos = (n - (horas_seg * horas) - (minutos * 60))

print("{}:{}:{}".format(horas,minutos,segundos))
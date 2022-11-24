n = int(input())
l = []
l = input().split()
for i in range(n):
    l[i] = int(l[i])
menor = l[0]
pos = 0
for i in range(n):
    if l[i] < menor:
        menor = l[i]
        pos = i
print("Menor valor: {}".format(menor))
print("Posicao: {}".format(pos)) 
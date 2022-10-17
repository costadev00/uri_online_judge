n = int(input())
l = input().split()

menor = float('inf')
pos = 1
for i in range(len(l)):
    if int(l[i])<menor:
        menor = int(l[i])
        pos = i

print("Menor valor: {}".format(menor))
print("Posicao: {}".format(pos))
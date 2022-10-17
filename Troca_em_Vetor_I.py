l = []
for i in range(20):
    x = int(input())
    l.append(x)
cont=19
for i in range(10):
    l[i],l[cont] = l[cont],l[i]
    cont-=1
for i in range(20):
    print("N[{}] = {}".format(i,l[i]))
n=0.0
cont = 0
soma=0.0
while n<6:
    x = float(input())
    if x>0:
        soma+=x
        cont+=1.0
    n+=1.0
print("{:.0f} valores positivos".format(cont))
if cont>0:
    print("{:.1f}".format(soma/cont))
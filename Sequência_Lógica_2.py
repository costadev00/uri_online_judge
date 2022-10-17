x,y = input().split()
x = int(x)
y = int(y)
cont=0
for i in range(1,y+1):
    if cont+1 == x:
        print(i)
        cont=0
    else:
        print(i,end=" ")
        cont+=1
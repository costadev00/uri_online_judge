n = int(input())

for i in range(1,n+1):
    x,y = input().split()
    x = int(x)
    y = int(y)
    cont=1
    soma=0
    while cont<=y:
        if x%2!=0:
            soma+=x
            cont+=1
            x+=1
        else:
            x+=1
    print(soma)

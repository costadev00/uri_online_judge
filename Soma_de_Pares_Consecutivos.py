while True:
    x = int(input())
    if x==0:
        break
    cont=1
    soma=0
    while cont<=5:
        if x%2==0:
            soma+=x
            cont+=1
            x+=1
        else:
            x+=1
    print(soma)

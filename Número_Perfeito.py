n = int(input())
cont=0
while cont<n:
    x = int(input())
    soma=0
    for i in range(1,x):
        if x%i== 0:
            soma+=i
    if soma==x:
        print("{} eh perfeito".format(x))
    else:
        print("{} nao eh perfeito".format(x))
    cont+=1
n = int(input())
soma=0
for i in range(n):
    soma=0
    x,y = input().split()
    x = int(x)
    y = int(y)
    if x>y:
        for j in range (y+1,x):
            # print("{}".format(j))
            if j%2!=0:
                soma+=j 
    else:
        for j in range (x+1, y):
            if j%2!=0:
                soma+=j
    print(soma)
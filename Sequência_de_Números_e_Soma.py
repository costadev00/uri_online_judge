l = []
def sum_interval(x,y):
    sum = 0
    if x<y:
        for i in range(x,y+1):
            sum += i
            #python print without /n
            print(i, end=" ")
    else:
        for i in range(y,x+1):
            sum += i
            print(i, end=" ")
    print("Sum={}".format(sum))

while True:
    try:
        x,y = input().split()
        x = int(x)
        y = int(y)
        if x<=0 or y<=0:
            break
        sum_interval(x,y)
    except EOFError:
        break
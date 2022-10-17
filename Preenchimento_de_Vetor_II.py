n = int(input())
c=0
for i in range(1000):
    if c==n:
        c=0
    print("N[{}] = {}".format(i,c))
    c+=1
lp = []
li = []
for x in range(15):
    N = int(input())
    if N %2 ==0:
        lp.append(N)
        if len(lp) == 5:
            for i in range(5):
                print("par[{}] = {}".format(i,lp[i]))
            lp = []
    else:
        li.append(N)
        if len(li) == 5:
            for i in range(5):
                print("impar[{}] = {}".format(i,li[i]))
            li = []
for i in range(len(li)):
    print("impar[{}] = {}".format(i,li[i]))
for i in range(len(lp)):
    print("par[{}] = {}".format(i,lp[i]))
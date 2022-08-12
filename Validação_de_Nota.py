soma=0
c=0
while(c<2):
    try:
        n = float(input())
        if n>=0 and n<=10:
            soma+=n
            c+=1
        else:
            print("nota invalida")
    except EOFError:
        break
print("media = %.2f" %(soma/2))
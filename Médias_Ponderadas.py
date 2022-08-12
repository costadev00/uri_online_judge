n = int(input())

x=0
l = []
while(x<=n):
    while True:
        try:
            a,b,c = input().split()
            l.append(a)
            l.append(b)
            l.append(c)
            a = float(a)
            b = float(b)
            c = float(c)
            print("{:.1f}".format(((a*2) + (b*3) + (c*5))/10))
        except EOFError:
            break
    x+=1
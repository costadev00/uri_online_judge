n = int(input())
while True:
        a,b,ca,cb= input().split()
        a = int(a)
        b = int(b)
        ca = float(ca)
        cb = float(cb)
        anos = 0
        while a<=b:
            a = int(a*(1+ca/100))
            b = int(b*(1+cb/100))
            anos += 1
            if anos>100:
                print("Mais de 1 seculo.")
                break
        if anos<=100:
            print("{} anos.".format(anos))
        n-=1
        if n == 0:
            break
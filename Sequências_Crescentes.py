while True:
    try:
        n = int(input())
        if(n==0):
            break
        else:
            for i in range(n):
                if(i+1==n):
                    print(i+1)
                else:
                    print(i+1,end=" ")
    except EOFError:
        break
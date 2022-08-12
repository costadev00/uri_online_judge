while True:
    try:
        x,y = input().split()
        x = int(x)
        y = int(y)
        if x==y:
            break
        if x>y:
            print("Decrescente")
        else:
            print("Crescente")
    except EOFError:
        break
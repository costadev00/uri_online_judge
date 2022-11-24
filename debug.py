import math
#calculate the factorial of n
while True:
    try:
        n,m = input().split()
        n = int(n)
        m = int(m)
        print(math.factorial(n) - math.factorial(m))
    except EOFError:
        break
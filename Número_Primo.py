def isPrime(n):
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, int(n**0.5)+1, 2):
        if n % i == 0:
            return False
    return True
n = int(input())
cont=0
while cont<n:
    x = int(input())
    if isPrime(x):
        print("{} eh primo".format(x))
    else:
        print("{} nao eh primo".format(x))
    cont+=1
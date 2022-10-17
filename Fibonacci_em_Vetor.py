dp = []
for i in range(1000):
    dp.append(-1)
def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    elif dp[n]!=-1:
        return dp[n]
    else:
        dp[n] =  fib(n-1) + fib(n-2)
        return dp[n]
t = int(input())
cont=0
while cont<t:
    n = int(input())
    print("Fib({}) = {}".format(n,fib(n)))
    cont+=1
n = int(input())
while n:
    n -= 1
    exp = input()
    res = bin(int(exp)).count('1')
    print(res)
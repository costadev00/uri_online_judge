a, b = input().split()

a = int(a)
b = int(b)

if b % a == 0 or a % b== 0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")

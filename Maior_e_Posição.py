maior = -1
for i in range(100):
    x = int(input())
    if x > maior:
        maior = x
        pos = i
print(maior)
print(pos+1)
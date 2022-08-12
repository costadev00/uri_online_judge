n=0
cont=0
while n<5:
    x = int(input())
    if x%2==0:
        cont+=1
    n+=1
print("{} valores pares".format(cont))
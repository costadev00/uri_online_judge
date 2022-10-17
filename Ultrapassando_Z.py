x = int(input())
while True:
    z = int(input())
    if z>x:
        break

aux =x
c=1
while aux<=z:
    c+=1
    aux+=x
    x+=1
print(c)
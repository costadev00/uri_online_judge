n = int(input())

l = []
l.append(0)
l.append(1)
l.append(1)
for i in range(3,n+1):
    l.append(l[i-1]+l[i-2])
for i in range(n):
    if i+1==n:
        print(l[i])
    else:
        print(l[i], end=" ")

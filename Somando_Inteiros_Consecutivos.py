import math
r = input().split()
a = int(r[0])
for i in range(1,len(r)):
    if int(r[i])>0:
        n = int(r[i])
l = []

for i in range(n):
    l.append(a+i)

sum = 0
for i in range(len(l)):
    sum+=l[i]
print(sum)
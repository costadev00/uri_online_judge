l = []
l = input().split()
for i in range (3):
    l[i] = int(l[i])
l2 = []
for i in range(3):
    l2.append(l[i])
l2.sort()

for i in range(3):
    print(l2[i])
print("")
for i in range(3):
    print(l[i])
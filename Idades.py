l = []
while True:
    try:
        n = int(input())
        if n<0:
            break
        l.append(n)
    except EOFError:
        break
sum = 0.0
for i in range(len(l)):
        sum+=l[i]
print("{:.2f}".format(sum/len(l)))
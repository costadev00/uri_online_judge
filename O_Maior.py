a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)
maiorab = (a + b + abs(a - b)) / 2
maiorac = int((maiorab + c + abs(maiorab - c))/2)
print("{} eh o maior".format(maiorac))
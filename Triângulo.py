a,b,c = input().split()
a = float(a)
b = float(b)
c = float(c)

tri =0
if a < b + c and b < a + c and c < a + b:
    tri = 1
if tri != 0:
    print("Perimetro = {:.1f}".format( a + b + c))
else:
    area = ((a + b) * c) / 2
    print("Area = {:.1f}".format(area))
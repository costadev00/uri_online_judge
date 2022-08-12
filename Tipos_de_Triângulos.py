a,b,c = input().split()

a = float(a)
b = float(b)
c = float(c)

aux = 0.0
if a < b:
    aux = a
    a = b
    b = aux

if b < c:
    aux = b
    b = c
    c = aux

if a < b:
    aux = a
    a = b
    b = aux
if a >= (b + c):
    print("NAO FORMA TRIANGULO")
elif(a * a) == ((b * b) + (c * c)):
    print("TRIANGULO RETANGULO")
elif(a * a) > (b * b + c * c):
    print("TRIANGULO OBTUSANGULO")
elif(a * a) < (b * b) + (c * c):
        print("TRIANGULO ACUTANGULO")
if a == b and b == c:
    print("TRIANGULO EQUILATERO")
elif a == b or a == c or b == a or b == c:
    print("TRIANGULO ISOSCELES")
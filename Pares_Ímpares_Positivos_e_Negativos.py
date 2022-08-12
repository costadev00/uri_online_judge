n = 0
contp = 0
conti = 0
contpo = 0
contne = 0
while n < 5:
    x = int(input())
    if x % 2 == 0:
        contp += 1
    else:
        conti += 1
    if x > 0:
        contpo += 1
    elif x<0:
        contne += 1
    n += 1
print("{} valor(es) par(es)".format(contp))
print("{} valor(es) impar(es)".format(conti))
print("{} valor(es) positivo(s)".format(contpo))
print("{} valor(es) negativo(s)".format(contne))

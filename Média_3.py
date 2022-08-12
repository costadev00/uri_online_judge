a,b,c,d  = input().split()
a = float(a)*2
b = float(b)*3
c = float(c)*4
d = float(d)*1
media = (a+b+c+d)/10.0

print("Media: {:.1f}".format(media))
if media>=7:
    print("Aluno aprovado.")
elif media<5:
    print("Aluno reprovado.")
else:
    p = input()
    print("Aluno em exame.")
    print("Nota do exame: {}".format(p))
    p = (float(p) + media)/2
    if(p>=5.0):
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    print("Media final: {:.1f}".format(p))
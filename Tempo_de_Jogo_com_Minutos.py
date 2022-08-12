#function that recives the inital hour and initial minute and final hour and final minute and returns the time in minutes
def tempo_de_jogo(h1, m1, h2, m2):
    if h1 >= h2:
        h2 += 24
    tempo = h2 * 60 + m2 - (h1 * 60 + m1)
    return tempo

h1,m1,h2,m2 = map(int, input().split())
m = tempo_de_jogo(h1, m1, h2, m2)
h=0
# print(m)
while(m>=60):
    h+=1
    m-=60
if h1 == h2 and m1==m2:
    print("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
elif h1 == h2 and m1<m2:
    print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(h1-h2,m2-m1))
else:
   print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(h,m))
ini, fim = input().split()

ini = int(ini)
fim = int(fim)

if fim>ini:
    print("O JOGO DUROU {} HORA(S)".format(fim-ini))
elif fim<ini:
    fim+=24
    print("O JOGO DUROU {} HORA(S)".format(fim-ini))
else:
    print("O JOGO DUROU 24 HORA(S)")
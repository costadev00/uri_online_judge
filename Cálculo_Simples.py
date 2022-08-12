id, un, valor = input().split()
id2, un2, valor2 = input().split()
un = int(un)
valor = float(valor)

un2 = int(un2)
valor2 = float(valor2)
print("VALOR A PAGAR: R$ {:.2f}".format((valor * un) + (valor2 * un2)))

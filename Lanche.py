cod, qtd = input().split()
cod = int(cod)
qtd = float(qtd)

if cod == 1:
    preco = 4.00 * qtd
elif cod == 2:
    preco = 4.50 * qtd
elif cod == 3:
    preco = 5.00 * qtd
elif cod == 4:
    preco = 2.00 * qtd
elif cod == 5:
    preco = 1.50 * qtd
print("Total: R$ {:.2f}".format(preco))
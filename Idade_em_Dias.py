dias = int(input())
print("{} ano(s)".format(dias//365))
dias %=365
print("{} mes(es)".format(dias//30))
dias %=30
print("{} dia(s)".format(dias))
n = float(input())
n *= 100
print("NOTAS:")
print("{:.0f} nota(s) de R$ 100.00".format(n//10000))
n%=10000
print("{:.0f} nota(s) de R$ 50.00".format(n//5000))
n%=5000
print("{:.0f} nota(s) de R$ 20.00".format(n//2000))
n%=2000
print("{:.0f} nota(s) de R$ 10.00".format(n//1000))
n%=1000
print("{:.0f} nota(s) de R$ 5.00".format(n//500))
n%=500
print("{:.0f} nota(s) de R$ 2.00".format(n//200))
n%=200
print("MOEDAS:")
print("{:.0f} moeda(s) de R$ 1.00".format(n//100))
n%=100
print("{:.0f} moeda(s) de R$ 0.50".format(n//50))
n%=50
print("{:.0f} moeda(s) de R$ 0.25".format(n//25))
n%=25
print("{:.0f} moeda(s) de R$ 0.10".format(n//10))
n%=10
print("{:.0f} moeda(s) de R$ 0.05".format(n//5))
n%=5
print("{:.0f} moeda(s) de R$ 0.01".format(n//1))
n%=1
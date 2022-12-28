p = int(input())
n = int(input())
if p < n:
    print("Ainda faltam", n - p, "presentes!")
else:
    print("Sobraram", p % n, "presentes!")

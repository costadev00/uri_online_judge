import math 
A,B,C = input().split()
A = float(A)
B = float(B)
C = float(C)

aux =  (math.pow(B, 2) - (4 * A * C))
if aux<0 or A==0:
    print("Impossivel calcular")
else: 
    D = math.sqrt((math.pow(B, 2) - (4 * A * C)))
    R1 = ((-B + D) / (2 * A))
    R2 = ((-B - D) / (2 * A))
    print("R1 = {:.5f}".format(R1))
    print("R2 = {:.5f}".format(R2))
# /*

# */
# #include <stdio.h>
# #include <stdlib.h>
# int main()
# {
#     int n, alc = 0, gas = 0, die = 0;
#     do
#     {
#         scanf("%d", &n);
#         if (n == 1)
#         {
#             alc++;
#         }
#         if (n == 2)
#         {
#             gas++;
#         }
#         if (n == 3)
#         {
#             die++;
#         }
#     } while (n != 4);
#     printf("MUITO OBRIGADO\n");
#     printf("Alcool: %d\n", alc);
#     printf("Gasolina: %d\n", gas);
#     printf("Diesel: %d\n", die);
#     return 0;
# }

n = 0
alc = 0
gas = 0
die = 0
while n != 4:
    n = int(input())
    if n == 1:
        alc += 1
    elif n == 2:
        gas += 1
    elif n == 3:
        die += 1
print("MUITO OBRIGADO")
print("Alcool: %d" % alc)
print("Gasolina: %d" % gas)
print("Diesel: %d" % die)

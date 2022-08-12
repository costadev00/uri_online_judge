#     float x, acm = 0;
#     int aux = 0, continua = 0;
#     do
#     {
#         aux = 0, continua = 0, x = 0, acm = 0;
#         while (aux != 2)
#         {
#             scanf("%f", &x);
#             if (x >= 0 && x <= 10)
#             {
#                 acm += x;
#                 aux++;
#             }
#             else
#             {
#                 printf("nota invalida\n");
#             }
#         }
#         printf("media = %.2f\n", acm / 2);
#         while (continua < 1 || continua > 2)
#         {
#             printf("novo calculo (1-sim 2-nao)\n");
#             scanf("%d", &continua);
#         }
#     } while (continua != 2);


x = 0.0
acm = 0.0
aux = 0
while(True):
    x = 0.0
    acm = 0.0
    aux = 0
    continua = 0
    try:
        while aux != 2:
            x = float(input())
            if x >= 0 and x <= 10:
                acm += x
                aux += 1
            else:
                print("nota invalida")
        print("media = %.2f" % (acm / 2))
        while continua < 1 or continua > 2:
            print("novo calculo (1-sim 2-nao)")
            continua = int(input())
        if continua == 2:
            break
    except EOFError:
        break
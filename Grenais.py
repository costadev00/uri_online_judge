# int x, y, acm = 0, vit_inter = 0, vit_gremio = 0, empate = 0, continua = 0, tot_jogo = 1;
#     scanf("%d %d", &x, &y);
#     if (x == y)
#     {
#         empate++;
#     }
#     if (x > y)
#     {
#         vit_inter++;
#     }
#     else
#     {
#         vit_gremio++;
#     }
#     do
#     {
#         printf("Novo grenal (1-sim 2-nao)\n");
#         scanf("%d", &continua);
#         if (continua == 1)
#         {
#             tot_jogo++;
#             scanf("%d %d", &x, &y);
#             if (x == y)
#             {
#                 empate++;
#             }
#             if (x > y)
#             {
#                 vit_inter++;
#             }
#             else
#             {
#                 vit_gremio++;
#             }
#         }
#     } while (continua != 2);

#     printf("%d grenais\n", tot_jogo);
#     printf("Inter:%d\n", vit_inter);
#     printf("Gremio:%d\n", vit_gremio);
#     printf("Empates:%d\n", empate);
#     if (vit_inter > vit_gremio)
#     {
#         printf("Inter venceu mais\n");
#     }

x,y = 0,0
while True:
    try:
        x,y = input().split()
        x,y = int(x),int(y)
        empate = 0
        vit_inter = 0
        vit_gremio = 0
        tot_jogo = 1
        while True:
            if x == y:
                empate += 1
            if x > y:
                vit_inter += 1
            else:
                vit_gremio += 1
            print("Novo grenal (1-sim 2-nao)")
            continua = int(input())
            if continua == 1:
                tot_jogo += 1
                x,y = input().split()
                x,y = int(x),int(y)
            else:
                break
        print("%d grenais" % tot_jogo)
        print("Inter:%d" % vit_inter)
        print("Gremio:%d" % vit_gremio)
        print("Empates:%d" % empate)
        if vit_inter > vit_gremio:
            print("Inter venceu mais")
        elif vit_inter < vit_gremio:
            print("Gremio venceu mais")
    except EOFError:
        break

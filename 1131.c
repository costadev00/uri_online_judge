/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, acm = 0, vit_inter = 0, vit_gremio = 0, empate = 0, continua = 0, tot_jogo = 1;
    scanf("%d %d", &x, &y);
    if (x == y)
    {
        empate++;
    }
    if (x > y)
    {
        vit_inter++;
    }
    else
    {
        vit_gremio++;
    }
    do
    {
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &continua);
        if (continua == 1)
        {
            tot_jogo++;
            scanf("%d %d", &x, &y);
            if (x == y)
            {
                empate++;
            }
            if (x > y)
            {
                vit_inter++;
            }
            else
            {
                vit_gremio++;
            }
        }
    } while (continua != 2);

    printf("%d grenais\n", tot_jogo);
    printf("Inter:%d\n", vit_inter);
    printf("Gremio:%d\n", vit_gremio);
    printf("Empates:%d\n", empate);
    if (vit_inter > vit_gremio)
    {
        printf("Inter venceu mais\n");
    }
    return 0;
}
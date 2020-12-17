/*
TODO: SOLVE THIS SHIT
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int g = 1, p = 1, aux = 0, sis_pont, pil_pont, pontos[105], maior, flag;

    int res_gp[g][p], ord_pont[p];
    do
    {
        scanf("%d %d", &g, &p);
        aux = 0;
        for (int i = 0; i < g; i++)
        {
            for (int j = 0; j < p; j++)
            {
                scanf("%d", &res_gp[i][j]);
            }
        }
        scanf("%d", &sis_pont);
        for (int k = 0; k < sis_pont; k++)
        {
            memset(pontos, 0, sizeof(pontos));
            memset(ord_pont, 0, sizeof(ord_pont));

            scanf("%d", &pil_pont);
            for (int j = 0; j < pil_pont; j++)
            {
                scanf("%d", &ord_pont[j]);
            }
            for (int i = 0; i < g; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    pontos[j] += ord_pont[res_gp[i][j] - 1];
                }
            }
            maior = 0;
            for (int i = 0; i < p; ++i)
                if (pontos[i] > maior)
                    maior = pontos[i];

            flag = 1;
            for (int i = 0; i < p; ++i)
                if (pontos[i] == maior)
                    if (flag == 1)
                        printf("%d", i + 1), flag = 0;
                    else
                        printf(" %d", i + 1);

            printf("\n");
        }

    } while (g != 0 && p != 0);
    return 0;
}
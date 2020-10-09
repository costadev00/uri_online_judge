/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int g, p, aux = 0, sis_pont;
    scanf("%d %d", &g, &p);

    int res_gp[p], ord_pont[p];
    do
    {
        while (aux != g)
        {
            for (int i = 0; i < p; i++)
            {
                scanf("%d", &res_gp[i]);
            }
            aux++;
        }
        scanf("%d", &sis_pont);
        for (int i = 0; i < sis_pont; i++)
        {
            for (int j = 0; j < p; j++)
            {
                scanf("%d", &ord_pont);
            }
            // printf("%d\n", res);
        }
    } while (g != 0 && p != 0);
    return 0;
}
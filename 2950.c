/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, h, d, g, cont;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        cont = 0;
        scanf("%d %d %d", &h, &d, &g);
        if (h >= 200 && h <= 300)
        {
            cont++;
        }
        if (d >= 50)
        {
            cont++;
        }
        if (g >= 150)
        {
            cont++;
        }

        if (cont == 3)
        {
            printf("Sim\n");
        }
        else
        {
            printf("Nao\n");
        }
    }
    return 0;
}
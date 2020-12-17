/*
ainda incompleto
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 1, t[1000], aux = 0;
    while (n != 0)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &t);
            aux = aux + t - t + 10;
        }
        printf("%d\n", aux);
        aux = 0;
    }
    return 0;
}
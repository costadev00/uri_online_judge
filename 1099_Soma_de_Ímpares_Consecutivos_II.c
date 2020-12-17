/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x, y, maior, menor, res;
    scanf("%d", &n);
    int vet_res[n];
    for (int i = 0; i < n; i++)
    {
        res = 0;
        scanf("%d %d", &x, &y);
        if (x < y)
        {
            menor = x;
            maior = y;
        }
        else
        {
            menor = y;
            maior = x;
        }

        for (int i = menor + 1; i < maior; i++)
        {
            if (i % 2 != 0)
            {
                res += i;
            }
        }
        printf("%d\n", res);
    }
    return 0;
}
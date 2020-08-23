/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, n, x = 2, aux = 0, vet[999];
    vet[0] = 0;
    vet[1] = 1;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        while (aux < n)
        {
            vet[x] = vet[x - 1] + vet[x - 2];
            x++;
            aux++;
        }
        printf("%d\n", vet[x]);
    }
    return 0;
}
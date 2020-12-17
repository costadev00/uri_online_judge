/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[20], j = 19, x = 0;
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        x = vet[i];
        vet[i] = vet[19 - i];
        vet[19 - i] = x;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, vet[i]);
    }
    return 0;
}
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
    // for (int i = 0; x < 20; i++)
    // {
    //     vet[i] = vet[j];
    //     x++;
    //     j--;
    // }
    for (int i = 19; i >= 0; i--)
    {
        printf("N[%d] = %d\n", i, vet[i]);
    }
    return 0;
}
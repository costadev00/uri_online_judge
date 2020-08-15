/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, vet[10];
    scanf("%d", &n);
    vet[0] = n;
    vet[1] = n * 2;
    for (int i = 2; i < 10; i++)
    {
        vet[i] = vet[i - 1] * 2;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, vet[i]);
    }
    return 0;
}
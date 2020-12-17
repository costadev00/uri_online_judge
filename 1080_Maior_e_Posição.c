/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[100], maior = -1, pos = 0;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &vet[i]);
        if (vet[i] > maior)
        {
            maior = vet[i];
            pos = i+1;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", pos);
    return 0;
}
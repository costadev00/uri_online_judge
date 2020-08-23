/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, vet[10000], esc = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if ((vet[i] - vet[i + 1]) == vet[i + 1] - vet[i + 2])
        {
            esc++;
        }
    }
    printf("%d\n", esc);
    return 0;
}
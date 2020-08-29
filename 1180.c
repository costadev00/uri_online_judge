/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, vet[1000], menor = 1, aux = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }
    menor = vet[0];
    for (int i = 0; i < n; i++)
    {
        if (menor >= vet[i])
        {
            menor = vet[i];
            aux = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", aux);
    return 0;
}
/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double vet[6], media = 0, soma = 0;
    int cont = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%lf", &vet[i]);
        if (vet[i] > 0)
        {
            soma = soma + vet[i];
            cont++;
        }
    }
    media = soma / cont;
    printf("%d valores positivos\n", cont);
    printf("%.1lf\n", media);
    return 0;
}
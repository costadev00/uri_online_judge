/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double vet[6];
    int cont = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%lf", &vet[i]);
        if (vet[i] > 0)
        {
            cont++;
        }
    }
    printf("%d valores positivos\n", cont);
    return 0;
}
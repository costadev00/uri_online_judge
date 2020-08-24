/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, vet1[5], vet2[5], aux = 0, aux_par = 0, aux_impar = 0;
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            vet1[aux_par] = n;
            ++aux_par;
        }
        else
        {
            vet2[aux_impar] = n;
            ++aux_impar;
        }

        if (aux_par == 5)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("par[%d] = %d\n", j, vet1[j]);
            }
            aux_par = 0;
        }

        if (aux_impar == 5)
        {
            for (int j = 0; j < 5; j++)
            {

                printf("impar[%d] = %d\n", j, vet2[j]);
            }
            aux_impar = 0;
        }
        // aux++;
    }
    for (int i = 0; i < aux_impar; i++)
    {
        printf("impar[%d] = %d\n", i, vet2[i]);
    }
    for (int i = 0; i < aux_par; i++)
    {
        printf("par[%d] = %d\n", i, vet1[i]);
    }
    return 0;
}
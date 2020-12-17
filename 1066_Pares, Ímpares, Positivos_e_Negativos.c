/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[5], acm_par = 0, acm_impar = 0, acm_pos = 0, acm_neg = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vet[i]);
        if (vet[i] % 2 == 0)
        {
            acm_par++;
        }
        else if (vet[i] % 2 != 0)
        {
            acm_impar++;
        }
        if (vet[i] > 0)
        {
            acm_pos++;
        }
        else if (vet[i] < 0)
        {
            acm_neg++;
        }
    }
    printf("%d valor(es) par(es)\n", acm_par);
    printf("%d valor(es) impar(es)\n", acm_impar);
    printf("%d valor(es) positivo(s)\n", acm_pos);
    printf("%d valor(es) negativo(s)\n", acm_neg);
    return 0;
}
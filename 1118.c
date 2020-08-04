/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{

    float x, acm = 0;
    int aux = 0, continua = 0;
    do
    {
        aux = 0, continua = 0, x = 0, acm = 0;
        while (aux != 2)
        {
            scanf("%f", &x);
            if (x >= 0 && x <= 10)
            {
                acm += x;
                aux++;
            }
            else
            {
                printf("nota invalida\n");
            }
        }
        printf("media = %.2f\n", acm / 2);
        while (continua < 1 || continua > 2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &continua);
        }
    } while (continua != 2);
    return 0;
}
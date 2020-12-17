/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x, y, acm = 0;
    int aux = 0;

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

    return 0;
}
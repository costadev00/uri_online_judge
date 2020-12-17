/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float media=0, n, acm_med=0, cont=0;
    do
    {
        scanf("%f", &n);
        if (n<0) {
            break;
        }
        acm_med+=n;
        cont++;
    } while (n>0);
    media = acm_med/cont;
    printf("%.2f\n", media);
    return 0;
}
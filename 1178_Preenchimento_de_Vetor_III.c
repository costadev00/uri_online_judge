/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    double x, vet[100];
    scanf("%lf", &x);
    vet[0] = x;
    printf("N[0] = %.4lf\n", vet[0]);
    for (i = 1; i < 100; i++)
    {
        vet[i] = vet[i - 1] / 2;
        printf("N[%d] = %.4lf\n", i, vet[i]);
    }
    return 0;
}
/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned long long int vet[61], x, j;
    int t, n;
    vet[0] = 0;
    vet[1] = 1;
    scanf("%lld", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &n);

        for (j = 2; j < n + 1; j++)
        {
            vet[j] = vet[j - 1] + vet[j - 2];
            x = vet[j];
        }

        if (n == 0)
        {
            printf("Fib(0) = 0\n");
        }
        if (n == 1)
        {
            printf("Fib(1) = 1\n");
        }
        if (n != 0 && n != 1)
        {
            printf("Fib(%lld) = %lld\n", j - 1, x);
        }
    }
    return 0;
}
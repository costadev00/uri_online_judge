/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, maior, menor, sum;
    scanf("%d %d", &m, &n);
    while (m > 0 || m != NULL || n > 0 || n != NULL)
    {
        sum = 0;
        if (m < 0 || m == NULL || n < 0 || n == NULL)
        {
            break;
        }
        if (m > n)
        {
            maior = m;
            menor = n;
        }
        if (m < n)
        {
            maior = n;
            menor = m;
        }
        for (int i = menor; i <= maior; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
        scanf("%d %d", &m, &n);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int value[999], res = 0, n, t, x = 0;
    value[0] = 1;
    value[1] = 1;
    value[2] = 2;
    scanf("%d", &t);
    while (x < t)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            value[i] = value[i - 1] + value[i - 2];
            // printf("%d\n", value[i]);
            res = value[i];
        }
        printf("Fib(%d) = %d\n", n, res);
        res = 0;
        x++;
    }
    return 0;
}
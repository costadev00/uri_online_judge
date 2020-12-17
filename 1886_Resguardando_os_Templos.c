#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x, res = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        for (int j = 1; j <= x; j++)
        {
            if (j % 2 == 0)
            {
                res = res - 1;
            }
            else
            {
                res = res + 1;
            }
        }
        printf("%d\n", res);
        res = 0;
    }
    return 0;
}
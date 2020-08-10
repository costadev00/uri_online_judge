#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int a, b = 0, c = 1;
    for (i = 0; i < n; i++)
    {
        if (i < 1)
        {
            a = 0;
        }
        else if (i == 1)
        {
            a = 1;
        }
        else
        {
            a = b + c;
            b = c;
            c = a;
        }
        if (i == n - 1)
        {
            printf("%d\n", a);
        }
        else
        {
            printf("%d ", a);
        }
    }
    return 0;
}
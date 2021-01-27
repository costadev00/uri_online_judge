/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, i;
    scanf("%d", &x);
    int a, b = 0, c = 1;
    for (i = 0; i < x; i++)
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
        if (i == x - 1)
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
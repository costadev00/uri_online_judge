/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x, res = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x != 1)
        {
            res++;
        }
    }
    printf("%d\n", res);
    return 0;
}
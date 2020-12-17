/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x, y, res = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        res = res + (x * y);
    }
    printf("%d\n", res);

    return 0;
}
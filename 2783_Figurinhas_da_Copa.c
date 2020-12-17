/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, l, c, total = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &l, &c);
        if (l > c)
        {
            total += c;
        }
    }
    printf("%d\n", total);
    return 0;
}
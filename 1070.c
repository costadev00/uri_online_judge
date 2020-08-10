/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, j = 0;
    scanf("%d", &x);
    while (j < 6)
    {
        if (x % 2 != 0)
        {
            printf("%d\n", x);
            j++;
        }
        if (x % 2 == 0)
        {
            x++;
        }
        else
        {
            x++;
            x++;
        }
    }
    return 0;
}
/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    do
    {
        scanf("%d", &x);
        for (int i = 1; i <= x; i++)
        {
            if (i != x)
            {
                printf("%d ", i);
            }
            else
            {
                printf("%d", i);
            }
        }
        if (x != 0)
        {
            printf("\n");
        }
    } while (x != 0);

    return 0;
}
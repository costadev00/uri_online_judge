/*
TODO: SOLVE
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int k, x, y, m, n;
    do
    {
        scanf("%d", &k);
        scanf("%d %d", &n, &m);

        for (int i = 0; i < k; i++)
        {
            scanf("%d %d", &x, &y);

            if (x > 0 && y > 0)
            {
                printf("NE\n");
            }
            if (x > 0 && y < 0)
            {
                printf("SE\n");
            }
            if (x < 0 && y < 0)
            {
                printf("SO\n");
            }
            if (x < 0 && y > 0)
            {
                printf("NO\n");
            }
            if (x == y)
            {
                printf("divisa\n");
            }
        }
    } while (k != 0);
    return 0;
}
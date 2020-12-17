/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, a, b, c, d, e, flag = 0;
    do
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }

        for (int i = 0; i < n; i++)
        {
            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
            if (a <= 127)
            {
                flag++;
            }
            if (b <= 127)
            {
                flag++;
            }
            if (c <= 127)
            {
                flag++;
            }
            if (d <= 127)
            {
                flag++;
            }
            if (e <= 127)
            {
                flag++;
            }

            if (a <= 127 && flag == 1)
            {
                printf("A\n");
            }
            else if (b <= 127 && flag == 1)
            {
                printf("B\n");
            }
            else if (c <= 127 && flag == 1)
            {
                printf("C\n");
            }
            else if (d <= 127 && flag == 1)
            {
                printf("D\n");
            }
            else if (e <= 127 && flag == 1)
            {
                printf("E\n");
            }
            else
            {
                printf("*\n");
            }
            flag = 0;
        }
    } while (n != 0);
    return 0;
}
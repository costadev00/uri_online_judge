/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, j = 0, count = 1;
    scanf("%d %d", &x, &y);
    do
    {
        j = 0;
        while (j < x)
        {
            if (count == y)
            {
                printf("%d", count);
            }
            else
            {
                printf("%d ", count);
            }
            count++;
            j++;
        }
        if (count < y)
        {
            printf("\n");
        }
    } while (count <= y);

    return 0;
}
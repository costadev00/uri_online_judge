/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, j = 0, count = 1, count2 = 1;
    scanf("%d %d", &x, &y);
    do
    {
        j = 0;
        count2 = 1;
        while (j < x)
        {
            if (count == y)
            {
                printf("%d", count);
            }
            else if (count2 < x)
            {
                printf("%d ", count);
            }
            else
            {
                printf("%d", count);
            }
            count++;
            j++;
            count2++;
        }
        printf("\n");
    } while (count <= y);

    return 0;
}
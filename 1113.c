/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y;
    do
    {
        scanf("%d", &x);
        scanf("%d", &y);
        if (x == y)
        {
            break;
        }
        if (x > y)
        {
            printf("Decrescente\n");
        }
        else
        {
            printf("Crescente\n");
        }
    } while (x != y);
    return 0;
}
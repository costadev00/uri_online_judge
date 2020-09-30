/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, n2, n3, total;
    scanf("%d %d %d", &n1, &n2, &n3);

    total = n1 * n3;
    if (total <= n2)
    {

        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    return 0;
}
/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int p, r;
    scanf("%d %d", &p, &r);
    if (p == 1 && r == 1)
    {
        printf("A\n");
    }
    else if (p == 1 && r == 0)
    {
        printf("B\n");
    }
    else
    {

        printf("C\n");
    }
    return 0;
}
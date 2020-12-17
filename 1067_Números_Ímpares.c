/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        i++;
        printf("%d\n", i);
    }
    return 0;
}
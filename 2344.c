/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("E\n");
    }
    if (n >= 1 && n <= 35)
    {
        printf("D\n");
    }
    if (n >= 36 && n <= 60)
    {
        printf("C\n");
    }
    if (n >= 61 && n <= 85)
    {
        printf("B\n");
    }
    if (n >= 86 && n <= 100)
    {
        printf("A\n");
    }
    return 0;
}
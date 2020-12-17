/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x = 0;
    for (int i = 0; i < 50; i++)
    {
        x = x + 2;
        printf("%d\n", x);
    }
    return 0;
}
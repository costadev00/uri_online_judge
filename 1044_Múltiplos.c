/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 0, b = 0;
    scanf("%d", &a);
    scanf("%d", &b);

    if ((a % b) == 0 || (b % a) == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
    return 0;
}
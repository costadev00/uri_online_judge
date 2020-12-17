/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x > 8000)
        {
            printf("Mais de 8000!\n");
        }
        else
        {
            printf("Inseto!\n");
        }
    }
    return 0;
}
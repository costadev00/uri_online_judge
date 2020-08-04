/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, menor, maior;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x < y)
    {
        menor = x;
        maior = y;
    }
    else
    {
        menor = y;
        maior = x;
    }
    for (int i = menor + 1; i < maior; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
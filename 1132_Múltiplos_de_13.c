/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, maior = 0, menor = 0, res = 0;
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
    if (x % 13 != 0)
    {
        res += x;
    }
    if (y % 13 != 0)
    {
        res += y;
    }
    for (int i = menor + 1; i < maior; i++)
    {

        if (i % 13 != 0)
        {
            res += i;
        }
    }
    printf("%d\n", res);
    return 0;
}
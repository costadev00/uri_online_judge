/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double m[12][12], soma = 0;
    char c;
    int aux, cont = 0, i, j;
    scanf("%c", &c);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    aux = 10;
    for (i = 1; i <= 10; i++)
    {

        if (i <= 5)
        {
            for (j = 11; j > 11 - i; j--)
            {
                soma += m[i][j];
            }
        }
        else
        {
            for (j = 11; j > i; j--)
            {
                soma += m[i][j];
            }
        }
        aux--;
    }
    if (c == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else
    {
        soma = soma / 30;
        printf("%.1lf\n", soma);
    }
    return 0;
}
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
    aux = 0;
    for (i = 1; i <= 10; i++)
    {

        if (i <= 5)
        {
            for (j = 0; j < i; j++)
            {
                soma += m[i][j];
            }
        }
        else
        {
            for (j = 0; j < 11 - i; j++)
            {
                soma += m[i][j];
            }
        }
    }
    if (c == 'S')
    {
        printf("%.1lf\n", soma);
        // printf("i = %d\n", i);
        // printf("j = %d\n", j);
        // printf("aux = %d\n", aux);
    }
    else
    {
        soma = soma / 30;
        printf("%.1lf\n", soma);
    }
    return 0;
}
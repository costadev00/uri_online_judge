/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double m[12][12], soma = 0;
    char c;
    int aux, cont = 0;
    scanf("%c", &c);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    for (int i = 7; i <= 11; i++)
    {
        for (int j = 11 - i + 1; j <= i - 1; j++)
        {
            soma += m[i][j];
        }
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
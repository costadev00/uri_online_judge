/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double m[12][12], soma = 0;
    char c;
    int aux;
    scanf("%c", &c);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    aux = 11;
    for (int i = 1; i < 12; i++)
    {
        for (int j = aux; j < 12; j++)
        {
            soma += m[i][j];
        }
        aux--;
    }
    if (c == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else
    {
        soma = soma / 66;
        printf("%.1lf\n", soma);
    }
    return 0;
}
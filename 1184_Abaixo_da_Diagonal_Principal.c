/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double m[12][12], soma;
    int aux = 0;
    char c;
    scanf("%c", &c);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }

    for (int i = 1; i < 12; i++)
    {
        for (int j = 0; j < i; j++)
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
        soma = soma / 66;
        printf("%.1lf\n", soma);
    }
    return 0;
}
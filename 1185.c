/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double m[12][12], soma = 0;
    char o;
    int aux = 10;
    scanf("%c", &o);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }

    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10 - i; j++)
        {
            // printf("%d\n", aux);
            soma += m[i][j];
        }
    }
    if (o == 'S')
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
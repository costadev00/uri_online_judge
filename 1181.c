/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float m[12][12], soma = 0;
    int n;
    char c;
    scanf("%d", &n);
    getchar();
    scanf("%c", &c);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &m[i][j]);
            if (i == n)
            {
                soma += m[i][j];
            }
            if (n == 0 && i == n)
            {
                soma += m[i][j];
            }
        }
    }
    if (c == 'S')
    {
        printf("%.1f\n", soma);
    }
    if (c == 'M')
    {
        soma = soma / 12;
        printf("%.1f\n", soma);
    }
    return 0;
}
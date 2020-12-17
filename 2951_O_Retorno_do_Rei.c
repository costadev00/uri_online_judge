/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, g, vi[26], x, qtd_am = 0, o[26];
    char ri[26], ri2[26];
    scanf("%d %d", &n, &g);
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &ri[i]);
        getchar();
        scanf("%d", &vi[i]);
        o[i] = vi[i];
        // printf("%d\n", o[]);
    }

    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        scanf(" %c", &ri2[i]);
        getchar();
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ri2[i] == ri[j])
            {
                qtd_am += o[j];
            }
        }
    }

    printf("%d\n", qtd_am);
    if (qtd_am >= g)
    {
        printf("You shall pass!\n");
    }
    else
    {
        printf("My precioooous\n");
    }
    return 0;
}
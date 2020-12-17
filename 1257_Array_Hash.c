/*

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int valor = 0, n, l, total = 0, elem = 0, pos = 0, j;
    char hash[50];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        pos = 0;
        elem = 0;
        valor = 0;
        scanf("%d", &l);

        for (j = 0; j < l; j++)
        {
            scanf("%s", hash);
            getchar();
            for (int k = 0; hash[k] != '\0'; k++)
            {
                if (hash[k] == '\0')
                {
                    break;
                }
                valor += (hash[k] - 65) + elem + pos;
                // printf("hash = %d\n", hash[k]);
                // printf("elem = %d\n", elem);
                // printf("pos = %d\n", pos);
                // printf("valor = %d\n", valor);
                pos++;
            }
            pos = 0;
            elem++;
        }
        printf("%d\n", valor);
    }
    return 0;
}
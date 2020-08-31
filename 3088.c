/*

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int tam = 0, c;
    char str[3000];
    while (c != EOF)
    {
        gets(str);
        tam = strlen(str);
        for (int i = 0; i < tam; i++)
        {
            if (str[i] == ' ')
            {
                if (str[i + 1] == ',')
                {
                    str[i] == ',';
                }
                if (str[i + 1] == '.')
                {
                    str[i] = '.';
                }
            }
            printf("%c", str[i]);
            // if (str[i] == ' ' && str[i + 1] == ',')
            // {
            //     str[i] = ',';
            //     for (int k = i; k < tam; k++)
            //     {
            //         str[k] = str[k + 1];
            //     }
            // }
            // if (str[i] == ' ' && str[i + 1] == '.')
            // {
            //     str[i] = '.';
            //     for (int k = i; k < tam; k++)
            //     {
            //         str[k] = str[k + 1];
            //     }
            // }
        }
        if (scanf("%d", &c) == EOF)
        {
            exit(0);
        }
    }
    return 0;
}
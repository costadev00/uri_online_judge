#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int tam = 0;
    char str[3000], c;
    while (scanf(" %[^\n]", &str) != EOF)
    {

        tam = strlen(str);
        for (int i = 0; i < tam - 1; i++)
        {
            if (str[i] == ' ' && str[i + 1] == ',')
            {
                // str[i] = ',';
                continue;
            }
            else if (str[i] == ' ' && str[i + 1] == '.')
            {
                // str[i] = '.';
                continue;
            }
            else
            {
                printf("%c", str[i]);
            }
        }
        printf("%c\n", str[tam - 1]);
    }
    return 0;
}
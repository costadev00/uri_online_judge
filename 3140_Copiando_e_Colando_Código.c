/*

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char frase[1000];
    fgets(frase, 1000, stdin);
    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == 'b' && frase[i + 4] == '>')
        {
            puts(frase[i]);
        }
    }
    puts(frase);
    return 0;
}
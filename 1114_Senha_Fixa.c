/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s;

    do
    {
        scanf("%d", &s);
        if (s == 2002)
        {
            break;
        }
        printf("Senha Invalida\n");
    } while (s != 2002);
    printf("Acesso Permitido\n");

    return 0;
}
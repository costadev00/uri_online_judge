/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, z, prox = 0, cont = 1, aux = 0;
    scanf("%d", &x);
    do
    {
        scanf("%d", &z);
    } while (z <= x);

    aux = x;
    prox = x + 1;
    for (int i = x; x <= z; i++)
    {
        cont++;
        x += i;
    }
    // while (x < z)
    // {
    //     prox++;
    //     x = aux + prox;
    //     aux
    //         cont++;
    // }
    printf("%d\n", cont);
    return 0;
}
/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[5], cont = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vet[i]);
        if (vet[i] % 2 == 0)
        {
            cont++;
        }
    }
    printf("%d valores pares\n", cont);

    return 0;
}
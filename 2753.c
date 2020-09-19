/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[26];
    vet[0] = 97;
    for (int j = 1; j < 26; j++)
    {
        vet[j] = vet[j - 1] + 1;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d e %c\n", vet[i], vet[i]);
    }
    return 0;
}
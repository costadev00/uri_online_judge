/*
TODO: SOLVE
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int cont;
    char n[5000];
    while (scanf("%s", &n) != EOF)
    {
        for (int i = 0; i != '\0'; i++)
        {
            cont++;
        }

        for (int i = 0; i < cont; i++)
        {
            n[i] = n - 65;
        }
    }
    return 0;
}
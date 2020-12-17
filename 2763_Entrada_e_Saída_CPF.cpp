/*
TODO: SOLVE THIS &&$%#
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char cpf[20];
    char vet[20];
    int j = 0, aux = 0;
    bool flag_traco = true;
    // while ()
    // {
    cin >> cpf;
    for (int i = 0; i < 14; i++)
    {
        if (cpf[i] == '.' || cpf[i] == '-')
        {
            i++;
            j++;
        }
        else
        {
            vet[j] = cpf[i];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        j = 0;
        if (aux != 3)
        {
            while (j < 3)
            {
                printf("%c", vet[i]);
                j++;
            }
            aux++;
            printf("\n");
        }
        else
        {
            while (j < 2)
            {
                printf("%c", vet[i]);
                j++;
            }
            printf("\n");
        }
    }
    // }
    return 0;
}
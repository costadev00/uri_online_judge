#include <bits/stdc++.h>
using namespace std;
#define TAMANHO 9

int main()
{
    int testes;
    scanf("%d", &testes);

    for (int x = 0; x < testes; x++)
    {
        int i, j, matriz[TAMANHO][TAMANHO], soma = 0;
        bool val = true;
        val = true;
        for (i = 0; i < TAMANHO; i++)
        {
            for (j = 0; j < TAMANHO; j++)
            {
                scanf("%d", &matriz[i][j]);
                soma += matriz[i][j];
            }
            if (soma != 45)
            {
                val = false;
                cout << soma << endl;
                break;
            }
            soma = 0;
        }

        if (val)
        {
            printf("Instancia %d\nSIM\n\n", x + 1);
        }
        else
        {
            printf("Instancia %d\nNAO\n\n", x + 1);
        }
    }
}
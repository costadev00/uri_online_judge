/*
TODO:SOLVE
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, c, soma_total = 0, acm_pausa = 0;
    cin >> l >> c;
    int mat[l][c];
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
            if (acm_pausa < 4)
            {
                soma_total += mat[i][j];
            }
        }
        acm_pausa++;
    }
    printf("%d\n", soma_total);
    return 0;
}
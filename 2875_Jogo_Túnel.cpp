/*
TODO: solve
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int m, n, i, j, x, y, dir, aux = 0;
    char vet_res[100];
    while (cin >> m >> n)
    {
        int mat[m][n];
        char d;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> d;
                if (d == 'X')
                {
                    x = i;
                    y = j;
                    mat[i][j] = 2;
                    dir = 1;
                }
                else if (d == '1')
                {
                    mat[i][j] = 1;
                }
                else if (d == '0')
                {
                    mat[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dir == 1)
                {
                    vet_res[aux] = 'F';
                    aux++;
                }
            }
        }
    }

    return 0;
}
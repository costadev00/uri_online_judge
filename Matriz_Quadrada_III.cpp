#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    while (cin >> n)
    {
        int mat[n][n];
        if (n == 0)
        {
            return 0;
        }
        mat[0][0] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                {
                    continue;
                }
                if (j != 0)
                {

                    mat[i][j] = mat[i][j - 1] * 2;
                }
                else
                {
                    mat[i][j] = mat[i - 1][j] * 2;
                }
            }
        }

        int digitos = 0;
        int t;
        t = (mat[n - 1][n - 1]);
        do
        {
            t % 10;
            t = t / 10;
            digitos++;

        } while (t > 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                    //Prints com tamanho variado para o campo de espaços;
                    printf("%*d", digitos, mat[i][j]);
                else
                    printf(" %*d", digitos, mat[i][j]);
            }

            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
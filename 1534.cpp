/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int mat[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    mat[i][j] = 1;
                }
                if (i == n - j - 1)
                {
                    mat[i][j] = 2;
                }
                if (i != j && i != n - j - 1)
                {
                    mat[i][j] = 3;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d", mat[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
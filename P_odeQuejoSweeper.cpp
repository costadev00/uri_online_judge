#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, m;
    while (cin >> n >> m)
    {
        int mat[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }

        int p = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 1)
                {
                    cout << 9;
                }
                else
                {
                    if (i > 0)
                    {

                        if (mat[i - 1][j] == 1)
                        {
                            p--;
                        }
                    }
                    if (mat[i + 1][j] == 1)
                    {
                        p++;
                    }
                    if (mat[i][j + 1] == 1)
                    {
                        p++;
                    }
                    if (mat[i][j - 1] == 1)
                    {
                        p++;
                    }

                    cout << p;
                    p = 0;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
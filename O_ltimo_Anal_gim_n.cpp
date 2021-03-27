#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, m, x1 = 0, y1 = 0, x2 = 0, y2 = 0, dist = 0;
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
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 2)
                {
                    x1 = i + 1;
                    y1 = j + 1;
                }
                else if (mat[i][j] == 1)
                {
                    x2 = i + 1;
                    y2 = j + 1;
                }
            }
        }
        dist = abs(x2 - x1) + abs(y2 - y1);
        cout << dist << endl;
    }
    return 0;
}
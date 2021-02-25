#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, m, c, res = 0;
    cin >> n >> c >> m;
    int x[c], y[m];
    for (int i = 0; i < c; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> y[i];
    }
    res = c;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (x[i] == y[j])
            {
                res--;
                break;
            }
        }
    }
    printf("%d\n", res);

    return 0;
}
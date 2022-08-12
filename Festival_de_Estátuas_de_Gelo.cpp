
#include <bits/stdc++.h>
using namespace std;
#define INF 1000005
#define N 3

int main()
{
    // int n = 10;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        int ci;
        cin >> n >> m;
        int value[m + 2];
        vector<int> coins;
        for (int i = 0; i < n; i++)
        {
            cin >> ci;
            coins.push_back(ci);
        }
        value[0] = 0;
        for (int x = 1; x <= m; x++)
        {
            value[x] = INF;
            for (auto c : coins)
            {
                if (x - c >= 0)
                    value[x] = min(value[x], value[x - c] + 1);
            }
        }
        cout << value[m] << endl;
    }
    return 0;
}
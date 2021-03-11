#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    char f[30], res[10000];
    int n, num;
    while (cin >> f && f)
    {
        cin.ignore();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            res[i] = f[num - 1];
        }
        for (int i = 0; i < n; i++)
        {
            cout << res[i];
        }
        cout << endl;
    }
    return 0;
}
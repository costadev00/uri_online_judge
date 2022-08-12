#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) cout << (#args) << " = " << (args) << endl
#define MOD 1000000007
#define vi vector<int>
#define fl forward_list
#define pb push_back
#define pf push_front
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int a, n, m;
    cin >> a >> n >> m;
    int mat[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    int res = -1;
    int x = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        int cnt = 0;
        bool flag = 0;
        for (int j = m - 1; j >= 0; j--)
        {
            if (mat[i][j] == 1)
            {
                cnt = 0;
                continue;
            }
            if (mat[i][j] == 0)
            {
                cnt++;
                if (cnt == a)
                {
                    res = x;
                    flag = 1;
                    break;
                }
            }
            // cout << mat[i][j] << " ";
        }
        // cout << endl;
        x++;
        if (flag)
            break;
    }
    cout << res;
    return 0;
}
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
    int n, m;
    while (cin >> m >> n)
    {
        char mat[m + 2][n + 2];
        int res = 0;
        memset(mat, '.', sizeof(mat));
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                cin >> mat[i][j];

        for (int i = 0; i <= m; i++)
            for (int j = 1; j <= n; j++)
                if (mat[i][j] == '#')
                    if (mat[i + 1][j] == '.' || mat[i - 1][j] == '.' || mat[i][j + 1] == '.' || mat[i][j - 1] == '.')
                        res++;
        cout << res << endl;
    }
    return 0;
}
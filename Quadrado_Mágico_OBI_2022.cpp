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
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    int l, c;
    int somal = 0, somaof = 0, somam = 0;
    for (int i = 0; i < n; i++)
    {
        somal = 0;
        bool enczero = 0;
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 0)
            {
                enczero = 1;
                l = i, c = j;
            }
            somal += mat[i][j];
        }
        if (!enczero)
            somaof = somal;
        if (enczero)
            somam = somal;
    }
    cout << somaof - somam << endl;
    cout << l + 1 << endl;
    cout << c + 1 << endl;

    return 0;
}
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
    cin >> n >> m;
    int vet[n+2][m+2];
    bool flag = false;
    int resi = 0, resj = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vet[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vet[i][j] == 42)
            {
                if (i == 0 || j == 0)
                    continue;
                if (vet[i - 1][j - 1] == 7 && vet[i - 1][j] == 7 && vet[i - 1][j + 1] == 7 && vet[i][j + 1] == 7 && vet[i][j - 1] == 7 && vet[i + 1][j - 1] == 7 && vet[i + 1][j] == 7 && vet[i + 1][j + 1] == 7)
                    flag = true;
                if (flag)
                {
                    resi = i + 1;
                    resj = j + 1;
                    i = n + 1;
                    break;
                }
            }
        }
    }
    cout << resi << " " << resj << endl;
    return 0;
}
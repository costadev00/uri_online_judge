#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    vector<string> disc, vida;
    string pro;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> pro;
            if (pro[1] == 'V')
            {
                vida.pb(pro);
            }
            else
            {
                disc.pb(pro);
            }
        }
    }
    sort(vida.begin(), vida.end(), greater<string>());
    sort(disc.begin(), disc.end(), greater<string>());
    for (auto i : vida)
    {
        cout << i << endl;
    }
    for (auto i : disc)
    {
        cout << i << endl;
    }
    return 0;
}
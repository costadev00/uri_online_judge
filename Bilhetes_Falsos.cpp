//TODO: SOLVE
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) printf(args)
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int n, m, t;
    vi tot, res;

    while (cin >> n >> m && n && m)
    {
        int cont = 0;
        while (m--)
        {
            cin >> t;
            tot.pb(t);
        }
        for (int i = 0; i < tot.size(); i++)
        {
            if (find(res.begin(), res.end(), tot[i]) != res.end())
                cont++;
            else
            {
                res.pb(tot[i]);
            }
        }
        // cout << tot.size() - res.size() << endl;
        for (auto i : tot)
            cout << i << " ";
        cout << endl;
        for (auto i : res)
            cout << i << " ";
        cout << endl;
        res.clear();
        tot.clear();
    }

    return 0;
}
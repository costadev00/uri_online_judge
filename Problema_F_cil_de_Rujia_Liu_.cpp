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
    int n, m, k, v;
    while (cin >> n >> m)
    {
        vector<int> vet;
        map<int, vector<int>> mp;
        int x;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            mp[x].pb(i);
        }
        while (m--)
        {
            cin >> k >> v;
            if (k > mp[v].size())
                cout << 0 << endl;
            else
                cout << mp[v][k - 1] << endl;
            // int aux = 0;
            // bool flag = true;
            // for (int i = 0; i < vet.size(); i++)
            // {
            //     if (vet[i] == v)
            //         aux++;
            //     if (aux == k)
            //     {
            //         cout << i + 1 << endl;
            //         flag = false;
            //         break;
            //     }
            // }
            // if (flag)
            //     cout << 0 << endl;
        }
    }
    return 0;
}
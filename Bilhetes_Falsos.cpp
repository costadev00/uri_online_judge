#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...)
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int n, m, t, cont = 0;
    list<int> list;

    while (cin >> n >> m && n && m)
    {
        while (m--)
        {
            cin >> t;
            list.pb(t);
        }
        for (int i = 1; i <= n; i++)
        {
            if (count(list.begin(), list.end(), i) >= 2)
            {
                list.remove(i);
                cont++;
            }
        }
        cout << cont << endl;
        cont = 0;
        list.clear();
    }

    return 0;
}
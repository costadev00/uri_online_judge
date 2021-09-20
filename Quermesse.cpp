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
    int n, t = 0;
    while (cin >> n)
    {
        if (n == 0)
            break;
        vi vet;
        int x, res = 0;
        FOR(i, 0, n)
        {
            cin >> x;
            vet.pb(x);
        }
        for (int i = 0; i < n; ++i)
        {
            if (i + 1 == vet[i])
            {
                res = vet[i];
                break;
            }
        }
        cout << "Teste " << ++t << endl;
        cout << res << endl;
        cout << endl;
    }
    return 0;
}
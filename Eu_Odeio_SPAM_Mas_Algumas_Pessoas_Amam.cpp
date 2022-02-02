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
#define N 100000

typedef struct
{
    string name;
} Pessoa;

int main()
{
    fastio;
    int n;
    while (cin >> n && n)
    {
        if (n == 0)
            break;

        vector<int> adj[n + 1];
        vector<string> nomes;
        int x, p, t1, t2;
        string a1, a2, a3;
        for (int i = 1; i <= n; i++)
        {
            while (cin >> x && x)
            {
                if (x == 0)
                    break;
                adj[i].pb(x);
                adj[x].pb(i);
            }
            while (cin >> p && p)
            {
                if (p == 0)
                    break;
                cin >> t1 >> t2 >> a1 >> a2 >> a3;
            }
            string nome;
            for (int i = 1; i <= n; i++)
            {
                cin >> nome;
                nomes.pb(nome);
            }
        }
    }
    return 0;
}
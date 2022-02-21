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

#define MAXN 101

vector<int> adj[MAXN];
bool used[MAXN];
vector<int> comp;
int cont = 0;
int n, m;

void dfs(int v)
{
    used[v] = true;
    comp.push_back(v);
    for (size_t i = 0; i < (int)adj[v].size(); ++i)
    {
        int to = adj[v][i];
        if (!used[to])
            dfs(to);
    }
}
void find_comps()
{
    for (int i = 1; i <= n; ++i)
        used[i] = false;
    for (int i = 1; i <= n; ++i)
        if (!used[i])
        {
            comp.clear();
            dfs(i);
            cont++;
        }
}

int main()
{
    fastio;
    int t = 1;
    while (cin >> n >> m)
    {
        if (n == 0 && m == n)
            break;
        int x, y;

        while (m--)
        {
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        cout << "Teste " << t << endl;
        find_comps();
        if (cont == 1)
            cout << "normal\n";
        else
            cout << "falha\n";
        // debug(cont);
        t++;
        for (int i = 1; i <= n; i++)
            adj[i].clear();
        memset(used, false, MAXN);
        comp.clear();
        cont = 0;
        cout<<endl;
    }
    return 0;
}
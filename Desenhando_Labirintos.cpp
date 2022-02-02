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

#define N 100

int cont = 0;
bool visited[N];

void dfs(int current, vi adj[])
{
    visited[current] = true; // Marca current como visitado

    for (int i = 0; i < adj[current].size(); i++) // Itera por todos os vizinhos de current
    {
        int neighbour = adj[current][i];

        if (!visited[neighbour]) // Checa se o vizinho atual já foi visitado anteriormente
        {
            dfs(neighbour, adj);
            cont++;
        }
    }
}

int main()
{
    fastio;
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        memset(visited, false, N);
        cont = 0;

        cin >> n;
        int v, a;
        cin >> v >> a;
        vi adj[v + 1];
        while (a--)
        {
            int x, y;
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        dfs(n, adj);
        cout << cont * 2 << endl;
    }
    return 0;
}
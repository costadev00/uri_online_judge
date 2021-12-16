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

int cont = 0;

void dfs(int current, bool visited[], vi adj[])
{
    visited[current] = true; // Marca current como visitado
    char c = current + 97;
    cout << c << ",";
    for (int i = 0; i < adj[current].size(); i++) // Itera por todos os vizinhos de current
    {
        int neighbour = adj[current][i];

        if (!visited[neighbour]) // Checa se o vizinho atual já foi visitado anteriormente
        {
            dfs(neighbour, visited, adj);
            cout << endl;
        }
    }
}

int main()
{
    fastio;
    int n;
    while (cin >> n)
    {
        int c = 1;
        int e, v;
        while (n--)
        {
            cin >> v >> e;
            vector<int> adj[v + 1];
            bool visited[v + 1];

            char a, b;
            while (e--)
            {
                cin >> a >> b;
                int x = a - 97;
                int y = b - 97;
                adj[x].pb(y);
                adj[y].pb(x);
            }
            cout << "Case #" << c << ":" << endl;
            c++;
            // dfs(0, visited, adj);
            char c = 97;
            // cout << c << ",";
            for (int i = 0; i < v; i++)
            {
                for (auto u : adj[i])
                {
                    char c = u + 97;
                    cout << c << ",";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
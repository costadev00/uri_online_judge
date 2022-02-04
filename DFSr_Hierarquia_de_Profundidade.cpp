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
#define FOR(i, a, b) \
    for (int i = a; i < b; i++)

#define MAXN 25
vector<int> adj[MAXN];
bool visited[MAXN] = {false};
int marcado[MAXN];
void dfs(int current, int space)
{

    visited[current] = true; // Marca current como visitado

    for (int i = 0; i < adj[current].size(); i++) // Itera por todos os vizinhos de current
    {
        for (int j = 0; j < space; j++)
            cout << ' ';
        cout << current << "-" << adj[current][i];

        int neighbour = adj[current][i];

        if (!visited[neighbour]) // Checa se o vizinho atual já foi visitado anteriormente
        {
            cout << " pathR(G," << adj[current][i] << ")\n";
            dfs(neighbour, space + 2);
        }
        else
            cout << "\n";
    }
}

int main()
{
    fastio;
    int n;
    while (cin >> n)
    {
        int t = 0;
        while (n--)
        {
            int v, e;
            cin >> v >> e;
            int x, y;
            while (e--)
            {
                cin >> x >> y;
                adj[x].push_back(y);
                marcado[x] = 1;
            }
            for (int i = 0; i < v; i++)
            {
                sort(adj[i].begin(), adj[i].end());
            }

            cout << "Caso " << ++t << ":\n";

            for (int i = 0; i < v; i++)
            {
                if (!visited[i] && marcado[i])
                {
                    dfs(i, 2);
                    cout << '\n';
                }
            }
            for (int i = 0; i < v; i++)
                adj[i].clear();
            memset(visited, false, MAXN);
            memset(marcado, 0, MAXN);
        }
    }
    return 0;
}
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
#define MAXN 100000


int n;
vector<int> adj[MAXN];
bool visited[MAXN];
vector<int> comp;

void dfs(int current)
{
    visited[current] = true; // Marca current como visitado
    comp.push_back(current); //adiciona os nós do atual componente

    for (int i = 0; i < adj[current].size(); i++) // Itera por todos os vizinhos de current
    {
        int neighbour = adj[current][i];

        if (!visited[neighbour]) // Checa se o vizinho atual já foi visitado anteriormente
            dfs(neighbour);
    }
}

void find_comps()
{
    for (int i = 0; i < n; ++i)
        visited[i] = false;
    for (int i = 0; i < n; ++i)
        if (!visited[i])
        {
            comp.clear();
            dfs(i);
            cout << "Componentes: ";
            for (int j = 0; j < comp.size(); ++j)
                cout << ' ' << comp[j];
            cout << endl;
        }
}

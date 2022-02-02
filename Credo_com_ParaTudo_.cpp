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
#define N 500

vector<int> adj[N + 1];

void dfs(int current, bool visited[])
{
    visited[current] = true;
    for (int i = 0; i < adj[current].size(); i++)
    {
        int nei = adj[current][i];
        if (!visited[nei])
            dfs(nei,visited);
    }
}

int main()
{
    fastio;
    int n, m, p;
    while (cin >> n >> m >> p)
    {
        int x, y;

        while (m--)
        {
            cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        while (p--)
        {
            bool visited[N + 1] = {false};
            cin >> x >> y;
            dfs(x, visited);
            if (visited[y])
                cout << "Lets que lets\n";
            else
                cout << "Deu ruim\n";
        }
    }
    return 0;
}
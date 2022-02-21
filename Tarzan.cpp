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
#define MAXN 1001
vector<int> adj[MAXN];
bool used[MAXN];
vector<int> comp;
int n, d;

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
int cont = 0;
void find_comps()
{
    for (int i = 0; i < n; ++i)
        used[i] = false;
    for (int i = 0; i < n; ++i)
        if (!used[i])
        {
            comp.clear();
            dfs(i);
            cont++;
        }
}

int p2(int a)
{
    return a * a;
}
int dist2(pair<int, int> a, pair<int, int> b)
{
    return p2(a.first - b.first) + p2(a.second - b.second);
}

int main()
{
    fastio;
    cin >> n >> d;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (dist2(v[i], v[j]) <= d * d)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    find_comps();
    cout << ((cont == 1) ? "S\n" : "N\n");
    return 0;
}
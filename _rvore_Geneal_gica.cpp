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
#define MAXN 301

vector<string> comp;
int cont = 0;
map<string, bool> visited;

void dfs(string v, unordered_map<string, vector<string>> adj)
{
    visited[v] = true;
    comp.push_back(v);
    for (size_t i = 0; i < (int)adj[v].size(); ++i)
    {
        string to = adj[v][i];
        if (!visited[to])
            dfs(to, adj);
    }
}

void find_comps(int n, unordered_map<string, vector<string>> adj)
{
    for (auto i : adj)
    {
        if (!visited[i.first])
        {
            cont++;
            comp.clear();
            dfs(i.first, adj);
        }
    }
}

int main()
{
    fastio;
    int m, n;
    while (cin >> m >> n)
    {
        cin.ignore();
        unordered_map<string, vector<string>> adj(m + 1);
        string s1, s2, s3;
        while (n--)
        {
            cin >> s1 >> s2 >> s3;
            adj[s1].push_back(s3);
            adj[s3].push_back(s1);
        }
        find_comps(m, adj);
        cout << cont << endl;
    }
    return 0;
}
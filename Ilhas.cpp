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
#define MAXN 1010
#define INF 10000001

int dist[MAXN];
bool processed[MAXN];
vector<pair<int, int>> adj[MAXN];

void dijkstra(int n, int x)
{
    priority_queue<pair<int, int>> q;
    memset(processed, false, MAXN);
    for (int i = 1; i <= n; i++)
        dist[i] = INF;
    dist[x] = 0;
    q.push({0, x});
    while (!q.empty())
    {
        int a = q.top().second;
        q.pop();
        if (processed[a])
            continue;
        processed[a] = true;
        for (auto u : adj[a])
        {
            int b = u.first, w = u.second;
            if (dist[a] + w < dist[b])
            {
                dist[b] = dist[a] + w;
                q.push({-dist[b], b});
            }
        }
    }
}

int main()
{
    fastio;

    int n, m;
    while (cin >> n >> m)
    {
        int u, v, w;
        while (m--)
        {
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        int x;
        cin >> x;
        int menor = INT_MAX;
        int maior = INT_MIN;
        dijkstra(n, x);
        for (int i = 1; i <= n; i++)
        {
            if (dist[i] < menor && dist[i] != 0)
                menor = dist[i];
            if (dist[i] > maior && dist[i] != 0)
                maior = dist[i];
        }
        cout << maior - menor << endl;
        for (int i = 1; i <= n; i++)
            adj[i].clear();
    }
    return 0;
}
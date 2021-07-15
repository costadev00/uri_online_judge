#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) printf(args)
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

void addDoubleEdge(vector<pair<int, int>> adj[], int u, int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}

void addSimpleEdge1(vector<pair<int, int>> adj[], int u, int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
}

void addSimpleEdge2(vector<pair<int, int>> adj[], int u, int v, int wt)
{
    adj[v].push_back(make_pair(u, wt));
}

void dijkstra(int n, int x, vector<pair<int, int>> adj[], int c)
{
    vector<int> distance(n + 1, INT_MAX);
    vector<bool> processed(n + 1, false);
    priority_queue<pair<int, int>> q;
    distance[x] = 0;
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
            int b = u.first;
            int w = u.second;

            if (distance[a] + w < distance[b])
            {
                distance[b] = distance[a] + w;
                q.push({-distance[b], b});
            }
        }
    }
    cout << distance[c - 1] << endl;
}

int main()
{
    fastio;
    int n, m, c, k;
    int u, v, p;
    while (cin >> n >> m >> c >> k && n && m && c && k)
    {
        vector<pair<int, int>> adj[n];
        while (m--)
        {
            cin >> u >> v >> p;
            if (u >= c && v >= c)
            {
                addDoubleEdge(adj, u, v, p);
            }
            if (u >= c && v < c)
                addSimpleEdge1(adj, u, v, p);

            if (u < c && v >= c)
                addSimpleEdge2(adj, u, v, p);

            if (u < c && v < c && abs(u - v) == 1)
            {
                addDoubleEdge(adj, u, v, p);
            }
        }
        dijkstra(n, k, adj, c);
    }
    return 0;
}
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

#define N 100000

queue<int> q;
bool visited[N + 1];

void bfs(int x, vector<int> adj[], int c, int p)
{
    visited[x] = true;
    int distance[c + 1];
    memset(distance, -1, sizeof(distance));
    distance[x] = 0;
    q.push(x);
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        // process node s
        for (auto u : adj[s])
        {
            if (visited[u])
                continue;
            visited[u] = true;
            distance[u] = distance[s] + 1;
            q.push(u);
        }
    }
    for (int i = 1; i <= c; i++)
    {
        // cout << i << " " << distance[i] << endl;
        if (distance[i] <= p && i != x && distance[i] != -1)
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    fastio;
    int c, e, l, p;
    int n = 1;
    while (cin >> c >> e >> l >> p)
    {
        if (c == 0 && e == 0 && l == 0 && p == 0)
            break;
        int x, y;
        vector<int> adj[c + 1];
        for (int i = 0; i < e; i++)
        {
            cin >> x >> y;
            adj[y].pb(x);
            adj[x].pb(y);
        }

        cout << "Teste " << n << endl;
        bfs(l, adj, c, p);
        cout << endl;
        while (!q.empty())
            q.pop();
        memset(visited, false, sizeof(visited));
        n++;
    }
    return 0;
}
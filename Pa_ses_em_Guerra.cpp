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

#define MAXN 501
#define INF 10000001

int dist[MAXN];
bool processed[MAXN];
vector<pair<int, int>> adj[MAXN];
int k, o, d;
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
    int n, e;
    while (cin >> n >> e)
    {
        if (n == 0 && e == n)
            break;
        int x, y, h;
        while (e--)
        {
            cin >> x >> y >> h;
            adj[x].push_back({y, h});
        }

        cin >> k;
        while (k--)
        {
            bool flag = true;
            cin >> o >> d;
            for (auto u : adj[o])
            {
                // debug(u.first);
                if (u.first == d)
                {
                    cout << 0 << endl;
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                dijkstra(n, o);
                int acm = 0;
                if (dist[d] == INF)
                    cout << "Nao e possivel entregar a carta\n";
                else
                {
                    debug(dist[d - 1]);
                    cout << dist[d] - dist[d - 1] << endl;
                }
            }
        }
        for (int i = 1; i <= n; i++)
            adj[i].clear();
        cout << endl;
    }
    return 0;
}
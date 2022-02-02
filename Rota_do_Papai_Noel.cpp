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

vector<int> adj[N];
queue<int> q;
bool visited[N];

void dfs(int current)
{
    visited[current] = true; // Marca current como visitado

    for (int i = 0; i < adj[current].size(); i++) // Itera por todos os vizinhos de current
    {
        int neighbour = adj[current][i];

        if (!visited[neighbour]) // Checa se o vizinho atual já foi visitado anteriormente
            dfs(neighbour);
    }
}

// void bfs(int x)
// {

//     int distance[N];
//     visited[x] = true;
//     distance[x] = 0;
//     q.push(x);
//     while (!q.empty())
//     {
//         int s = q.front();
//         q.pop();
//         // process node s
//         for (auto u : adj[s])
//         {
//             if (visited[u])
//                 continue;
//             visited[u] = true;
//             distance[u] = distance[s] + 1;
//             q.push(u);
//         }
//     }
// }

int main()
{
    fastio;
    int c, w;
    while (cin >> c >> w)
    {

        unordered_map<string, int> m;
        string s, s1;
        for (int i = 0; i < c; i++)
        {
            cin >> s;
            m[s] = i;
        }
        for (int i = 0; i < w; i++)
        {
            cin >> s >> s1;
            adj[m[s]].pb(m[s1]);
            adj[m[s1]].pb(m[s]);
        }
        bool isconected = true;
        dfs(0);
        int cont = 0;
        for (int i = 0; i < c; i++)
        {
            if (!visited[i])
                isconected = false;
        }
        if (isconected)
            cout << "merry christmas\n";
        else
            cout << "no gifts today\n";
    }
    return 0;
}
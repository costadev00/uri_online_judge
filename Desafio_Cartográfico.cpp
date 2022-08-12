#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> h;
int n;

// finding height of each node.
// Argument p here is the parent of current node
int height(int curr, int p)
{
    for (auto it : g[curr])
    {
        if (it == p)
        {
            continue;
        }
        h[curr] = max(h[curr], height(it, curr));
    }
    h[curr] += 1;
    return h[curr];
}

int main()
{
    cin >> n;
    g.resize(n + 1);
    h.resize(n + 1, 0);
    for (int i = 0, u, v; i < n - 1; i++)
    {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    // choosing root to be 1.
    cout << height(1, -1) - 1 << endl;
    return 0;
}
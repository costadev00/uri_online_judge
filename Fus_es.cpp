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

const int MAXN = 1000010;

int parent[MAXN], sz[MAXN]; // size[i] = número de valores que tem uma ligação direta ou indireta a iii

int find(int value)
{
    if (parent[value] == value)
        return value;
    return find(parent[value]);
}

void merge(int i, int j)
{
    i = find(i);
    j = find(j);

    if (i == j)
        return;

    if (sz[i] >= sz[j])
    {
        parent[j] = i;
        sz[i] += sz[j]; // Atualizando sz[i] com sua nova ligação com j
    }
    else
    {
        parent[i] = j;
        sz[j] += sz[i]; // Atualizando sz[j] com sua nova ligação com i
    }
}

int main()
{
    fastio;
    int n, q;
    while (cin >> n >> q)
    {
        for (int i = 0; i < n; i++)
        {
            sz[i] = 1;
            parent[i] = i;
        }
        char type;
        int a, b;
        while (q--)
        {
            cin >> type >> a >> b;

            if (type == 'F')
                merge(a, b);
            else
            {
                if (find(a) == find(b))
                    cout << 'S' << endl;
                else
                    cout << 'N' << endl;
            }
        }
    }
    return 0;
}
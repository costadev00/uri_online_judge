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
const int MAXN = 1010;
bool visited[MAXN][MAXN];
int n;
int cont = 0;
int board[MAXN + 1][MAXN + 1] = {-1};

bool is_cell_valid(int x, int y)
{
    if (x < 1 || x >= n + 1 || y < 1 || y >= n + 1)
        return false;
    if (visited[x][y])
        return false;

    return true;
}

void dfs(int x, int y)
{
    visited[x][y] = true;
    cont++;

    if (is_cell_valid(x - 1, y) && board[x - 1][y] >= board[x][y]) // Checa se podemos ir para o norte
        dfs(x - 1, y);

    if (is_cell_valid(x, y + 1) && board[x][y + 1] >= board[x][y]) // Checa se podemos ir para o leste
        dfs(x, y + 1);

    if (is_cell_valid(x, y - 1) && board[x][y - 1] >= board[x][y]) // Checa se podemos ir para o oeste
        dfs(x, y - 1);

    if (is_cell_valid(x + 1, y) && board[x + 1][y] >= board[x][y]) // Checa se podemos ir para o sul
        dfs(x + 1, y);
}

int main()
{
    fastio;
    int x, y;
    cin >> n;
    cin >> x >> y;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> board[i][j];
    dfs(x, y);

    cout << cont << endl;
    return 0;
}
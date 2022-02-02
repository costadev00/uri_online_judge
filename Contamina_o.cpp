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
#define MAXN 51

int n, m;
char mat[MAXN + 1][MAXN + 1];
int visited[MAXN + 1][MAXN + 1];

bool is_cell_valid(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
        return false;
    if (mat[x][y] == 'X' || mat[x][y] == 'T')
        return false;

    return true;
}

void bfs(int x, int y)
{
    queue<pair<int, int>> q;

    visited[x][y] = true;
    q.push({x, y});

    while (!q.empty())
    {
        int currentX = q.front().first;
        int currentY = q.front().second;
        mat[currentX][currentY] = 'T';
        q.pop();

        if (is_cell_valid(currentX + 1, currentY)) // Checa se podemos ir para o sul
        {
            visited[currentX + 1][currentY] = true;
            q.push({currentX + 1, currentY});
        }

        if (is_cell_valid(currentX, currentY + 1)) // Checa se podemos ir para o leste
        {
            visited[currentX][currentY + 1] = true;
            q.push({currentX, currentY + 1});
        }

        if (is_cell_valid(currentX - 1, currentY)) // Checa se podemos ir para o norte
        {
            visited[currentX - 1][currentY] = true;
            q.push({currentX - 1, currentY});
        }

        if (is_cell_valid(currentX, currentY - 1)) // Checa se podemos ir para o oeste
        {
            visited[currentX][currentY - 1] = true;
            q.push({currentX, currentY - 1});
        }
    }
}

int main()
{
    fastio;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        memset(mat, '0', sizeof(mat));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 'T')
                    bfs(i, j);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
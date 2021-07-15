#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)
char grid[1123][1123];
int n, m;
int xf, yf;

int dx[4] = {2, -2, 0, 0};
int dy[4] = {0, 0, 2, -2};

int best = 0;

void foo(int x, int y, int k)
{
    if (x == xf && y == yf && k > best)
        best = k;
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (grid[x + dx[i]][y + dy[i]] == '.')
            {
                int tmp = grid[x + dx[i]][y + dy[i]];
                grid[x + dx[i]][y + dy[i]] = '@';

                foo(x + dx[i], y + dy[i], k + 1);

                grid[x + dx[i]][y + dy[i]] = tmp;
            }
        }
    }
}

int main()
{
    int xi, yi;
    scanf("%d %d %d %d %d %d", &n, &m, &xi, &yi, &xf, &yf);
    memset(grid, '#', sizeof(grid));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (i % 2 || j % 2)
                grid[i][j] = '.';

    grid[xi][yi] = '#';
    foo(xi, yi, 1);
    printf("%d\n", 2 * best - 1);
}
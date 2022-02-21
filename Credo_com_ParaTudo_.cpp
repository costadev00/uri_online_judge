#include <bits/stdc++.h>
// Este é um algoritmo muito curto e eficiente quando
//  é necessário encontrar todas as distâncias mínimas entre todos os pares/vertices.

// EXEMPLO

// 5
// 6
// 1 5 1
// 1 2 5
// 1 4 9
// 2 3 2
// 3 4 7
// 4 5 2
using namespace std;
#define MAXN 500
const int INF = 1000000010;
int adj[MAXN][MAXN];

int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    int u, v, w;
    // Criando o grafo, utilizando a matriz de adjacencia como representacao

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            adj[i][j] = INF;
        }
    }

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    // FLOYD WARSHALL
    for (int k = 0; k <= n; k++)
    {
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                    adj[i][j] = adj[i][k] + adj[k][j];
            }
        }
    }
    int x, y;
    while (p--)
    {
        cin >> x >> y;
        if (adj[x][y] != INF && adj[y][x] != INF)
            cout << "Lets que lets\n";
        else
            cout << "Deu ruim\n";
    }
    return 0;
}
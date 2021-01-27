#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    string j1, j2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> j1 >> j2;
        if (j1 == "ataque" && j2 == "ataque")
        {
            printf("Aniquilacao mutua\n");
            continue;
        }
        if (j1 == "ataque")
        {
            printf("Jogador 1 venceu\n");
            continue;
        }
        if (j2 == "ataque")
        {
            printf("Jogador 2 venceu\n");
            continue;
        }
        if (j1 == "pedra" && j2 == "papel")
        {
            printf("Jogador 1 venceu\n");
        }
        else if (j2 == "pedra" && j1 == "papel")
        {
            printf("Jogador 2 venceu\n");
        }
        if (j1 == "papel" && j2 == "papel")
        {
            printf("Ambos venceram\n");
        }
        if (j1 == "pedra" && j2 == "pedra")
        {
            printf("Sem ganhador\n");
        }
    }
    return 0;
}
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
    string nome;
    int s, b, a, ss, bs, as;
    float somastot = 0, somasstot = 0, ress = 0, somabtot = 0, somabstot = 0, resb = 0, somaatot = 0, somaastot = 0, resa = 0;
    cin >> n;
    while (n--)
    {
        cin >> nome;
        cin >> s >> b >> a;
        cin >> ss >> bs >> as;
        somastot += s;
        somasstot += ss;
        somabtot += b;
        somabstot += bs;
        somaatot += a;
        somaastot += as;
    }
    ress = (somasstot * 100) / somastot;
    resb = (somabstot * 100) / somabtot;
    resa = (somaastot * 100) / somaatot;
    printf("Pontos de Saque: %.2f %%.\n", ress);
    printf("Pontos de Bloqueio: %.2f %%.\n", resb);
    printf("Pontos de Ataque: %.2f %%.\n", resa);
    return 0;
}
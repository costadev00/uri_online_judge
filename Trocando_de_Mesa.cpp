#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, q, e, a, b, cont = 0, aux = 0;
    int vet[1001] = {0};
    cin >> n;
    cin >> q;
    for (int i = 1; i <= n; i++)
    {
        vet[i] = i;
    }
    for (int i = 0; i < q; i++)
    {
        cin >> e >> a;
        if (e == 1)
        {
            cin >> b;

            aux = vet[a];
            vet[a] = vet[b];
            vet[b] = aux;
        }
        else
        {
            aux = 0;
            b = vet[a];
            while (a != b)
            {
                b = vet[b];
                aux++;
            }
            printf("%d\n", aux);

            // cont++;
        }
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, pres = 0, b;
    cin >> n;
    // pres = n;
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
        if (vet[i] == 0)
        {
            pres++;
        }
        else
        {
            pres += vet[i];
        }
    }
    sort(vet, vet + n, greater<int>());
    // for (int i = 0; i < n; i++)
    // {
    //     if (vet[0] == vet[i + 1])
    //     {
    //         pres += vet[i];
    //     }
    //     else
    //     {
    //         pres += n;
    //     }
    // }
    printf("%d\n", pres);
    return 0;
}
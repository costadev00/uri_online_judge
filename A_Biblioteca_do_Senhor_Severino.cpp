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
    while (cin >> n)
    {
        int vet[n];
        for (int i = 0; i < n; i++)
        {
            cin >> vet[i];
        }
        sort(vet, vet + n);
        for (int i = 0; i < n; i++)
        {
            printf("%.4d\n", vet[i]);
        }
    }
    return 0;
}
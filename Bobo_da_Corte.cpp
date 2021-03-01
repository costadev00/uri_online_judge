#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, vc;
    cin >> n;
    int vet[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }
    vc = vet[0];
    sort(vet, vet + n);
    if (vc >= vet[n - 1])
    {

        cout << "S\n";
    }
    else
    {
        cout << "N\n";
    }
    return 0;
}
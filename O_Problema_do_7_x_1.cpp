// TODO: SOLVE
//to com sono,
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, um = 0, sete = 0;
    cin >> n;
    int vet[n];
    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        vet[j] = i;
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        if (vet[i] == 1)
        {
            um++;
        }
        if (vet[i] == 7)
        {
            sete++;
        }
    }
    printf("%d\n", um);
    return 0;
}
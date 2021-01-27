#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, j;
    do
    {
        j = 1;
        cin >> n;
        int vet[n], vet_aux[n];
        for (int i = 0; i < n; i++)
        {
            cin >> vet[i];
            vet_aux[i] = vet[i];
        }
        sort(vet_aux, vet_aux + n, greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (vet[i] == vet_aux[1])
            {
                printf("%d\n", j);
                break;
            }
            j++;
        }
    } while (n != 0);

    return 0;
}

#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, i, number, aux = 0, res1 = 0, res2 = 0;
    scanf("%d", &n);
    int vet[n];
    for (i = 2; i <= n; i++)
    {
        int j = 2, primo = 1;

        while (primo == 1 && j <= i / 2)
        {
            if (i % j == 0)
            {
                primo = 0;
            }
            j++;
        }

        if (primo == 1)
        {
            vet[aux] = i;
            aux++;
        }
    }
    for (int i = 0; i < aux - 1; i++)
    {
        if (vet[i + 1] - vet[i] == 2)
        {
            res1 = vet[i];
            res2 = vet[i + 1];
        }
    }

    printf("%d %d\n", res1, res2);
    return 0;
}
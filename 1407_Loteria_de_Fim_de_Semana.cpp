/*
TODO: SOLVE THAT
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, k, x;
    do
    {
        cin >> n >> c >> k;
        int vet_aux[k];
        int aux[k] = {0};
        for (int a = 1; a <= k; a++)
        {
            vet_aux[a] = a;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> x;
                for (int b = 0; b < k; b++)
                {
                    if (x == vet_aux[b])
                    {
                        aux[b]++;
                    }
                }
            }
        }
        sort(aux, aux + k);
        // for (int i = 0; i < k; i++)
        // {
        printf("%d ", vet_aux[aux[0]]);
        // }
    } while (n != 0 && c != 0 && k != 0);

    return 0;
}
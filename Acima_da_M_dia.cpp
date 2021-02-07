#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    float notas[1001], acm_notas = 0, mediaf = 0, res = 0, x = 0, acima = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        acm_notas = 0, mediaf = 0, res = 0, acima = 0;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            cin >> notas[j];
            acm_notas += notas[j];
        }
        mediaf = acm_notas / x;
        for (int j = 0; j < x; j++)
        {
            if (notas[j] > mediaf)
            {
                acima++;
            }
        }
        res = (acima * 100) / x;
        printf("%.3f%%\n", res);
    }
    return 0;
}
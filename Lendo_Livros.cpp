#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int q, d, p, res = 0;
    while (cin >> q)
    {
        if (!q)
        {
            break;
        }

        cin >> d >> p;
        res = d * p * q / (p - q);
        if (res == 1)
        {
            printf("%d pagina\n", res);
        }
        else
        {
            printf("%d paginas\n", res);
        }
    }
    return 0;
}
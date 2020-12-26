#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, h, auxh = 0, res = 0;
    char e[110], g[110];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> e >> g >> h;
        if (strcmp(g, "bonecos") == 0)
        {
            auxh = 8;
            while (h >= auxh)
            {
                h -= auxh;
                res++;
            }
        }
        if (strcmp(g, "arquitetos") == 0)
        {
            auxh = 4;
            while (h >= auxh)
            {
                h -= auxh;
                res++;
            }
        }
        if (strcmp(g, "musicos") == 0)
        {
            auxh = 6;
            while (h >= auxh)
            {
                h -= auxh;
                res++;
            }
        }
        if (strcmp(g, "desenhistas") == 0)
        {
            auxh = 12;
            while (h >= auxh)
            {
                h -= auxh;
                res++;
            }
        }
    }
    printf("%d\n", res);
    return 0;
}
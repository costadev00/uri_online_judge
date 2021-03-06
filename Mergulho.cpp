#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, r, j = 0;
    while (cin >> n >> r)
    {
        if (n == r)
        {
            for (int i = 0; i < r; i++)
            {
                cin >> j;
            }
            printf("*\n");
            continue;
        }

        bool as = true;
        int res[n + 1], vetR[r];
        memset(res, 0, sizeof(res));
        memset(vetR, 0, sizeof(vetR));
        for (int i = 0; i < r; i++)
        {
            cin >> j;
            res[j] = j;
        }
        for (int i = 1; i <= n; i++)
        {
            if (res[i] == 0)
            {
                printf("%d ", i);
                as = false;
            }
        }
        j = 0;
        printf("\n");
    }

    return 0;
}
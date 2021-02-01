#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, x = 0, y = 1, z = 1;
    while (cin >> n)
    {
        if (n == 0)
        {
            printf("Caso %d: 1 numero\n", z);
            printf("%d\n\n", x);
            z++;
            continue;
        }

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                y++;
            }
        }
        printf("Caso %d: %d numeros\n", z, y);
        printf("%d ", x);
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (i == n && j == i - 1)
                {
                    printf("%d", x);
                }
                else
                {
                    printf("%d ", x);
                }
            }
            x++;
        }
        y = 1;
        x = 0;
        z++;
        printf("\n\n");
    }
    return 0;
}
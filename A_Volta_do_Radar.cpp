#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t = 1, x;
    while (cin >> t)
    {
        for (int i = 0; i < t; i++)
        {
            cin >> x;
            if (x % 2 != 0)
            {
                printf("%d\n", 2 * x - 1);
            }
            else
            {
                printf("%d\n", 2 * x - 2);
            }
        }
    }
    return 0;
}
//ps: shit problem?
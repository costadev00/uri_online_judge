#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, t, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        res = t - 2015;
        if (res >= 0)
        {
            res++;
            printf("%d A.C.\n", res);
        }
        else
        {
            printf("%d D.C.\n", abs(res));
        }
    }

    return 0;
}
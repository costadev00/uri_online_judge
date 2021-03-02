//TODO: SOLVE
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, q, p = 0, j = 0;
    cin >> n;
    n++;
    for (int i = 0; i < n; i++)
    {
        cin >> q;
        cin >> q2;
        if (q == 1 || q2 == 1)
        {
            p++;
            if (p == 2)
            {
                res[j] = 'S';
                p = 0;
                j++;
            }
        }
    }
    return 0;
}
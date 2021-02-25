#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    int a, b, q, r = 0;
    cin >> a >> b;
    if (a < 0)
    {
        while (r < abs(b) && (a - r) % b != 0)
        {
            r++;
        }
    }

    q = (a - r) / b, r = r == 0 ? a % b : r;
    // if (r < 0)
    // {

    //     if (q > 0)
    //         q++;

    //     if (q < 0)
    //         q--;

    //     r = a - (q * b);
    // }
    printf("%d %d\n", q, r);
    return 0;
}
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int a, b, c, mq = 0, res = 0;
    cin >> a >> b >> c;
    // if ((a + c) > a && (a + c) > c && mq != a)
    // {
    //     a *= 2;
    //     c *= 2;
    //     res = a + c;
    //     printf("%d\n", res);
    //     return 0;
    // }
    if (a > b && a > c)
    {
        mq = a;
    }
    else if (b > a && b > c)
    {
        mq = b;
    }
    else if (c > a && c > b)
    {
        mq = c;
    }
    if (a <= b || b >= c)
    {
        mq = b;
    }

    if (mq == a)
    {
        b *= 2;
        c *= 4;
        res = c + b;
    }
    else if (mq == b)
    {
        a *= 2;
        c *= 2;
        res = a + c;
    }
    else if (mq == c)
    {
        b *= 2;
        a *= 4;
        res = a + b;
    }
    printf("%d\n", res);

    return 0;
}
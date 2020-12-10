#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int s, t, f, res = 0;
    cin >> s >> t >> f;
    res = s + t + f;
    if (res == 24)
    {
        printf("0\n");
    }
    else if (res > 24)
    {
        res -= 24;
        printf("%d\n", res);
    }
    else if (res < 0)
    {
        res += 24;
        printf("%d\n", res);
    }
    else
    {

        printf("%d\n", res);
    }
    return 0;
}
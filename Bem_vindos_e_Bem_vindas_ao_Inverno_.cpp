#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int a, b, c, aux = 0;
    cin >> a >> b >> c;
    if (b < a && c >= b)
    {
        printf(":)\n");
    }
    else if (b > a && b >= c)
    {
        printf(":(\n");
    }
    else if (b > a && c > b && (b - a) > (c - b))
    {
        printf(":(\n");
    }
    else if (b > a && c > b && (c - b) >= (a - b))
    {
        printf(":)\n");
    }
    else if (b < a && c < b && (a - b) > (b - c))
    {
        printf(":)\n");
    }
    else if (b < a && c < b && (b - c) >= (a - b))
    {
        printf(":(\n");
    }
    else if (a == b)
    {
        if (c > b)
        {
            printf(":)\n");
        }
        else
        {
            printf(":(\n");
        }
    }
    return 0;
}
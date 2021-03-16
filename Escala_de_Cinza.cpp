#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

float solve()
{
    float r, g, b, res = 0;
    string e;
    cin >> e;
    cin >> r >> g >> b;
    if (e == "eye")
    {
        res = (0.30 * r) + (0.59 * g) + (0.11 * b);
        // P = 0, 30R + 0, 59G + 0, 11B
    }
    else if (e == "min")
    {
        res = min(r, g);
        res = min(res, b);
    }
    else if (e == "max")
    {
        res = max(r, g);
        res = max(res, b);
    }
    else
    {
        res = (r + g + b) / 3;
    }
    return floor(res);
}
int main()
{
    fastio;
    int t;
    int i = 1;
    cin >> t;
    while (t--)
    {
        // cout << "Caso #" << i << ": ";
        printf("Caso #%d: %.0f\n", i, solve());
        // printf("\n");
        i++;
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int b, g, res;
    cin >> b >> g;
    g = g / 2;
    res = g - b;
    if (g <= b)
    {
        printf("Amelia tem todas bolinhas!\n");
    }
    else
    {
        printf("Faltam %d bolinha(s)\n", res);
    }
    return 0;
}
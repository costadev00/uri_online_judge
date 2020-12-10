#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int s, va, vb;
    float res = 0;
    while (cin >> s >> va >> vb)
    {
        if (vb >= va)
        {
            printf("impossivel\n");
        }
        else
        {
            va = va - vb;
            res = (float)s / va;
            printf("%.2f\n", res);
        }
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    double l, i = 3, x = 0;
    do
    {
        cin >> l;
        if (l == 0)
        {
            break;
        }
        x = (i - l) / l;
        printf("%.6lf\n", abs(x));

    } while (l != 0);
    return 0;
}
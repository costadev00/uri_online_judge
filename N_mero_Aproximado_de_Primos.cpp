#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    double n, res1, res2;
    cin >> n;
    res1 = n / log(n);
    res2 = 1.25506 * res1;
    printf("%.1lf %.1lf\n", min(res1, res2), max(res1, res2));
    return 0;
}
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    float n, x, res = 0;
    cin >> n >> x;
    res = x / n;
    printf("%.2f\n", res);
    return 0;
}
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    double a, b, res = 0, aux = 0;
    cin >> a >> b;
    aux = b - a;

    res = (aux * 100) / a;
    printf("%.2lf%%\n", res);
    return 0;
}
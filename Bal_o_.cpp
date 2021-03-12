#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    long long cont = 0;
    double pi = 3.1415, r, l, v = 0, gas = 0;
    cin >> r >> l;
    r = r * r * r;
    v = (4.0f * (pi * r)) / 3.0f;
    while (l >= 0)
    {
        l -= v;
        cont++;
    }
    cout << cont - 1 << endl;
    return 0;
}
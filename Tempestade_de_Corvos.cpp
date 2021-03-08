#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    double xf, yf, xi, yi, vi, r1, r2, distmax = 0, dist;
    while (cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2)
    {
        dist = sqrt(((xi - xf) * (xi - xf)) + ((yi - yf) * (yi - yf)));
        distmax = r1 + r2;
        vi *= 1.5;
        dist += vi;
        if (dist <= distmax)
        {
            cout << "Y\n";
        }
        else
        {
            cout << "N\n";
        }
    }
    return 0;
}
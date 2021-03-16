#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, r, e, c, v = 0;
    cin >> n;
    while (n--)
    {

        cin >> r >> e >> c;
        v = e - c;
        if (v > r)
        {
            cout << "advertise\n";
        }
        else if (v == r)
        {
            cout << "does not matter\n";
        }
        else
        {
            cout << "do not advertise\n";
        }
    }
    return 0;
}
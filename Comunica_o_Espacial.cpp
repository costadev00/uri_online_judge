// TODO SOLVE
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, x, y, z, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        res = (x + y) - z;
        if (res <= 20)
        {
            cout << "A\n";
        }
        else if (res > 20 && res < 50)
        {
            cout << "M\n";
        }
        else
        {
            cout << "B\n";
        }
    }
    return 0;
}
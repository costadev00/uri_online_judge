#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    int n, m, a, t, aux;
    string p, res;
    while (cin >> n && n != 0)
    {
        aux = 2114;
        while (n--)
        {
            cin >> p >> a >> t;
            if (a - t < aux)
            {
                aux = a - t;
                res = p;
            }
        }
        cout << res << endl;
    }
    return 0;
}
//TODO: SOLVE
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    bool epos = true;
    int n, c, p;
    double somac = 0, somap = 0;
    cin >> n;
    while (n--)
    {
        cin >> c >> p;
        for (int i = 1; i <= c; i++)
        {
            if (i % 2 == 0)
            {
                somac += i;
            }
        }
        for (int i = 1; i <= p; i++)
        {
            if (i % 2 == 0)
            {
                somap += i;
            }
        }
        if ((somac / somap) > 1.0)
        {
            epos = false;
            break;
        }
        somac = 0;
        somap = 0;
    }
    if (epos)
    {
        cout << "OK\n";
    }
    else
    {
        cout << "FAIL\n";
    }

    return 0;
}
//TODO:SOLVE
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, j;
    string x, y;
    cin >> n;
    while (n--)
    {
        j = 0;
        cin >> x >> y;
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == y[j])
            {
                j++;
            }
        }
    }
    return 0;
}
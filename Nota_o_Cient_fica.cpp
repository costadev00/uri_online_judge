#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    double x;
    cin >> x;
    if (x >= 0)
    {

        printf("%+.4E\n", x);
    }
    else
    {
        printf("%-.4E\n", x);
    }
    return 0;
}
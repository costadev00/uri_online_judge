#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin >> n;
    if (n <= 800)
    {
        cout << 1 << endl;
    }
    else if (n <= 1400)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << b << endl;
        cout << a << endl;
    }
    else
    {
        cout << a << endl;
        cout << b << endl;
    }
    return 0;
}
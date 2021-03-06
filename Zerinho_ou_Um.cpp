#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        if (a != b && a != c)
        {
            cout << "A\n";
        }
        else if (b != a && b != c)
        {
            cout << "B\n";
        }
        else if (c != a && c != b)
        {
            cout << "C\n";
        }
        else if ((a == 1 && b == 1 && c == 1) || (a == 0 && b == 0 && c == 0))
        {
            cout << "*\n";
        }
    }
    return 0;
}
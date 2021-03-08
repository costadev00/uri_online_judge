#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    unsigned long long int p;
    while (1)
    {
        cin >> p;
        if (p == -1)
            return 0;
        if (p == 0)
            cout << "0\n";
        else
            cout << p - 1 << endl;
    }
    return 0;
}
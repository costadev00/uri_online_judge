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
    cin >> a;
    cin >> b;
    if (a.size() >= b.size())
        cout << "go\n";
    else
        cout << "no\n";
    return 0;
}
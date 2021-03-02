#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string st;
    set<string> s;
    while (cin >> st)
    {
        s.insert(st);
    }
    cout << s.size() << endl;
    return 0;
}
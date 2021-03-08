#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string t;
    getline(cin, t);
    if (t.size() <= 140)
    {
        cout << "TWEET\n";
    }
    else
    {
        cout << "MUTE\n";
    }
    return 0;
}
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if (s.find("zelda") != string::npos)
    {
        cout << "Link Bolado\n";
    }
    else
    {
        cout << "Link Tranquilo\n";
    }

    return 0;
}
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    char x;
    int n;
    while (cin >> n && n)
    {

        stack<char> s;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            s.push(x);
        }
    }
    return 0;
}
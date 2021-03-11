#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    // Take any string
    string s1 = "56234523485723854755454545478690";
    string s2 = "78690";
    string sub;

    // Copy three characters of s1 (starting
    // from position 1)
    int n, pos = 0;
    cin >> n;
    while (n--)
    {
        cin >> s1 >> s2;
        if (s1.size() < s2.size())
        {
            cout << "nao encaixa\n";
            continue;
        }
        pos = s1.size() - s2.size();
        sub = s1.substr(pos, s2.size());

        if (sub == s2)
        {
            cout << "encaixa\n";
        }
        else
        {
            cout << "nao encaixa\n";
        }
    }
    // cout << "String is: " << sub;

    return 0;
}

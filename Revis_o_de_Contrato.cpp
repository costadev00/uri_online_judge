#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) cout << (#args) << " = " << (args) << endl
#define MOD 1000000007
#define vi vector<int>
#define fl forward_list
#define pb push_back
#define pf push_front
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    char c;
    string s;
    list<char> l;
    while (cin >> c >> s)
    {
        if (c == '0' && s == "0")
            break;
        for (int i = 0; i < s.length(); i++)
        {
            l.push_back(s[i]);
        }
        l.remove(c);
        int flag = 0;
        if (l.empty())
        {
            cout << 0 << endl;
            continue;
        }
        int x = 1;
        for (auto i : l)
        {
            if (l.front() == '0' && (l.front() + 1) == '0')
            {
                x = 0;
            }
        }
        for (auto i : l)
        {
            cout << i;
        }
        cout << endl;
        l.clear();
    }
    return 0;
}
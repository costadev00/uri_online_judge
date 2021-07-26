#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) printf(args)
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    string s;
    while (read(s))
    {
        int ctrlI = 1, ctrlB = 1;
        FOR(i, 0, s.length())
        {
            if (s[i] == '_' && ctrlI == 1)
            {
                s.erase(s.begin() + i);
                s.insert(i, "<i>");
                ctrlI = 0;
            }
            else if (s[i] == '_' && ctrlI == 0)
            {
                s.erase(s.begin() + i);
                s.insert(i, "</i>");
                ctrlI = 1;
            }
            if (s[i] == '*' && ctrlB == 1)
            {
                s.erase(s.begin() + i);
                s.insert(i, "<b>");
                ctrlB = 0;
            }
            else if (s[i] == '*' && ctrlB == 0)
            {
                s.erase(s.begin() + i);
                s.insert(i, "</b>");
                ctrlB = 1;
            }
        }
        cout << s << endl;
        s.clear();
    }
    return 0;
}
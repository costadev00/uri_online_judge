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
    int t, res = 0;
    string s, num;
    while (cin >> t)
    {
        cin.ignore();
        while (t--)
        {
            cin >> s;
            FOR(i, 0, s.length())
            {
                if (s[i] >= 48 && s[i] <= 57)
                {
                    while (s[i] >= 48 && s[i] <= 57)
                    {
                        num.pb(s[i]);
                        i++;
                                        }
                    stringstream ext(num);
                    int x = 0;
                    ext >> x;
                    res += x;
                }
                num.clear();
            }
            cout << res << endl;
            res = 0;
            s.clear();
        }
    }
    return 0;
}
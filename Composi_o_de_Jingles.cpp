#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...)
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
    map<char, float> mp;
    mp['W'] = 1.0;
    mp['H'] = 0.5;
    mp['Q'] = 0.25;
    mp['E'] = 0.125;
    mp['S'] = 0.0625;
    mp['T'] = 0.03125;
    mp['X'] = 0.015625;
    string s;
    while (cin >> s)
    {
        cin.ignore();
        if (s == "*")
            break;
        int corr = 0;
        int i = 0;
        while (i < s.length())
        {
            float acm = 0.0;
            if (s[i] != '/')
            {
                while (s[i] != '/')
                {
                    acm += mp[s[i]];
                    debug(s[i]);
                    i++;
                }
                debug(acm);
                if (acm == 1.0)
                    corr++;
            }
            i++;
        }
        cout << corr << endl;
    }
    return 0;
}
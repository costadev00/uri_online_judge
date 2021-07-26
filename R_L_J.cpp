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
    string s, num;
    int res = 0;
    while (cin >> s)
    {

        if (s[0] >= 48 && s[0] <= 57 && s[2] >= 48 && s[2] <= 57)
        {

            num.pb(s[0]);
            stringstream ext(num);
            int x = 0;
            ext >> x;
            res += x;
            num.clear();
            num.pb(s[2]);
            stringstream ext1(num);
            ext1 >> x;
            res += x;
            cout << res << endl;
        }
        else if (s[0] >= 48 && s[0] <= 57 && s[4] >= 48 && s[4] <= 57)
        {
            num.pb(s[4]);
            stringstream ext2(num);
            int x = 0;
            ext2 >> x;
            res += x;
            num.clear();
            num.pb(s[0]);
            stringstream ext3(num);
            ext3 >> x;
            res -= x;
            cout << res << endl;
        }
        else
        {
            num.pb(s[4]);
            stringstream ext4(num);
            int x = 0;
            ext4 >> x;
            res += x;
            num.clear();
            num.pb(s[2]);
            stringstream ext5(num);
            ext5 >> x;
            res -= x;
            cout << res << endl;
        }
        res = 0;
        num.clear();
    }
    return 0;
}
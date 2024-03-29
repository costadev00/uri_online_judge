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
    ll n;
    char c;
    ll t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> n;
        read(s);
        ll k = s.size();
        ll res = 0;
        ll i = 1;
        ll cal = 2;
        ll aux = 1;
        while (cal >= 1)
        {
            cal = n - (i * k);
            if (cal < 1)
                break;
            aux *=cal;
            i++;
        }
        res += n * aux;
        s.clear();
        cout << res << endl;
    }
    return 0;
}
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
    int t;
    string s;
    int cnt = 1;
    while (cin >> t)
    {
        cin.ignore();
        while (t--)
        {
            cin >> s;
            for (int i = 0; i < s.length(); i++)
            {
                if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 's')
                    cnt *= 3;
                else
                    cnt *= 2;
            }
            cout << cnt << endl;
            cnt = 1;
            s.clear();
        }
    }
    return 0;
}
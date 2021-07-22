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
    int t, n, a, acm = 0;

    while (cin >> t)
    {

        while (t--)
        {
            cin >> n;
            int c = n;
            while (c--)
            {
                cin >> a;
                if (a % (n + 1) != 0)
                {
                    acm += a * (n + 1);
                }
                else
                    acm += a / (n + 1);
            }
            cout << acm << endl;
            acm = 0;
        }
    }
    return 0;
}
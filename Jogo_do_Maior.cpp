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
    int n;
    while (cin >> n && n)
    {
        int pp = 0, pg = 0;
        int x, y;
        while (n--)
        {
            cin >> x >> y;
            if (x > y)
            {
                pp++;
            }
            else if (y > x)
            {
                pg++;
            }
        }
        cout << pp << " " << pg << endl;
        ;
    }

    return 0;
}
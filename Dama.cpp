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
    int x1, y1, x2, y2;
    int res = 0;
    while (cin >> x1 >> y1 >> x2 >> y2 && x1 && y1 && x2 && y2)
    {
        int mat[8][8] = {0};
        mat[x2][y2] = 1;
        if (x1 == x2 && y1 == y2)
        {
            cout << 0 << endl;
            continue;
        }
        int distx = abs(x1 - x2);
        int disty = abs(y1 - y2);
        if (y1 == y2 || x1 == x2 || distx == disty)
            res = 1;
        else
            res = 2;
        cout << res << endl;
    }
    return 0;
}

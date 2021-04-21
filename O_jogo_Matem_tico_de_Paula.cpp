#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int n;
    while (cin >> n)
    {
        int d1, d2;
        char c;
        for (int i = 0; i < n; i++)
        {
            scanf("%d%c%d", &d1, &c, &d2);
            if (d1 == d2)
            {
                cout << d1 * d2 << endl;
                continue;
            }
            if (c >= 65 && c <= 90)
            {
                cout << d2 - d1 << endl;
            }
            else
            {
                cout << d1 + d2 << endl;
            }
        }
    }
    return 0;
}
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
#define read(n) getline(cin, n)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int n;
    while (cin >> n)
    {
        int h, m, c, res = 0, hora_inicial = 7, hora_final = 19;
        int tot = hora_inicial * 60;
        while (n--)
        {
            cin >> h >> m >> c;
            while (tot < h * 60 + m)
            {
                tot += 30;
            }
            if (tot - (h * 60 + m) > c)
            {
                res++;
            }
            tot += 30;
        }
        cout << res << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
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
    int n, t = 0;
    while (cin >> n && n)
    {
        int ans = 0;
        int x;
        char c;
        bool v = true;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (flag)
            {
                cin >> c;
                if (c == '+')
                    v = true;
                else
                    v = false;
            }
            flag = true;
            cin >> x;
            if (v)
            {
                ans += x;
            }
            else
            {
                ans -= x;
            }
        }

        cout << "Teste " << ++t << endl;
        cout << ans << endl
             << endl;
    }
    return 0;
}
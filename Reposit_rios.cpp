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
    int c, n;
    int p, v;
    map<int, int> m, maux;
    while (cin >> c >> n)
    {
        while (c--)
        {
            cin >> p >> v;
            m[p] = v;
        }
        while (n--)
        {
            cin >> p >> v;
            if (m.find(p) != m.end())
            {
                if (m[p] < v)
                {
                    maux[p] = v;
                    m[p] = v;
                }
            }
            else
            {
                if (maux.find(p) != maux.end())
                {
                    if (maux[p] < v)
                        maux[p] = v;
                }
                else
                {
                    maux[p] = v;
                }
            }
        }

        for (auto i : maux)
            cout << i.first << " " << i.second << endl;
        m.clear();
        maux.clear();
    }
    return 0;
}
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
    int d1, h1, m1;
    int d2, h2, m2;
    while (cin >> d1 >> h1 >> m1 >> d2 >> h2 >> m2)
    {
        d1 *= 86400;
        h1 *= 3600;
        m1 *= 60;
        int somai = d1 + h1 + m1;
        d2 *= 86400;
        h2 *= 3600;
        m2 *= 60;
        int somaf = d2 + h2 + m2;
        cout << abs(somai - somaf) << endl;
    }
    return 0;
}
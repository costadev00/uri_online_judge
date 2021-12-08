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
    int v, p;
    cin >> v >> p;
    int tot = p * v;
    for (int i = 1; i <= 9; i += 1)
    {
        double res = (double)(tot * i) / 10;
        if (i + 1 == 10)
            cout << (int)ceil(res);
        else
            cout << (int)ceil(res) << " ";
    }
    cout << endl;
    return 0;
}
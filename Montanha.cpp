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
    int n;
    while (cin >> n)
    {
        int x;
        vi vet(0, n);
        bool p = false;
        FOR(i, 0, n)
        {
            cin >> x;
            vet.pb(x);
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (vet[i] < vet[i - 1] && vet[i] < vet[i + 1])
                p = true;
        }
        if (p)
            cout << "S\n";
        else
            cout << "N\n";
    }
    return 0;
}
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
        vi vet;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            vet.pb(x);
        }
        sort(vet.begin(), vet.end());
        int cont = 0;
        int res1 = n / 2;
        cout << res1 << " ";
        cout << vet[res1] - vet[res1 - 1] << endl;
    }
    return 0;
}
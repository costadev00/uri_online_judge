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
    int n, m;
    cin >> n >> m;
    vector<int> vet;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vet.pb(x);
    }
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        // debug(vet[i + 1] - vet[i]);
        // debug(m);
        if (vet[i + 1] - vet[i] > m)
        {
            flag = false;
            break;
        }
    }
    if (42195 - vet[n - 1] > m)
        flag = false;
    if (flag)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}
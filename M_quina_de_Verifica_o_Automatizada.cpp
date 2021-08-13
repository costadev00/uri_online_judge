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
    int n = 5, m = 5;
    int x;
    vector<int> vet1, vet2;
    while (n--)
    {
        cin >> x;
        vet1.pb(x);
    }
    while (m--)
    {
        cin >> x;
        vet2.pb(x);
    }
    bool flag = true;
    for (int i = 0; i < vet1.size(); i++)
    {
        if (vet1[i] == vet2[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "Y\n";
    else
        cout << "N\n";
    return 0;
}
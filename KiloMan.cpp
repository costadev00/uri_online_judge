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
    int t;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        string s;
        vector<int> vet;
        int tiros = 0;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            cin >> x;
            vet.pb(x);
        }
        cin >> s;
        for (int i = 0; i < t; i++)
        {
            if (s[i] == 'S' && (vet[i] == 1 || vet[i] == 2))
                tiros++;
            else if (s[i] == 'J' && vet[i] > 2)
                tiros++;
        }
        cout << tiros << endl;
    }
    return 0;
}
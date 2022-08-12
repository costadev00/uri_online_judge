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
    cin >> n;
    char x;
    vector<int> vet;
    int c = 0;
    bool flag = 1;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        if (flag)
        {
            if (x == 'A')
                vet.pb(0);
            else
                vet.pb(1);
            flag = 0;
        }
        if (!flag && x == 'A')
            c++;
        else if (!flag && x == 'B')
            c--;
        if (c < 0)
            c = 0;

        vet.pb(c);
    }
    for (auto u : vet)
        cout << u << " ";
    return 0;
}
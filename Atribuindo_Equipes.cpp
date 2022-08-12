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
    int x;
    vector<int> vet;
    for (int i = 0; i < 4; i++)
        cin >> x, vet.pb(x);
    sort(vet.begin(), vet.end());
    int t1 = vet[1] + vet[2];
    int t2 = vet[0] + vet[3];
    cout<<abs(t1-t2);
    return 0;
}
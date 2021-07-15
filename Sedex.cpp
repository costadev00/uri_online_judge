#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) printf(args)
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int n, a, l, p;
    cin >> n;
    cin >> a >> l >> p;
    int op = a * l * p;
    if (n <= a && n <= l && n <= p)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}
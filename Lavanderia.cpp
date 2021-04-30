#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int n, la, lb, sa, sb;
    bool posl = false, poss = false;
    cin >> n;
    cin >> la >> lb;
    cin >> sa >> sb;
    if (n >= la && n <= lb)
    {
        posl = true;
    }
    if (n >= sa && n <= sb)
    {
        poss = true;
    }
    if (posl && poss)
    {
        cout << "possivel\n";
    }
    else
    {
        cout << "impossivel\n";
    }

    return 0;
}
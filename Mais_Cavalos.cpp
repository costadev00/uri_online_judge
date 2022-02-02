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
    int l, ld;
    char ini, dest;
    bool val = true;
    cin >> ini >> l >> dest >> ld;

    if ((abs(ini - dest) == 2 && abs(l - ld) == 1) || (abs(ini - dest) == 1 && abs(l - ld) == 2))
        val = false;

    val ? cout << "INVALIDO\n" : cout << "VALIDO\n";

    return 0;
}
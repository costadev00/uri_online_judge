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
    unsigned long long int a, b, c;
    int cont;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;
        c = a ^ b;
        cout << __builtin_popcountll(c) << endl;
    }
    return 0;
}
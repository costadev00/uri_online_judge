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
    int a, amax, amin, n, cont = 0;
    while (cin >> n >> amin >> amax)
    {
        cont = 0;
        while (n--)
        {
            cin >> a;
            if (a >= amin && a <= amax)
                cont++;
        }
        cout << cont << endl;
    }
    return 0;
}
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
    double n, r = 0.0;
    cin >> n;
    while (n--)
    {
        r += 2.0;
        r = 1 / r;
    }
    r += 1.0;
    printf("%.10lf\n", r);
    return 0;
}
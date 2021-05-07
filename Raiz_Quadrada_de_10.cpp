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

double r(int n)
{
    if (n < 0)
        return 0.0;

    if (n == 0)
        return 1 / 6.0;

    return 1 / (6 + r(n - 1));
}
int main()
{
    fastio;
    int n;
    cin >> n;
    printf("%.10lf\n", 3 + r(n - 1));
    return 0;
}
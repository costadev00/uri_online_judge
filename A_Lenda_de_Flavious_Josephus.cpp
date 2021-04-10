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
#define read(n) getline(cin, n)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int voyMatar(int n, int k)
{
    int i, sobrev;
    sobrev = 0;

    for (i = 2; i <= n; i++)
        sobrev = (sobrev + k) % i;

    return sobrev + 1;
}
int main()
{
    fastio;
    int nc;
    int n, k, i = 1;
    cin >> nc;
    while (nc--)
    {
        cin >> n >> k;
        cout << "Case " << i << ": " << voyMatar(n, k) << endl;
        i++;
    }
    return 0;
}
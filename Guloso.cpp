//TODO:SOLVE
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

void genArray(ll array[], int N, int K, int S)
{
    int i;
    array[0] = S;
    for (i = 1; i < N; ++i)
        array[i] = (1LL * array[i - 1] * 1103515245 + 12345) % (2147483648LL);
}
int main()
{
    fastio;
    int t;
    cin >> t;
    int n, k, s;
    while (t--)
    {
        cin >> n >> k >> s;
        ll array[n];
        genArray(array, n, k, s);

        for (auto i : array)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
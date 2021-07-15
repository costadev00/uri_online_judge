//TODO: SOLVE
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

int waysToArrange(ll N, ll K, ll k[])
{
    ll C[N + 1][N + 1];
    int i, j;

    // Calculate value of Binomial Coefficient in
    // bottom up manner
    for (i = 0; i <= N; i++)
    {
        for (j = 0; j <= i; j++)
        {

            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;

            // Calculate value using previously
            // stored values
            else
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]);
        }
    }

    // declare dp array to store result up to ith
    // colored item
    ll dp[K];

    // variable to keep track of count of items
    // considered till now
    ll count = 0;

    dp[0] = 1;

    // loop over all different colors
    for (int i = 0; i < K; i++)
    {

        // populate next value using current value
        // and stated relation
        dp[i + 1] = (dp[i] * C[count + k[i] - 1][k[i] - 1]);
        count += k[i];
    }

    // return value stored at last index
    return dp[K];
}

int main()
{
    fastio;
    ll n, k, l;
    while (scanf("%lld %lld %lld", &n, &k, &l))
    {
        ll K[2];
        K[0] = k;
        K[1] = l;
        cout << waysToArrange(n, 2, K) << endl;
    }

    return 0;
}
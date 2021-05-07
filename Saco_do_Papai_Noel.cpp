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

int sum = 0;
int it = 0;

int knapsackBottomUp(int W, int wt[], int val[], int n)
{
    int i, w;
    int dp[n + 1][W + 1];

    // Build table dp[][] in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    // stores the result of Knapsack
    int res = dp[n][W];

    w = W;
    for (i = n; i > 0 && res > 0; i--)
    {

        // either the result comes from the top
        // (dp[i-1][w]) or from (val[i-1] + dp[i-1]
        // [w-wt[i-1]]) as in Knapsack table. If
        // it comes from the latter one/ it means
        // the item is included.
        if (res == dp[i - 1][w])
            continue;
        else
        {
            // This item is included.
            //sum the total weight
            sum += wt[i - 1];
            // Since this weight is included its
            // value is deducted
            res = res - val[i - 1];
            w = w - wt[i - 1];
            //sum of how many packages(items)
            it++;
        }
    }
    return dp[n][W];
}
int main()
{
    fastio;
    int n, pac;
    cin >> n;
    while (n--)
    {
        cin >> pac;
        int qt[pac], peso[pac];
        for (int i = 0; i < pac; i++)
        {
            cin >> qt[i] >> peso[i];
        }
        sum = 0;
        it = 0;
        cout << knapsackBottomUp(50, peso, qt, pac) << " brinquedos\n";
        cout << "Peso: " << sum << " kg\n";
        cout << "sobra(m) " << pac - it << " pacote(s)\n";
        cout << endl;
    }
    return 0;
}
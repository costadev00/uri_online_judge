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

#define MAXH 20

vector<vector<int>> dp;
vector<int> s, m;

int N, L, H;
int main()
{
    fastio;
    cin >> N >> L >> H;

    s = vector<int>(N);
    m = vector<int>(N);

    for (int i = 0; i < N; i++)
        cin >> s[i];
    for (int i = 0; i < N; i++)
        cin >> m[i];

    int MIN = numeric_limits<int>::min();

    int res = MIN;
    dp = vector<vector<int>>(N, vector<int>(MAXH + 1, MIN));

    // dp[i][k] = (soma do) sufixo da sequencia s_0,...,s_i, de soma maxima,
    //            contendo exatamente k elementos marcados

    // base
    if (m[0] == 1)
    { // marcado
        dp[0][0] = 0;
        dp[0][1] = s[0];
    }
    else
    { // nao marcado
        dp[0][0] = max(0, s[0]);
    }

    // recursao
    for (int i = 1; i < N; i++)
    {
        for (int k = 0; k <= H; k++)
        {
            if (m[i] == 1)
            { // marcado
                if (k == 0)
                    dp[i][0] = 0;
                if (k > 0 and dp[i - 1][k - 1] > MIN)
                    dp[i][k] = dp[i - 1][k - 1] + s[i];
            }
            else
            { // nao marcado
                if (k == 0)
                    dp[i][0] = max(0, dp[i - 1][0] + s[i]);
                if (k > 0 and dp[i - 1][k] > MIN)
                    dp[i][k] = dp[i - 1][k] + s[i];
            }
        }

        // maximo global
        for (int k = L; k <= H; k++)
            if (dp[i][k] > MIN)
                res = max(res, dp[i][k]);
    }

    cout << res << endl;

    return 0;
}
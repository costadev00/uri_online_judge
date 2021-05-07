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

// Implementar o problema da Mochila binária (0-1) utilizando as abordagens:
// a) PD top-down com memoização.
// b) PD bottom-up.

// Testar com os valores: peso = { 4, 2, 1, 3 } e valor = { 500, 400, 300, 450 } e responda qual é o valor máximo para uma mochila de peso W = 5.

// Entregar um arquivo compactado com o código-fonte. Pode ser feito em duplas (não se esqueçam de incluir os nomes dentro do código-fonte).
#include <bits/stdc++.h>
using namespace std;
int weight;
// Returns the value of maximum profit
int knapSackRec(int W, int wt[], int val[], int i, int **dp)
{
    // base condition
    if (i < 0)
        return 0;
    if (dp[i][W] != -1)
    {
        weight = W;
        return dp[i][W];
    }

    weight = W;
    if (wt[i] > W)
    {
        // Store the value of function call
        // stack in the table before return
        dp[i][W] = knapSackRec(W, wt, val, i - 1, dp);
        return dp[i][W];
    }
    else
    {
        // Store value in a table before return
        dp[i][W] = max(val[i] + knapSackRec(W - wt[i], wt, val, i - 1, dp), knapSackRec(W, wt, val, i - 1, dp));
        // Return value of table after storing
        return dp[i][W];
    }
}

int knapSackTopDown(int W, int wt[], int val[], int n)
{
    // double pointer to declare the
    // table dynamically
    int **dp;
    dp = new int *[n];

    // loop to create the table dynamically
    for (int i = 0; i < n; i++)
        dp[i] = new int[W + 1];

    //memoization with -1 before calling the recursive function
    for (int i = 0; i < n; i++)
        for (int j = 0; j < W + 1; j++)
            dp[i][j] = -1;
    return knapSackRec(W, wt, val, n - 1, dp);
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
        weight = 0;
        cout << knapSackTopDown(50, peso, qt, pac) << " brinquedos\n";
        cout << "Peso: " << 50 - weight << " kg\n";
    }
    return 0;
}
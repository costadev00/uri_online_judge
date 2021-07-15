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

int knapSack(int W, int wt[], float val[], int n)
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
                dp[i][w] = fmax(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
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
            sum += wt[i - 1] * val[i - 1];
            // Since this weight is included its
            // value is deducted
            res = res - val[i - 1];
            w = w - wt[i - 1];
        }
    }
    return dp[n][W];
}
int main()
{
    fastio;
    int qa, qtd_mun, qm, qtd_mon;
    string nome_arma, nome_mon;
    while (cin >> qa)
    {
        float val[qa];
        int wt[qa];
        int W, i = 0, resis = 0, soma_tot = 0;
        float valor = 0;
        while (qa--)
        {
            cin >> nome_arma >> qtd_mun;
            if (nome_arma == "HANDGUN")
                valor = 2;
            else if (nome_arma == "RED9")
                valor = 3.5;
            else if (nome_arma == "BLACKTAIL")
                valor = 3.5;
            else if (nome_arma == "MATILDA")
                valor = 2;
            else if (nome_arma == "HANDCANNON")
                valor = 60;
            else if (nome_arma == "STRIKER")
                valor = 12;
            else if (nome_arma == "TMP")
                valor = 1.2;
            else if (nome_arma == "RIFLE")
                valor = 12;
            val[i] = valor;
            wt[i] = qtd_mun;
            i++;
        }
        cin >> qm;
        while (qm--)
        {
            cin >> nome_mon >> qtd_mon;
            if (nome_mon == "GANADOS")
                resis = 50;
            else if (nome_mon == "COBRAS")
                resis = 40;
            else if (nome_mon == "ZEALOT")
                resis = 75;
            else if (nome_mon == "COLMILLOS")
                resis = 60;
            else if (nome_mon == "GARRADOR")
                resis = 125;
            else if (nome_mon == "LASPLAGAS")
                resis = 100;
            else if (nome_mon == "GATLINGMAN")
                resis = 150;
            else if (nome_mon == "REGENERATOR")
                resis = 250;
            else if (nome_mon == "ELGIGANTE")
                resis = 500;
            else if (nome_mon == "DR.SALVADOR")
                resis = 350;
            soma_tot += resis * qtd_mon;
        }
        cin >> W;
        sum = 0;
        knapSack(W, wt, val, i);
        if (sum >= soma_tot)
            cout << "Missao completada com sucesso\n\n";
        else
            cout << "You Are Dead\n\n";
    }
    return 0;
}

//ACC?...
// #include "bits/stdc++.h"

// using namespace std;

// int knapsack(int cap, vector<int> &w, vector<int> &v)
// {
//     int n = w.size();
//     int dp[n + 1][cap + 1];
//     memset(dp, 0, sizeof(dp));

//     for (int i = 1; i <= n; i++)
//     {
//         int p = w[i - 1], g = v[i - 1];
//         for (int sz = 1; sz <= cap; sz++)
//         {
//             dp[i][sz] = dp[i - 1][sz];
//             if (sz < p)
//                 continue;
//             dp[i][sz] = max(dp[i][sz], dp[i - 1][sz - p] + g);
//         }
//     }
//     return dp[n][cap];
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     map<string, double> arms = {
//         {"HANDGUN", 2},
//         {"RED9", 3.5},
//         {"BLACKTAIL", 3.5},
//         {"MATILDA", 2},
//         {"HANDCANNON", 60},
//         {"STRIKER", 12},
//         {"TMP", 1.2},
//         {"RIFLE", 12},
//     };

//     map<string, int> mons = {
//         {"GANADOS", 50},
//         {"COBRAS", 40},
//         {"ZEALOT", 75},
//         {"COLMILLOS", 60},
//         {"GARRADOR", 125},
//         {"LASPLAGAS", 100},
//         {"GATLINGMAN", 150},
//         {"REGENERATOR", 250},
//         {"ELGIGANTE", 500},
//         {"DR.SALVADOR", 350},
//     };

//     int na, nm, wi, vi, c, m;
//     string name;
//     vector<int> w, v;
//     while (cin >> na)
//     {
//         while (na--)
//         {
//             cin >> name >> wi;
//             vi = arms[name] * wi;
//             w.push_back(wi);
//             v.push_back(vi);
//         }
//         m = 0;
//         cin >> nm;
//         while (nm--)
//         {
//             cin >> name >> wi;
//             m += mons[name] * wi;
//         }
//         cin >> c;
//         if (knapsack(c, w, v) - m > 0)
//             cout << "Missao completada com sucesso\n\n";
//         else
//             cout << "You Are Dead\n\n";
//         //cout<<c<<' '<<m<<"\n";
//         w.clear();
//         v.clear();
//     }

//     return 0;
// }
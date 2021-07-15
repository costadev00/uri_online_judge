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
    int n;
    int preco = 7;
    cin >> n;
    if (n >= 11)
    {
        for (int i = 11; i < 31; i++)
        {
            if (i == n)
            {
                preco++;
                break;
            }
            preco++;
        }
    }
    if (n >= 31)
    {
        // cout << "entrei\n";
        int cont = 0;
        for (int i = 31; i <= 100; i++)
        {
            // cout << "cont = " << cont << endl;
            cont++;
            if (i == n)
            {
                preco += 2;
                break;
            }
            preco += 2;
        }
    }
    if (n >= 101)
        for (int i = 101; i <= n; i++)
        {
            if (i == n)
            {
                preco += 5;
                break;
            }
            preco += 5;
        }
    cout << preco << endl;
    return 0;
}
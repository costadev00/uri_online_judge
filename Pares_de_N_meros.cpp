#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) cout << (#args) << " = " << (args) << endl
#define MOD 1000000007
#define vi vector<int>
#define fl forward_list
#define pb push_back
#define pf push_front
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int n, c, f;
    int x;
    vi vet;
    while (cin >> n >> c >> f)
    {
        int cont = 0;
        FOR(i, 0, n)
        {
            cin >> x;
            vet.pb(x);
        }

        FOR(i, 0, n - 1)
        {
            for (int j = i + 1; j < n; j++)
            {
                int soma = vet[i] + vet[j];
                if (soma >= c && soma <= f)
                {
                    cont++;
                }
            }
        }

        cout << cont << endl;
    }
    return 0;
}
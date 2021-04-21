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
    int m, n, soma = 0;
    while (cin >> m >> n)
    {
        if (m == 0 && n == 0)
        {
            break;
        }
        soma = m + n;
        string soma_s = to_string(soma);
        for (int i = 0; i < soma_s.length(); i++)
        {
            if (soma_s[i] != '0')
            {
                cout << soma_s[i];
            }
        }
        cout << endl;
        soma = 0;
    }
    return 0;
}
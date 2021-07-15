#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) printf(args)
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int n;
    char p;
    while (cin >> n && n)
    {
        string exp;
        bool flag = true;
        int t, soma = 0, inco = 0;
        vector<char> vet;
        if (n == 0)
            break;
        FOR(i, 0, n)
        {
            cin >> p >> t >> exp;
            FOR(i, 0, vet.size())
            {
                if (vet[i] == p)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                if (exp == "correct")
                {
                    soma += t + inco;
                    vet.pb(p);
                    inco = 0;
                }
                else
                {
                    inco += 20;
                }
            }
        }
        cout << vet.size() << " " << soma << endl;
    }

    return 0;
}
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
    int n;
    vector<string> vet;
    string p;
    int cont = 0;
    while (cin >> n)
    {
        cin.ignore();
        FOR(i, 0, n)
        {
            cin >> p;
            if (count(vet.begin(), vet.end(), p) >= 1)
                continue;
            bool flag = true;
            for (int i = 0; i < p.length(); i++)
            {
                if (!isalpha(p[i]))
                    flag = false;
            }
            if (flag)
                vet.pb(p);
        }
        cout << "Falta(m) " << 151 - vet.size() << " pomekon(s).\n";
    }
    return 0;
}
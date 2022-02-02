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
    while (cin >> n)
    {
        cin.ignore();
        int cont = 0;
        char c;
        bool ok = true;

        while (cin >> c)
        {
            if (c == '{')
                cont++;
            else if (c == '}')
            {
                if (cont == 0)
                    ok = false;
                else
                    cont--;
            }
        }
        if (cont > 0)
            ok = false;
        if (ok)
            cout << "S\n";
        else
            cout << "N\n";
    }
    return 0;
}
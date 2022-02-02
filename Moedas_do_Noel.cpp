#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) 
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
    double n, m;

    while (cin >> n >> m)
    {
        int cont50 = 0, cont25 = 0, cont10 = 0, cont5 = 0, cont1 = 0;
        double x = m - n;
        double frac1 = x - (long)x;
        frac1*=100;
        int frac = lround(frac1);
        debug(frac);
        // frac = abs(frac);
        debug(frac);
        while (frac >= 50)
        {
            cont50++;
            frac -= 50;
        }
        debug(frac);
        while (frac >= 25)
        {
            cont25++;
            frac -= 25;
        }
        debug(frac);
        while (frac >= 10)
        {
            cont10++;
            frac -= 10;
        }
        debug(frac);
        while (frac >= 5)
        {
            cont5++;
            frac -= 5;
        }
        debug(frac);
        while (frac >= 1)
        {
            cont1++;
            frac -= 1;
            debug(frac);
        }
        debug(frac);
        cout << cont50 << " moeda(s) de 50\n";
        cout << cont25 << " moeda(s) de 25\n";
        cout << cont10 << " moeda(s) de 10\n";
        cout << cont5 << " moeda(s) de 5\n";
        cout << cont1 << " moeda(s) de 1\n";
    }
    return 0;
}
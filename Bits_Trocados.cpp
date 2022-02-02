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
    int v;
    int t = 1;
    while (cin >> v && v)
    {
        int cont50 = 0, cont10 = 0, cont5 = 0, cont1 = 0;
        if (v == 0)
            break;

        while (v >= 50)
        {
            cont50++;
            v -= 50;
        }
        while (v >= 10)
        {
            v -= 10;
            cont10++;
        }
        while (v >= 5)
        {
            cont5++;
            v -= 5;
        }
        while (v >= 1)
        {
            cont1++;
            v -= 1;
        }
        cout << "Teste " << t << endl;
        cout << cont50 << " " << cont10 << " " << cont5 << " " << cont1 << endl
             << endl;
        t++;
    }
    return 0;
}
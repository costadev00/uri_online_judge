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
    int n, p;
    while (cin >> n >> p)
    {
        int f1, f2;
        int cont = 0;
        while (n--)
        {
            cin >> f1 >> f2;
            if (f1 + f2 >= p)
                cont++;
        }
        cout << cont << endl;
    }
    return 0;
}
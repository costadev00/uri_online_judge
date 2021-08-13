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
    string a, b;
    while (cin >> n)
    {
        cin.ignore();
        while (n--)
        {
            int cont = 0;
            cin >> a >> b;
            for (int i = 0; i < b.length(); i++)
            {
                while (a[i] != b[i])
                {
                    if (a[i] >= 122)
                    {
                        a[i] -= 26;
                        continue;
                    }
                    if (a[i] != b[i])
                    {
                        a[i]++;
                        cont++;
                    }
                }
            }
            cout << cont << endl;
        }
    }

    return 0;
}
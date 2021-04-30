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
    int n, k, x;
    cin >> n;
    while (n--)
    {
        cin >> k;
        while (k--)
        {
            cin >> x;
            if (x == 1)
            {
                cout << "Rolien\n";
            }
            else if (x == 2)
            {
                cout << "Naej\n";
            }
            else if (x == 3)
            {
                cout << "Elehcim\n";
            }
            else
            {
                cout << "Odranoel\n";
            }
        }
    }
    return 0;
}
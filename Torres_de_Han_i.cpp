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

int cont = 0;
ll hanoi(ll n)
{
    if (n == 1)
        return 1;
    cont++;
    return 2 * hanoi(n - 1) + 1;
}

int main()
{
    fastio;
    ll n;
    int i = 1;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        cout << "Teste " << i << endl;
        cout << hanoi(n) << endl;
        cout << endl;
        i++;
    }
    return 0;
}
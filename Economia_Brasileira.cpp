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
    int q, x;
    vi vet;
    cin >> q;
    while (q--)
    {
        cin >> x;
        vet.push_back(x);
    }
    int conta0 = 0;
    int conta1 = 0;
    conta0 = count(vet.begin(), vet.end(), 0);
    conta1 = count(vet.begin(), vet.end(), 1);

    if (conta1 >= conta0)
    {
        cout << "N\n";
    }
    else
    {
        cout << "Y\n";
    }
    return 0;
}
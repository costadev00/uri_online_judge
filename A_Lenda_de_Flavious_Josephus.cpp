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

vi vet;
int winner(int n)
{
    int aux = n;
    if (aux == 1)
    {
        return 0;
    }
    aux--;
}
int main()
{
    fastio;
    int c = 1, n, k;
    cin >> c;
    while (c--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            vet.push_back(i);
        }
        cout << "Case " << c << ":" << winner(n) << endl;
        c++;
    }
    return 0;
}
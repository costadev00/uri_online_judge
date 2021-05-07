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
    int n;
    cin >> n;
    while (n--)
    {
        int m, x;
        vector<int> vet, vet_sorted;
        cin >> m;
        while (m--)
        {
            cin >> x;
            vet.pb(x);
        }
        vet_sorted = vet;
        sort(vet_sorted.begin(), vet_sorted.end(), greater<int>());
        int l = vet.size();
        int cont = 0;
        for (int i = 0; i < l; i++)
        {
            if (vet[i] == vet_sorted[i])
                cont++;
        }
        cout << cont << endl;
    }
    return 0;
}
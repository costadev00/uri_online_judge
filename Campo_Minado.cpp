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
    cin >> n;
    int vet[n];
    int vet2[n] = {0};
    FOR(i, 0, n)
    {
        cin >> vet[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (vet[i] == 1)
            vet2[i]++;
        if (vet[i - 1] == 1)
            vet2[i]++;
        if (vet[i + 1] == 1)
            vet2[i]++;
    }
    for (auto i : vet2)
        cout << i << endl;
    return 0;
}
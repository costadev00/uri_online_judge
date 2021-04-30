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
    double x;
    vector<double> vet;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        vet.pb(x);
    }
    sort(vet.begin(), vet.end());
    double cont = 0;
    for (int i = 1; i < 4; i++)
    {
        cont += vet[i];
    }
    printf("%.1lf\n", cont);
    return 0;
}
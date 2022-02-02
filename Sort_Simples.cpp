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
    int vet[3];
    cin >> vet[0];
    cin >> vet[1];
    cin >> vet[2];
    sort(vet[0], vet[0] + 3);
    cout << vet[0] << endl;
    cout << vet[1] << endl;
    cout << vet[2] << endl;
    return 0;
}
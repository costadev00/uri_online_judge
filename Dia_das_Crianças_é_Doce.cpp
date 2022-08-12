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
    int n, k;
    int x, y;
    cin >> n >> k;
    // vector<pair<int, int>> vet;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> x >> y;
    //     vet.push_back({x, y});
    // }
    // cout << vet[k - 1].first % vet[k - 1].second;

    vector<int> vet;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        int md = x % y;
        vet.push_back(md);
    }
    sort(vet.begin(), vet.end());
    cout << vet[k - 1] << endl;
    return 0;
}
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
    int rod, ped, ckm, cped, tot = 0;
    bool f = false;
    cin >> rod >> ped;
    cin >> ckm >> cped;

    cout << (rod * ckm) + ((rod / ped) * cped) << endl;
    return 0;
}
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) printf(args)
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int n, m;
    cin >> n >> m;
    string fruits[n];
    string exp;

    FOR(i, 0, n)
    {
        cin >> fruits[i];
        transform(fruits[i].begin(), fruits[i].end(), fruits[i].begin(), ::tolower);
    }
    FOR(i, 0, m)
    {
        cin >> exp;
        transform(exp.begin(), exp.end(), exp.begin(), ::tolower);
        int l = exp.length();
        for (int j = 0; j < l; j++)
        {
            for (int k = 0; k < fruits[i].length(); k++)
            {
            }
        }
    }

    return 0;
}
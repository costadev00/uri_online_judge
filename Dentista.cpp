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

bool cmp(pair<int, int> i, pair<int, int> r)
{
    return i.second < r.second;
}

int main()
{
    fastio;
    int n;
    while (cin >> n)
    {
        vector<pair<int, int>> ac;
        int x, y;
        while (n--)
        {
            cin >> x >> y;
            ac.push_back(make_pair(x, y));
        }
        sort(ac.begin(), ac.end(), cmp);
        int fin = ac[0].second;
        int res = 1;
        for (int i = 1; i < ac.size(); i++)
        {
            if (ac[i].first >= fin){
                fin = ac[i].second;
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}
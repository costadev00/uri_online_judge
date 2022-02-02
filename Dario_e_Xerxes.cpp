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
    int n, d, x;
    vector<int> adj[1001];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(0);
    adj[3].push_back(4);
    adj[4].push_back(0);
    adj[4].push_back(1);

    int dario = 0, xerxes = 0;
    while (cin >> n)
    {
        while (n--)
        {
            cin >> d >> x;
            for (int i = 0; i < adj[d].size(); i++)
            {
                if (adj[d][i] == x)
                    dario++;
            }
            for (int i = 0; i < adj[x].size(); i++)
            {
                if (adj[x][i] == d)
                    xerxes++;
            }
        }
        if (dario > xerxes)
            cout << "dario\n";
        else
            cout << "xerxes\n";
    }

    return 0;
}
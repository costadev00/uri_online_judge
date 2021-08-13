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
    int t;
    int num;
    char par;
    vector<int> dir, esq;
    while (cin >> t)
    {
        int cont = 0;
        while (t--)
        {
            cin >> num >> par;
            if (par == 'D')
                dir.pb(num);
            else
                esq.pb(num);
        }
        for (int i = 0; i < dir.size(); i++)
        {
            for (int j = 0; j < esq.size(); j++)
            {
                if (dir[i] == esq[j])
                {
                    cont++;
                    esq.erase(esq.begin() + j);
                    break;
                }
            }
        }
        cout << cont << endl;
        dir.clear();
        esq.clear();
    }
    return 0;
}
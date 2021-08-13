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
    string a;
    string b;
    string c;
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        cin >> a >> b >> c;
        // debug(a);
        // debug(b);
        // debug(c);
        cin.ignore();
        bool cheater = false;
        // for (int i = 0; i < b.length(); i++)
        // {
        //     if (a.find(b[i]) == string::npos)
        //     {
        //         cheater = true;
        //     }
        // }
        // for (int i = 0; i < c.length(); i++)
        // {
        //     if (a.find(c[i]) == string::npos)
        //     {
        //         cheater = true;
        //     }
        //     cout << "oi\n";
        // }
        if (cheater)
            cout << "CHEATER\n";

        for (int i = 0; i < b.length(); i++)
        {
            auto pos = a.find(b[i]);
            if (pos != string::npos)
                a.erase(a.begin() + pos);
        }
        for (int i = 0; i < c.length(); i++)
        {
            auto pos = a.find(c[i]);
            if (pos == string::npos)
                a.erase(a.begin() + pos);
        }

        sort(a.begin(), a.end());
        cout << a << endl;
        a.clear(), b.clear(), c.clear();
    }

    return 0;
}
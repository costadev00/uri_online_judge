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
    int n, d;
    while (cin >> n >> d)
    {
        int x;
        string s;
        vector<string> vet;
        while (d--)
        {
            cin >> s;
            set<int> st;
            FOR(i, 0, n)
            {
                cin >> x;
                st.insert(x);
            }
            auto it = st.begin();
            if (st.size() == 1 && *it != 0)
                vet.pb(s);
        }
        // sort(vet.begin(), vet.end());
        if (vet.empty())
            cout << "Pizza antes de FdI\n";
        else
            cout << vet[0] << endl;
    }
    return 0;
}
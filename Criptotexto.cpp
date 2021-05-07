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
    int n;
    while (cin >> n)
    {

        string s, st;
        while (n--)
        {
            cin >> s;
            reverse(s.begin(), s.end());
            int tam = s.length();
            for (int i = 0; i < tam; i++)
            {
                if (islower(s[i]))
                {
                    st.pb(s[i]);
                }
            }

            cout << st << endl;
            st.clear();
        }
    }
    return 0;
}
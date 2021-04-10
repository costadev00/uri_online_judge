//TODO:SOLVE
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
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int n, z = 0, aux = 0;
    char res[20];
    char c;
    string st;
    cin >> n;
    bool is = true;
    while (n--)
    {
        while (cin.get(c))
        {
            if (c != '0' && is)
            {
                if (c != 'R' || c != 'A')
                {
                    st.push_back(c);
                }
                // is = false;
            }
        }
        for (int i = 3; i < st.length(); i++)
        {
            cout << st[i];
        }
        cout << endl;
        st.clear();
        // FOR(i, 0, st.length())
        // {
        //     if (st[i] == '0')
        //     {
        //         z++;
        //     }
        //     for (int j = z; j <= st.length(); j++)
        //     {
        //         res[aux] = st[j];
        //         aux++;
        //     }
        // }
    }
    return 0;
}
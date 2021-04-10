//TLE
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
#define read(n) getline(cin, n)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    string st;
    list<char> s1;
    list<char>::iterator it;
    while (read(st))
    {
        s1.clear();
        it = s1.begin();

        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] == ']')
            {
                it = s1.end();
            }
            else if (st[i] == '[')
            {
                it = s1.begin();
            }
            else
            {
                s1.insert(it, st[i]);
            }
        }
        for (it = s1.begin(); it != s1.end(); it++)
            cout << *it;

        cout << endl;
    }
    return 0;
}
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
    string s, s2;
    string scp;
    cin >> n;
    cin >> s;
    cin >> s2;

    if (n % 2 == 0)
    {
        for (int i = 0; i < s.length(); i++)
        {
            scp.push_back(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                scp.push_back('1');
            }
            else
            {
                scp.push_back('0');
            }
        }
    }
    if (scp == s2)
    {
        cout << "Deletion succeeded\n";
    }
    else
    {
        cout << "Deletion failed\n";
    }
    return 0;
}
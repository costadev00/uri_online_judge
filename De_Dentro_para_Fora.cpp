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
    int n;
    while (cin >> n)
    {
        cin.ignore();
        string str;
        while (n--)
        {
            read(str);
            int met = str.length() / 2;
            for (int i = met - 1; i >= 0; i--)
            {
                cout << str[i];
            }
            // cout << " ";
            for (int i = str.length() - 1; i >= met; i--)
            {
                cout << str[i];
            }
            cout << endl;
        }
    }
    return 0;
}
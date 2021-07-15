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
    string str;
    int n;
    while (cin >> n)
    {
        while (n--)
        {
            cin >> str;
            int tam = str.length();
            if (tam == 5)
            {
                cout << 3 << endl;
                continue;
            }
            else
            {
                // for (int i = 0; i < 3; i++)
                // {
                //     if (str[i] == 'o')
                // }
                if (str == "one")
                {
                    cout << 1 << endl;

                    continue;
                }
                else if (str[0] == 'o' && str[1] == 'n' && str[2] != 'e')
                {
                    cout << 1 << endl;
                    continue;
                }
                else if (str[0] == 'o' && str[1] != 'n' && str[2] == 'e')
                {
                    cout << 1 << endl;
                    continue;
                }
                else if (str[0] != 'o' && str[1] == 'n' && str[2] == 'e')
                {
                    cout << 1 << endl;
                    continue;
                }
                else
                    cout << 2 << endl;
            }
        }
    }

    return 0;
}
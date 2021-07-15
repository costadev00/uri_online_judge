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
    int chave;
    while (cin >> n)
    {
        cin.ignore();
        string str;
        while (n--)
        {
            cin >> str;
            cin >> chave;
            int tam = str.length();
            for (int i = 0; i < tam; i++)
            {
                str[i] = str[i] - chave;
                if (str[i] < 65)
                {
                    str[i] = str[i] + 26;
                }
            }
            cout << str << endl;
        }
    }
    return 0;
}
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
    string str;
    while (cin >> n)
    {
        cin.ignore();
        while (n--)
        {
            int x = n + 1;
            read(str);
            //1 passsada
            int tam = str.length();
            for (int i = 0; i < tam; i++)
            {
                if (isalpha(str[i]) != 0)
                {
                    str[i] = str[i] + 3;
                }
            }

            //2 passada
            reverse(str.begin(), str.end());

            //3 passada
            int met = trunc(tam / 2);
            for (int i = met; i < tam; i++)
            {
                str[i] = str[i] - 1;
            }
            cout << str << endl;
        }
    }
    return 0;
}
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
        string res, str1, str2;
        while (n--)
        {
            cin >> str1 >> str2;
            int aux = 0;
            int maior = max(str1.length(), str2.length());
            if (str1.length() > str2.length())
                aux = 1;
            else
                aux = 2;

            if (aux == 2)
            {
                for (int i = 0; i < str1.length(); i++)
                {
                    res.push_back(str1[i]);
                    res.push_back(str2[i]);
                }
            }
            else
            {
                for (int i = 0; i < str2.length(); i++)
                {
                    res.push_back(str1[i]);
                    res.push_back(str2[i]);
                }
            }
            if (aux == 1)
            {
                for (int i = str2.length(); i < str1.length(); i++)
                {
                    res.push_back(str1[i]);
                }
            }
            else if (aux == 2)
            {
                for (int i = str1.length(); i < str2.length(); i++)
                {
                    res.push_back(str2[i]);
                }
            }
            cout << res << endl;
            res.clear();
        }
    }
    return 0;
}
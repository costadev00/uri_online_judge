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

vector<string> split(const string &s, char delimiter)
{
    vector<string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}
int main()
{
    fastio;
    vector<string> s1, s2;
    string s, ss, a;
    getline(cin, s);
    getline(cin, ss);
    cin >> a;
    s1 = split(s, ' ');
    s2 = split(ss, ' ');
    bool b = true;
    if (a == "nao")
    {
        int k = 0;
        for (auto it : s1)
        {
            cout << it << " ";
        }
        for (auto it : s2)
        {
            if (k + 1 == s2.size())
                cout << it;
            else
                cout << it << " ";
            k++;
        }
        cout << endl;
        return 0;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == a && b)
        {
            b = false;
            for (int j = 0; j < s2.size(); j++)
            {
                cout << s2[j] << " ";
            }
        }
        if (i + 1 != s1.size())
        {
            cout << s1[i] << " ";
        }
        else
        {
            cout << s1[i];
        }
    }
    cout << endl;

    return 0;
}
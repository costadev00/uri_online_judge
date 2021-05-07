//TODOD:SOLVE
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
//compete·online·design·event·rating
//14
// 13-6 =7
//7-6
int main()
{
    fastio;
    int n;
    cin >> n;
    string s;
    char res[10000];
    while (n--)
    {
        cin >> s;
        int tam = s.length();
        int j = 1, x = 0;
        FOR(i, 0, tam)
        {
            if (s[i] == '.')
            {
                res[x] = s[j - i - 1];
                j = 1;
                x++;
            }
            j++;
        }
        cout << res << endl;
    }
    return 0;
}
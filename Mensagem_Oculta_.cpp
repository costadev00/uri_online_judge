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
//compete.online.design.event.rating
// ..u....r.i..o....n.l..i....n..e...
//14
// 13-6 =7
//7-6
int main()
{
    fastio;
    int n;
    cin >> n;
    cin.ignore();
    string str, res;
    vector<string> vets;
    while (n--)
    {
        read(str);
        vets = split(str, ' ');
        for (int i = 0; i < vets.size(); i++)
        {
            if (isalpha(vets[i][0]) != 0)
            {
                res.push_back(vets[i][0]);
            }
        }
        cout << res << endl;
        vets.clear();
        res.clear();
        // n--;
    }
    return 0;
}
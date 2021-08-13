#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) cout << (#args) << " = " << (args) << endl
#define MOD 1000000007
#define vi vector<int>
#define fl forward_list
#define pb push_back
#define pf push_front
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

int main()
{
    fastio;
    string s;
    while (read(s))
    {
        if (s == "*")
            break;
        vector<string> vet = split(s, ' ');
        int tam = vet.size();
        char l = tolower(vet[0][0]);
        bool flag = true;
        FOR(i, 0, tam)
        {
            char c = tolower(vet[i][0]);
            // debug(c);
            // debug(l);
            if (c != l)
            {
                cout << "N\n";
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "Y\n";
    }
    return 0;
}
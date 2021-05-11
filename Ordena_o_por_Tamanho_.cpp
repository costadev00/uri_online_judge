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

typedef struct
{
    string palavra;
    int tam;
} Letra;
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

bool compare(Letra a, Letra b)
{
    return a.tam > b.tam;
}
int main()
{
    fastio;
    int n, z = 0;
    cin >> n;
    string s;
    vector<string> s1;
    for (int j = 0; j <= n; j++)
    {
        read(s);
        s1 = split(s, ' ');
        Letra l[s1.size() + 1];
        for (int i = 0; i < s1.size(); i++)
        {
            l[i].palavra = s1[i];
            l[i].tam = s1[i].length();
        }

        stable_sort(l, l + s1.size(), compare);
        for (int i = 0; i < s1.size(); i++)
        {
            if (i + 1 == s1.size())
                cout << l[i].palavra << endl;
            else
                cout << l[i].palavra << " ";
        }
        // s1.clear();
        // cout << endl;
    }
    // cout << endl;
    return 0;
}
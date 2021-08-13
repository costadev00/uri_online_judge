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
    int t, d = 1, i;
    double acmkg = 0, acmdin = 0;
    vector<string> frutas;
    while (cin >> t)
    {
        cin.ignore();
        i = t;
        while (t--)
        {
            double v;
            int kg;
            string fruta;
            cin >> v;
            cin.ignore();
            acmdin += v;
            read(fruta);
            frutas = split(fruta, ' ');
            cout << "day " << d << ": " << frutas.size() << " kg" << endl;
            d++;
            acmkg += frutas.size();
            frutas.clear();
        }
    }
    double mediakg = acmkg / i;
    double mediadin = acmdin / i;
    printf("%.2lf kg by day\n", mediakg);
    printf("R$ %.2lf by day\n", mediadin);
    return 0;
}
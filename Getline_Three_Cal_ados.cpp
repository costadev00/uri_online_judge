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
    int n;
    string str;
    vector<string> vet;
    int contf = 0, contm = 0, M = 0, F = 0, p = 0;
    int tam = 0, c = 1, pri = 0;
    while (cin >> n)
    {
        cin.ignore();
        if (n != EOF && pri > 0)
        {
            cout << endl;
        }
        else if (n == EOF)
            break;
        pri++;
        if (n == EOF)
            break;
        read(str);
        vet = split(str, ' ');
        tam = vet.size();
        stringstream ss;
        ss << n;
        string ns = ss.str();
        for (int i = 0; i < tam; i++)
        {
            if (vet[i] == ns)
            {
                p++;
                if (vet[i + 1] == "F")
                    F++;
                else
                    M++;
            }
        }
        cout << "Caso " << c << ":" << endl;
        cout << "Pares Iguais: " << p << endl;
        cout << "F: " << F << endl;
        cout << "M: " << M << endl;
        c++;
        contf = 0, contm = 0, M = 0, F = 0, p = 0;
        tam = 0;
        str.clear();
        vet.clear();
        // debug(pri);
    }
    return 0;
}
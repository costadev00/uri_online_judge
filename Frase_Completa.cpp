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
    int n, cont = 0, qtd_letras = 0;
    bool existe;
    string str;
    while (cin >> n)
    {
        cin.ignore();
        while (n--)
        {
            read(str);
            for (int i = 0; i < str.length(); i++)
            {
                if (isalpha(str[i]) != 0)
                {
                    if (str.find(str[i]) != string::npos)
                        existe = true;
                    if (!existe)
                        cont++;
                    existe = false;
                }
            }
            if (cont >= 26)
            {
                cout << "frase completa\n";
                cout << cont << endl;
            }
            else if (cont >= 13)
            {
                cout << "frase quase completa\n";
                cout << cont << endl;
            }
            else
            {
                cout << "frase mal elaborada\n";
                cout << cont << endl;
            }
        }
    }
    return 0;
}
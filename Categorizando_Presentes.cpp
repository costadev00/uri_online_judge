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

int main()
{
    fastio;
    int n;
    while (cin >> n)
    {
        int contbri = 0, contali = 0, controu = 0, contcal = 0, contele = 0, contliv = 0, contgad = 0, contsma = 0, contjog = 0, contpap = 0;
        int x;
        string p;
        while (n--)
        {

            cin >> p >> x;
            switch (x)
            {
            case 1:
                contbri++;
                break;
            case 2:
                contali++;
                break;
            case 3:
                controu++;
                break;
            case 4:
                contcal++;
                break;
            case 5:
                contele++;
                break;
            case 6:
                contliv++;
                break;
            case 7:
                contgad++;
                break;
            case 8:
                contsma++;
                break;
            case 9:
                contjog++;
                break;
            case 10:
                contpap++;
                break;
            default:
                break;
            }
        }
        cout << "Total de Brinquedos: " << contbri << endl;
        cout << "Total de Alimentos: " << contali << endl;
        cout << "Total de Roupas: " << controu << endl;
        cout << "Total de Calcados: " << contcal << endl;
        cout << "Total de Eletronicos: " << contele << endl;
        cout << "Total de Livros: " << contliv << endl;
        cout << "Total de Gadgets: " << contgad << endl;
        cout << "Total de Smartphones: " << contsma << endl;
        cout << "Total de Jogos: " << contjog << endl;
        cout << "Total de Papelaria: " << contpap << endl;
    }
    return 0;
}
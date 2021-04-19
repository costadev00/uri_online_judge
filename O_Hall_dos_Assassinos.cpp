// TODO : SOLVE
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

struct Assasinos
{
    string nome;
    string assasinado;
    int cont = 0;
};

int main()
{
    fastio;
    Assasinos a[1000];
    string nome, ass;
    int i = 0;
    bool morreu = false;
    while (cin >> nome >> ass)
    {
        morreu = false;

        for (int j = 0; j < i; j++)
        {
            if (a[j].assasinado == ass)
            {
                morreu = true;
            }
        }
        if (!morreu)
        {
            a[i].nome = nome;
            a[i].assasinado = ass;
            a[i].cont++;
            i++;
        }

        for (int j = 0; j < i; j++)
        {
            if (a[j].nome == nome && !morreu)
            {
                a[j].cont++;
            }
        }
    }
    cout << "HALL OF MURDERERS" << endl;
    for (int k = 0; k < i; k++)
    {
        cout << a[k].nome << ' ' << a[k].cont << endl;
    }
    return 0;
}
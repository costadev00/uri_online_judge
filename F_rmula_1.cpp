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
#define MAXN 10001
int main()
{

    while (true)
    {
        int prizes, drivers, contador = 0;
        int finish[MAXN];

        cin >> prizes >> drivers;
        if (prizes == 0 && drivers == prizes)
            break;

        for (int i = 0; i < prizes; i++)
        {
            for (int j = contador; j < drivers + contador; j++)
            {
                cin >> finish[j];
            }
            contador += drivers;
        }

        int modalidades, variacoes, pontuacoes[110], premiados[110];

        cin >> modalidades;

        for (int i = 0; i < modalidades; i++)
        {
            for (int i = 0; i < 105; i++)
            {
                pontuacoes[i] = 0;
                premiados[i] = 0;
            }
            cin >> variacoes;
            for (int j = 0; j < variacoes; j++)
            {
                cin >> pontuacoes[j];
            }

            int turns = 1, pos = -1;
            for (int i = 0; i < contador; i++)
            {
                pos++;
                if (i == drivers * turns)
                {
                    turns++;
                    pos = 0;
                }
                premiados[pos] += pontuacoes[finish[i] - 1];
            }
            int maior = premiados[0], indice = 0, counter_equals = 0, equals[110];

            for (int u = 0; u < drivers; u++)
            {
                if (premiados[u] > maior)
                {
                    maior = premiados[u];
                    indice = u + 1;
                }
            }
            for (int u = 0; u < sizeof(premiados) / sizeof(int); u++)
            {
                if (premiados[u] == maior)
                {
                    equals[counter_equals] = u + 1;
                    counter_equals++;
                }
            }

            for (int i = 0; i < counter_equals; i++)
            {
                if (i == counter_equals - 1)
                    cout << equals[i];
                else
                {
                    cout << equals[i] << " ";
                }
            }
            cout << endl;
        }
    }
}
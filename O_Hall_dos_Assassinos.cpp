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

// class Assasinos
// {
// public:
//     string nome;
//     int cont = 0;
// };
typedef struct
{
    string nome;
    int cont = 0;
} Assasinos;

int deleteElement(Assasinos arr[], int n, Assasinos x)
{
    // Search x in array
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x.nome)
            break;

    // If x found in array
    if (i < n)
    {
        // reduce size of array and move all
        // elements on space ahead
        n = n - 1;
        for (int j = i; j < n; j++)
            arr[j] = arr[j + 1];
    }

    return n;
}
int main()
{
    fastio;
    Assasinos a[10000];
    string nome, ass;
    vector<string> assasinados;
    int j = 0, aux = 0;
    bool morreu = false, existe = false;

    while (cin >> nome >> ass)
    {
        assasinados.push_back(ass);
        for (int i = 0; i <= assasinados.size(); i++)
        {
            if (nome == assasinados[i])
            {
                morreu = true;
                deleteElement(a, j, a[i]);
                break;
            }
        }

        if (!morreu)
        {
            for (int i = 0; i < j; i++)
            {
                if (nome == a[i].nome)
                {
                    existe = true;
                    a[i].cont++;
                    break;
                }
            }
            if (!existe)
            {
                a[aux].nome = nome;
                a[aux].cont++;
                aux++;
            }
            j++;
        }
        morreu = false, existe = false;
        // cont++;
    }
    size_t x = sizeof(a) / sizeof(a[0]);
    cout << "HALL OF MURDERERS" << endl;
    bool matoumasmorreu = false;
    for (int k = 0; k < j - 1; k++)
    {
        for (int i = 0; i < assasinados.size(); i++)
        {
            if (a[k].nome == assasinados[i])
            {
                matoumasmorreu = true;
            }
        }
        if (!matoumasmorreu)
        {
            cout << a[k].nome << ' ' << a[k].cont << endl;
        }
    }
    return 0;
}
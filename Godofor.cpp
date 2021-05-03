//ordem lexicografica  =
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
    string nome;
    int poder, mortes, morreu;
} Deus;

int compare(Deus p1, Deus p2)
{
    if (p1.poder != p2.poder)
        return p1.poder > p2.poder;
    else if (p1.mortes != p2.mortes)
        return p1.mortes > p2.mortes;
    else if (p1.morreu != p2.morreu)
        return p1.morreu < p2.morreu;
    else
        return p1.nome < p2.nome;
}

int main()
{
    string nome;
    int n;
    while (cin >> n)
    {
        int poder, mortes, morreu, i = 0;
        Deus d[n + 1];
        int aux = n;
        while (aux--)
        {
            cin >> nome >> poder >> mortes >> morreu;
            d[i].nome = nome;
            d[i].poder = poder;
            d[i].mortes = mortes;
            d[i].morreu = morreu;
            i++;
        }

        stable_sort(d, d + n, compare);
        cout << d[0].nome << endl;
        nome.clear();
    }

    return 0;
}
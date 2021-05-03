#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    string nome;
    int ouro, prata, bronze;
} Pais;

bool compare(Pais p1, Pais p2)
{
    if (p1.ouro != p2.ouro)
        return p1.ouro > p2.ouro;

    else if (p1.prata != p2.prata)
        return p1.prata > p2.prata;

    else if (p1.bronze != p2.bronze)
        return p1.bronze > p2.bronze;

    else
        return p1.nome < p2.nome;
}
int main()
{
    int n;
    cin >> n;
    string nome;
    unsigned int ouro, prata, bronze;
    Pais p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nome >> ouro >> prata >> bronze;
        p[i].nome = nome;
        p[i].ouro = ouro;
        p[i].prata = prata;
        p[i].bronze = bronze;
    }
    stable_sort(p, p + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << p[i].nome << ' ' << p[i].ouro << ' ' << p[i].prata << ' ' << p[i].bronze << endl;
    }
}
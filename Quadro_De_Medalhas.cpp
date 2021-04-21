#include <bits/stdc++.h>
using namespace std;

class Pais
{
public:
    string nome;
    int ouro, prata, bronze;
};

int main()
{
    int n;
    cin >> n;
    string nome;
    int ouro, prata, bronze;
    Pais p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nome >> ouro >> prata >> bronze;
        p[i].nome = nome;
        p[i].ouro = ouro;
        p[i].prata = prata;
        p[i].bronze = bronze;
    }
    sort(p, p + n);
    for (int i = 0; i < n; i++)
    {
        cout << p[i].nome << ' ' << p[i].ouro << ' ' << p[i].prata << ' ' << p[i].bronze << endl;
    }
}
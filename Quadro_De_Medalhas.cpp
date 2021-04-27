#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    char nome[10000];
    int ouro, prata, bronze;
} Pais;

int compare(const void *p1, const void *p2)
{
    Pais *i = (Pais *)p1, *j = (Pais *)p2;
    if (i->ouro < j->ouro)
        return 1;
    else if (i->ouro > j->ouro)
        return -1;
    else if (i->prata < j->prata)
        return 1;
    else if (i->prata > j->prata)
        return -1;
    else if (i->bronze < j->bronze)
        return 1;
    else if (i->bronze > j->bronze)
        return -1;
    else
        return strcmp(i->nome, j->nome);
}
int main()
{
    int n;
    cin >> n;
    char nome[10000];
    unsigned int ouro, prata, bronze;
    Pais p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nome >> ouro >> prata >> bronze;
        strcpy(p[i].nome, nome);
        p[i].ouro = ouro;
        p[i].prata = prata;
        p[i].bronze = bronze;
    }
    qsort(p, n, sizeof(Pais), compare);

    for (int i = 0; i < n; i++)
    {
        cout << p[i].nome << ' ' << p[i].ouro << ' ' << p[i].prata << ' ' << p[i].bronze << endl;
    }
}
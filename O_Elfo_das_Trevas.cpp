#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

typedef struct
{
    char nome[101];
    int peso;
    int id;
    double a;
} renas;

int ordena(const void *p1, const void *p2)
{
    renas *i = (renas *)p1, *j = (renas *)p2;
    if (i->peso > j->peso)
        return -1;
    else if (i->peso < j->peso)
        return 1;
    else if (i->id > j->id)
        return 1;
    else if (i->id < j->id)
        return -1;
    else if (i->a > j->a)
        return 1;
    else if (i->a < j->a)
        return -1;
    else
        return strcmp(i->nome, j->nome);
}

int main()
{

    renas Renas[10001];
    int t, id, n, m;

    cin >> t;
    int aux = 1;
    while (t--)
    {
        cin >> n >> m;

        for (int j = 0; j < n; j++)
            cin >> Renas[j].nome >> Renas[j].peso >> Renas[j].id >> Renas[j].a;

        qsort(Renas, n, sizeof(renas), ordena);
        printf("CENARIO {%d}\n", aux);
        aux++;
        for (int i = 0; i < m; i++)
            printf("%d - %s\n", i + 1, Renas[i].nome, Renas[i].peso, Renas[i].id, Renas[i].a);
        // cout << Renas[i].nome, Renas[i].peso << Renas[i].id << Renas[i].a << endl;
    }

    return 0;
}
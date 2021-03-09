/*
TODO:SOLVE
*/
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, q, cont = 0;
    int tam;
    cin >> n;
    string palavra1;
    vector<string> vect;
    for (int i = 0; i < n; i++)
    {
        cin >> palavra1;
        vect.push_back(palavra1);
    }
    cin >> q;
    string palavra2;
    while (q--)
    {
        cin >> palavra2;
        cont = 0;
        tam = 0;
        for (int i = 0; i < n; i++)
        {
            if (vect[i].find(palavra2) == 0)
            {
                cont++;
                tam = max(tam, (int)vect[i].size());
            }
        }
        if (cont != 0)
        {
            printf("%d %d\n", cont, tam);
        }
        else
        {
            printf("%d\n", -1);
        }
    }
    return 0;
}
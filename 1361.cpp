#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int qntPisos;
    int pisosAzuis[500000];
    int pisosVermelhos[500000];
    int contAzuis, contVermelhos;
    int contAndares;
    bool azul;
    int aux;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> qntPisos;
        contAndares = 0;
        contAzuis = 0, contVermelhos = 0;
        for (int j = 0; j < qntPisos; j++)
        {
            cin >> aux;
            if (aux > 0)
                pisosAzuis[contAzuis++] = aux;
            else
                pisosVermelhos[contVermelhos++] = aux;
        }

        sort(pisosAzuis, pisosAzuis + contAzuis);
        sort(pisosVermelhos, pisosVermelhos + contVermelhos, greater<int>());

        int a = 0, v = 0;
        if (pisosAzuis[0] < abs(pisosVermelhos[0]))
        {
            azul = true;
            contAndares++;
        }
        else
        {
            azul = false;
            contAndares++;
        }

        while (a < contAzuis && v < contVermelhos)
        {
            if (azul)
            {
                if (abs(pisosVermelhos[v]) > pisosAzuis[a])
                {
                    azul = false;
                    contAndares++;
                    a++;
                }
                else
                {
                    v++;
                }
            }
            else
            {
                if (pisosAzuis[a] > abs(pisosVermelhos[v]))
                {
                    azul = true;
                    contAndares++;
                    v++;
                }
                else
                {
                    a++;
                }
            }
        }

        cout << contAndares << endl;
    }
    return 0;
}
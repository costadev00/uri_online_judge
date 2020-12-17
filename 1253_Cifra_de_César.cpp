/*
TODO: SOLVE
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cripto = 1, decisao;
    char frase[51];
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        // getchar();
        fgets(frase, 100, stdin);
        // getchar();
        cin >> cripto;

        for (int i = 0; frase[i] != '\0'; i++)
        {
            // for (frase[i]; frase[i] == ' '; i++)
            // {
            //     frase[i] = frase[i];
            // }
            frase[i] = (frase[i] - cripto);
            if (frase[i] < 65)
            {
                frase[i] = frase[i] - 17;
            }
            // frase[i] = frase[i] - cripto;
            // getchar();
        }
        printf("%s\n", frase);
        getchar();
    }
    return 0;
}

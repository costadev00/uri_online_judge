#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    char frase[40];
    int cont_grito = 0, cont_res = 0;
    while (cont_grito < 3)
    {

        fgets(frase, 40, stdin);
        if (frase[0] == 'c')
        {
            printf("%d\n", cont_res);
            cont_grito++;
            cont_res = 0;
        }
        else
        {
            if (frase[0] == '*')
            {
                cont_res += 4;
            }
            if (frase[1] == '*')
            {
                cont_res += 2;
            }
            if (frase[2] == '*')
            {
                cont_res += 1;
            }
        }
    }
    return 0;
}
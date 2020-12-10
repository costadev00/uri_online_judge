#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int cont = 0;
    char p[100000];
    cin >> p;
    for (int i = 0; i < strlen(p); i++)
    {
        if (p[i] == '(')
        {
            cont++;
        }
        if (p[i] == ')' == cont > 0)
        {
            cont--;
        }
        // printf("%c ", p[i]);
    }
    if (cont == 0)
    {
        printf("Partiu RU!\n");
    }
    else
    {
        printf("Ainda temos %d assunto(s) pendente(s)!\n", cont);
    }
    return 0;
}